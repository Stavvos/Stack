#include <iostream>
#define MAX 5
using namespace std;

class stack {

public: int array[MAX], top, size;

    stack ()
    {
        top = -1;
        size = 0;
    }

    bool isEmpty();
    bool isFull();
    int peek();
    void push(int newItem);
    void pop();
    void display();
};

//function that checks is stack is empty
bool stack::isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}

//function that checks if stack is full
bool stack::isFull()
{
    if(top == MAX -1)
        return true;
    else
        return false;
}

//function that returns the top item in the stack
int stack::peek()
{
    if(isEmpty())
    {
        cout << endl << "stack is empty" << endl;
        return 0;
    }

    else
        cout << endl << "item on top of Stack: ";
       return array[top];

}

//function that adds a new item to the top of the stack
void stack::push(int newItem)
{
    if (isFull())
    {
        cout << endl << "stack is full" << endl;
    }
    else
    {
        top++;
        size++;
        array[top] = newItem;
        cout << endl << endl<< "new item: " << array[top] << endl;
    }
}

//function that deletes the top item from the stack
void stack::pop()
{
    if(isEmpty())
    {
        cout << endl << "stack is empty" << endl;
    }
    else
    {
        cout << endl << endl << "item deleted: " << array[top] << endl;
        top--;
        size--;
    }
}


//function that displays the items in the stack
void stack::display()
{
    if(isEmpty())
    {
        cout << endl << "stack is Empty" << endl;
    }
    else
    {
        cout << endl << "items in stack: ";
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << "  ";
        }
        cout << endl;
    }
}

int main()
{
    stack s;

    s.pop(); //meant to fail because stack is empty

    //push new items into stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.push(6);//stack item limit reached meant to fail

    s.display(); //display items in stack

    cout<<s.peek(); //show item on top of stack

    //delete items from stack
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    s.display(); //meant to fail because stack is now empty




    return 0;
}
