#include <iostream>
#include <cstdio>
#include <tuple>

using namespace std;

template <class T1, class T2> 
class Map
{
    int physical_size, size;
    T1* keys;
    T2* values;
public:
    Map()
    {
        physical_size = 1;
        size = 0;
        keys = new T1[1];
        values = new T2[1];
    }

    ~Map()
    {
        delete[] keys;
        delete[] values;
    }

    void resize() 
    {
        physical_size *= 2;
        T1* newKeys = new T1[physical_size];
        T2* newValues = new T2[physical_size];
        for (int i = 0; i < size; ++i) {
            newKeys[i] = keys[i];
            newValues[i] = values[i];
        }
        delete[] keys;
        delete[] values;
        keys = newKeys;
        values = newValues;
    }

    void Set(T1 key, T2 value) 
    {
        for (int i = 0; i < size; ++i)
            if (keys[i] == key) 
            {
                values[i] = value;
                return;
            }

        if (size == physical_size)
            resize();

        keys[size] = key;
        values[size] = value;
        size++;
    }

    bool Get(const T1& key, T2& value) 
    {
        for (int i = 0; i < size; ++i)
            if (keys[i] == key) 
            {
                value = values[i];
                return true;
            }
        return false;
    }


    int Count()
    {
        return size;
    }

    void Clear()
    {
        delete[] keys;
        delete[] values;
        physical_size = 1;
        size = 0;
        keys = new T1[physical_size];
        values = new T2[physical_size];
    }

    bool Delete(const T1& Key)
    {
        // Well eu cand sterg raman defapt niste valori random in vector insa nu afecteaza ca ne 
        // raportam mereu la size. Nu le putem atribui null sau 0 pentru ca e template si nu stim 
        // daca mapul va primi pointer sau value sa le putem atribui direct...
        // Solutia ar fi template specialization DARRRRRR, nu dau copy paste la atata cod pentru asta :)
        for (int i = 0; i < size; i++)
            if (keys[i] == Key)
            {
                if (i == size)
                    size--;
                else 
                    for (int j = i; j < size - 1; j++)
                    {
                        keys[j] = keys[j + 1];
                    }
                size--;
                return 1;
            }
        return 0;
    }

    bool Includes(const Map<T1, T2>& map)
    {
        T1* mapKeys = map.keys;
        T2 valSaMeargaGetul;
        int mapSize = map.size;
        for (int i = 0; i < map.size; i++)
            if (Get(mapKeys[i], valSaMeargaGetul) == 0)
                return 0;
        return 1;
    }

    T2& operator[](T1 key) 
    {
        for (int i = 0; i < size; ++i)
            if (keys[i] == key)
                return values[i];

        if (size == physical_size)
            resize();

        keys[size] = key;
        values[size] = T2();  
        return values[size++];
    }

    struct Iterator 
    {
        T1* k;
        T2* v;
        int idx;

        Iterator(T1* k, T2* v, int idx) : k(k), v(v), idx(idx) {}

        tuple<T1, T2, int> operator*() const 
        {
            return make_tuple(k[idx], v[idx], idx);
        }

        Iterator& operator++() 
        {
            idx++;
            return *this;
        }

        bool operator!=(const Iterator& other) const 
        {
            return idx != other.idx;
        }
    };

    Iterator begin() const 
    {
        return Iterator(keys, values, 0);
    }

    Iterator end() const 
    {
        return Iterator(keys, values, size);
    }

};

int main()
{   
    Map<int, const char*> m, m2;

    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";

    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }
    m[20] = "result";
    for (auto [key, value, index] : m)
    {
        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);
    }

    m2[20] = "A";
    m2[30] = "B";
    cout << m.Includes(m2) << "\n";
    
    return 0;
    
}
