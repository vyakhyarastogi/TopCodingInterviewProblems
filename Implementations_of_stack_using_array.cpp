#include <iostream>
using namespace std;

class Stack
{
public:
    int top;
    int *arr;
    int size;

    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack is full" << endl;
        }
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
        }
        else
        {

            top--;
        }
    }

    int getFront()
    {
        if (top == -1)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int getSize()
    {
        return top + 1;
    }
};

int main()
{

    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "size of stack is:" << s.getSize() << endl;

    s.pop();

    cout << "element at the top of stack is:" << s.getFront() << endl;

    cout << "printing the stack" << endl;

    while (!s.isEmpty())
    {
        cout << s.getFront() << " ";
        s.pop();
    }
}