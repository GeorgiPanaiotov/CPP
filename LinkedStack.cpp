#include <iostream>
#include "Node.cpp"


using namespace std;

template <class T>

class LinkedStack
{
    private:
        int Count;
        Node<T> Head;
    public:
        int GetCount()
        {
            return this->Count;
        }
        void SetCount()
        {
            this->Count = 0;
        }

        Node<T> GetNode()
        {
            return this->Head;
        }
        Node<T> SetNode(T input)
        {
            this->Head = new Node<T>(input);
        }
        void Push(T input);
        T Pop();
        T Peek();
};
template <class T>

void LinkedStack<T>::Push(T input)
{
    if(this->Count == 0)
    {
        Node<T> newHead;
        newHead.SetNode(newHead.GetNode());
        newHead.SetValue(input);
        this->Head.SetValue(newHead.GetValue());
        this->Head.SetNode(newHead.GetNode());
    }
    else
    {
        Node<T>* oldHead = this->Head.GetNode();
        Node<T> newHead;
        this->Head.SetValue(input);
        this->Head.SetNode(oldHead);
    }
    this->Count++;
}


template<class T>
T LinkedStack<T>::Pop()
{
    if(this->Count == 0)
    {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    else
    {
        Node<T>* newHead = this->Head.GetNode();
        this->Head.SetNode(this->Head.GetNode());
        T value;
        value = newHead->GetValue();
        return value;
    }
}

template<class T>
T LinkedStack<T>::Peek()
{
    if(this->Count == 0)
    {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    else
    {
        return this->Head.GetValue();
    }
}

int main()
{
    LinkedStack<int> ls;

    ls.Push(1);
    ls.Push(2);
    ls.Push(8);
    cout << ls.Peek();
    cout << ls.Pop();
}

