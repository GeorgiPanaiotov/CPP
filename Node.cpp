#include <iostream>

using namespace std;

template <class T>

class Node 
{
    private:
        T value;
        Node<T> next;

    public:
        T GetValue()
        {
            return value;
        }

        void SetValue(T input)
        {
            this->value = input;
        }


        Node<T> GetNode()
        {
            return this->next;
        }

        void SetNode(Node<T> input)
        {
            this->next = input;
        }
};