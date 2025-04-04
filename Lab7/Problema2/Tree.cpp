#include "Tree.h"

template<class T>
inline void Tree<T>::add_node(T value, TreeNode<T>* par)
{
    TreeNode<T>* newNode = new TreeNode<T>(value);
    if (par == nullptr)
    {
        if (root == nullptr)
            root = newNode;
    }
    else
    {
        if (par->firstChild == nullptr)
        {
            par->firstChild = newNode;
            newNode->firstChildParent = par;
        }
        else
        {
            TreeNode<T>* sibling = par->firstChild;
            sibling->firstChildParent = par;
            while (sibling->nextSibling)
            {
                sibling = sibling->nextSibling;
            }
            sibling->nextSibling = newNode;
            newNode->lastSibling = sibling;
        }
    }
}

template<class T>
inline TreeNode<T>* Tree<T>::get_node(TreeNode<T>* nod) // nu e prea clar ce vrea sa fac
{
    if (nod == nullptr)
    {
        return root;
    }
    return nod->firstChild; //?
}

template<class T>
inline void Tree<T>::delete_node(TreeNode<T>* nod)
{
    if (nod != nullptr)
    {
        if (nod->firstChild)
        {
            TreeNode<T> * sibling = nod->firstChild;
            while (sibling)
            {
                TreeNode<T>* follow = sibling->nextSibling;
                delete_node(sibling);
                sibling = follow;
            }
        }
        if (nod->nextSibling and nod->lastSibling)
        {
            nod->lastSibling->nextSibling = nod->nextSibling;
            nod->nextSibling->lastSibling = nod->lastSibling;
        }

        if (nod->nextSibling and !nod->lastSibling and nod->firstChildParent) //cazul cand e primul fiu
        {
            nod->firstChildParent->firstChild = nod->nextSibling;
            nod->nextSibling->firstChildParent = nod->firstChildParent;
        }

        delete nod;
    }
}

template<class T>
inline TreeNode<T>* Tree<T>::find(TreeNode<T>*nod, bool(*compare)(const T&, const T&), const T& param)
{
    if (nod == nullptr)
        return nullptr;

    if (compare(nod->value, param))
        return nod;

    TreeNode<T>* sibling = nod->firstChild;
    while (sibling)
    {
        TreeNode<T>* rez = find(sibling, compare, param);
        if (rez) return rez;
        sibling = sibling->nextSibling;
    }
    
}

template<class T>
inline void Tree<T>::insert(TreeNode<T>* par, int index, T value)
{
    TreeNode <T>* newNode = new TreeNode<T>(value);
    if (index == 1)
    {
        if (par->firstChild == nullptr)
        {
            par->firstChild = newNode;
            newNode->firstChildParent = par;
            return;
        }
        
        newNode->nextSibling = par->firstChild;
        par->firstChild->lastSibling = newNode;
        par->firstChild = newNode;
        newNode->firstChildParent = par;
        newNode->nextSibling->firstChildParent = nullptr;
    }
    int cnt = 2;
    TreeNode<T>* sibling = par->firstChild;
    while (cnt < index and sibling->nextSibling)
    {
        sibling = sibling->nextSibling;
        cnt++;
    }
    if (cnt == index)
    {
        if (sibling->nextSibling == nullptr)
        {
            sibling->nextSibling = newNode;
            newNode->lastSibling = sibling;
            return;
        }
        
        newNode->nextSibling = sibling->nextSibling;
        newNode->lastSibling = sibling;
        sibling->nextSibling = newNode;
        newNode->nextSibling->lastSibling = newNode;
    }
}

template<class T>
inline void Tree<T>::sort(TreeNode<T>* par, bool(*compare)(const T&, const T&))
{
    if (!par or !par->firstChild)
        return;

    if (!compare)
        compare = [](const T& a, const T& b) { return a < b; };

    bool ok;
    do
    {
        ok = 0;
        TreeNode<T>* curr;
        curr = par->firstChild;
        while (curr and curr->nextSibling)
        {
            if (!compare(curr->value, curr->nextSibling->value))
            {
                swap(curr->value, curr->nextSibling->value);
                ok = 1;
            }
            curr = curr->nextSibling;
        }
    } while (ok == 1);
}

template<class T>
inline int Tree<T>::count(TreeNode<T>* nod)
{
    if (nod == nullptr)
        return 0;

    TreeNode<T>* sibling = nod->firstChild;
    if (sibling == nullptr)
        return 1;

    int sum = 0;
    while (sibling)
    {
        sum += count(sibling);
        sibling = sibling->nextSibling;
    }

    return 1 + sum;
}

template<class T>
void Tree<T>::print(TreeNode<T>*nod)
{
    if (nod == nullptr)
        return;

    cout << nod->value << " : ";
    TreeNode<T>* sibling = nod->firstChild;
    
    while (sibling)
    {
        cout << sibling->value << " ";
        sibling = sibling->nextSibling;
    }
    cout << "\n";

    sibling = nod->firstChild;
    while (sibling)
    {
        print(sibling);
        sibling = sibling->nextSibling;
    }

}

