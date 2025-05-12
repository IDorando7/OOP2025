#include <iostream>
#include <exception>
#include <algorithm>

using namespace std;

class exceptie1 : public exception
{
    virtual const char* what() const throw()
    {
        return "Impartire la 0!";
    }
};

class exceptie2 : public exception
{
    virtual const char* what() const throw()
    {
        return "Indexul este inafara domeniului!";
    }
};

class Compare
{
public:
    virtual int CompareElements(void* e1, void* e2) = 0;
};
template<class T>
class ArrayIterator
{
private:
    int Current; // mai adaugati si alte date si functii necesare pentru iterator
    T** Lista;
    int size;
public:
    ArrayIterator(T** list, int _size) : Lista(list), size(_size), Current(0) {}

    ArrayIterator& operator++ ()
    {
        Current++;
        return *this;
    }

    ArrayIterator& operator-- ()
    {
        if (Current > 0)
            Current--;
        return *this;
    }

    bool operator= (ArrayIterator<T>&other)
    {
        if (this != &other)
        {
            Current = other.Current;
            Lista = other.Lista;
            size = other.size;
        }
        return 1;
    }

    bool operator!=(ArrayIterator<T>&other)
    {
        return (this != &other);
    }

    T* GetElement()
    {
        return Lista[Current];
    }
};

template<class T>
class Array
{
private:
    T** List; // lista cu pointeri la obiecte de tipul T*
    int Capacity; // dimensiunea listei de pointeri
    int Size; // cate elemente sunt in lista

public:

    Array() // Lista nu e alocata, Capacity si Size = 0
    {
        List = nullptr;
        Capacity = Size = 0;
    }

    ~Array() // destructor
    {
        for (int i = 0; i < Capacity; i++)
            delete[] List[i];
        delete[] List;
    }

    Array(int capacity) // Lista e alocata cu 'capacity' elemente
    {
        List = new T * [capacity];
        Size = 0;
        Capacity = capacity;
    }

    Array(const Array<T>& otherArray) // constructor de copiere
    {
        Size = otherArray.Size;
        Capacity = otherArray.Capacity;
        List = new T * [Capacity];
        for (int i = 0; i < Size; i++)
            List[i] = otherArray.List[i];
    }

    T& operator[] (int index) // arunca exceptie daca index este out of range
    {
        if (index < 0 or index >= Size)
            throw out_of_range("Index out of range");
        return *List[index];
    }

    const Array<T>& operator+=(const T& newElem) // adauga un element de tipul T la sfarsitul listei si returneaza this
    {
        if (Size == Capacity)
        {
            Capacity *= 2;
            T** newList = new T * [Capacity];
            for (int i = 0; i < Size; i++)
            {
                newList[i] = List[i];
            }
            for (int i = Size; i < Capacity; i++)
            {
                newList[i] = nullptr;
            }
            delete[] List;
            List = newList;
        }
        List[Size] = new T(newElem);
        Size++;
        return *this;
    }

    const Array<T>& Insert(int index, const T& newElem) // adauga un element pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie
    {
        if (index < 0 || index > Size)
        {
            throw out_of_range("Index out of range");
        }

        if (Size == Capacity)
        {
            Capacity *= 2;
            T** newList = new T * [Capacity];
            for (int i = 0; i < Size; i++)
            {
                newList[i] = List[i];
            }
            for (int i = Size; i < Capacity; i++)
            {
                newList[i] = nullptr;
            }
            delete[] List;
            List = newList;
        }

        for (int i = Size - 1; i >= index; i--) {
            List[i + 1] = List[i];
        }

        List[index] = new T(newElem);
        Size++;

        return *this;
    }

    const Array<T>& Insert(int index, const Array<T> otherArray) // adauga o lista pe pozitia index, retureaza this. Daca index e invalid arunca o exceptie
    {
        if (index < 0 || index > Size)
        {
            throw out_of_range("Index out of range");
        }

        int otherSize = otherArray.Size;
        if (otherSize == 0) 
            return *this;

        while (Size + otherSize > Capacity) 
        {
            Capacity *= 2;
            T** newList = new T * [Capacity];
            for (int i = 0; i < Size; i++)
            {
                newList[i] = List[i];
            }
            for (int i = Size; i < Capacity; i++)
            {
                newList[i] = nullptr;
            }
            delete[] List;
            List = newList;
        }

        for (int i = Size - 1; i >= index; i--) 
            List[i + otherSize] = List[i];
        

        for (int i = 0; i < otherSize; i++) 
            List[index + i] = new T(otherArray.List[i]);

        Size += otherSize;

        return *this;

    }

    const Array<T>& Delete(int index) // sterge un element de pe pozitia index, returneaza this. Daca index e invalid arunca o exceptie
    {
        if (index < 0 || index > Size)
            throw out_of_range("Index out of range");

        delete List[index];
        for (int i = index; i < Size - 1; i++) 
            List[i] = List[i + 1];

        Size--;
        List[Size] = nullptr;

        return *this;
        
    }

    bool operator=(const Array<T>& otherArray)
    {
        for (int i = 0; i < Capacity; i++)
            List[i] = nullptr;

        Capacity = otherArray.Capacity;
        Size = otherArray.Size;

        List = new T * [Capacity];

        for (int i = 0; i < Size; i++) 
            List[i] = new T(otherArray.List[i]);

        return true;
    }

    void Sort() // sorteaza folosind comparatia intre elementele din T
    {
        sort(List, List + Size);
    }

    void Sort(int(*compare)(const T&, const T&)) // sorteaza folosind o functie de comparatie
    {
        sort(List, List + Size, compare);
    }

    void Sort(Compare* comparator) // sorteaza folosind un obiect de comparatie
    {
        int i, j, flag = 0;
        while (flag == 0)
        {
            flag = 1;
            for (int i = 0; i < Size - 1; i++)
              if (comparator->CompareElements(List[i], List[i + 1]))
                    {
                        T* aux = List[i];
                        List[i] = List[i + 1];
                        List[i + 1] = aux;
                        flag = 0;
                    }
        }
    }

    // functii de cautare - returneaza pozitia elementului sau -1 daca nu exista
    int BinarySearch(const T& elem) // cauta un element folosind binary search in Array
    {
        int st = 0, dr = Size - 1, mij, sol;
        while (st <= dr)
        {
            mij = (st + dr) / 2;
            if (*List[mij] == elem)
                return mij;
            if (*List[mij] < elem)
                st = mij + 1;
            else dr = mij - 1;
        }
        return -1;
    }

    int BinarySearch(const T& elem, int(*compare)(const T&, const T&))//  cauta un element folosind binary search si o functie de comparatie
    {
        int st = 0, dr = Size - 1, mij, sol;
        while (st <= dr)
        {
            mij = (st + dr) / 2;
            int val = compare(*List[mij], elem);
            if (val == 0)
                return mij;
            if (val < 0)
                st = mij + 1;
            else
                dr = mij - 1;
        }
        return -1;
    }

    int BinarySearch(const T& elem, Compare* comparator)//  cauta un element folosind binary search si un comparator
    {
        int st = 0, dr = Size - 1, mij, sol;
        while (st <= dr)
        {
            mij = (st + dr) / 2;
            int val = comparator->CompareElements(List[mij], elem);
            if (val == 0)
                return mij;
            if (val < 0)
                st = mij + 1;
            else
                dr = mij - 1;
        }
        return -1;
    }

    int Find(const T& elem) // cauta un element in Array
    {
        for (int i = 0; i < Size; i++)
            if (*List[i] == elem)
                return i;
        return -1;
    }

    int Find(const T& elem, int(*compare)(const T&, const T&))//  cauta un element folosind o functie de comparatie
    {
        for (int i = 0; i < Size; i++)
            if (compare(elem, *List[i]) == 0)
                return 1;
        return -1;
    }

    int Find(const T& elem, Compare* comparator)//  cauta un element folosind un comparator
    {
        for (int i = 0; i < Size; i++)
            if (comparator->CompareElements(elem, *List[i]) == 0)
                return 1;
        return -1;
    }

    int GetSize()
    {
        return Size;
    }

    int GetCapacity()
    {
        return Capacity;
    }

    ArrayIterator<T> GetBeginIterator()
    {
        ArrayIterator<T> it;
        it.Current = 0;
        return it;
    }

    ArrayIterator<T> GetEndIterator()
    {
        ArrayIterator<T> it;
        it.Current = Size;
        return it;
    }
};

int main()
{
    int z = -1, x = 50, y = 0;
    int arr[4] = { 0 };
    int i = 10;

    exceptie1 divide0;
    exceptie2 index_out_of_bounds;

    try
    {
        if (y == 0)
            throw divide0;
        z = x / y;
        cout << "Fara exceptie: z=" << z << endl;
    }
    catch (exception& e)
    {
        cout << "Exceptie: " << e.what() << endl;
    }

    try
    {
        if (i > 3)
            throw index_out_of_bounds;
        arr[i] = z;
        for (i = 0; i < 4; i++)
            cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    catch (exception& e)
    {
        cout << "Exceptie: " << e.what() << endl;
    }

    return 0;
}