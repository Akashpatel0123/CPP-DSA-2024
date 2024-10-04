#include<iostream>
using namespace std;

class Node
{
public:  // Make data and constructor public
    int data;
    Node *prev;
    Node *next;
    Node(int val)
    {
        data = val;
        prev = NULL;
        next =  NULL;
    }
};

class Dlist
{
public:  // Make the constructor and functions public
    Node *head;
    Node *tail;
    
    Dlist()
    {
        head = tail = NULL;
    }

    // Push to the front
    void push_front(int val)
    {
        Node *newnode = new Node(val);
        if(head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }

    // Push to the back
    void push_back(int val)
    {
        Node *newnode = new Node(val);
        if(tail == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    // Pop from the front
    void pop_front()
    {
        if(head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        Node *temp = head;
        if(head == tail)  // If there's only one element
        {
            head = tail = NULL;
        }
        else
        {
            head = head->next;
            head->prev = NULL;
        }
        delete temp;
    }

    // Pop from the back
    void pop_back()
    {
        if(tail == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        Node *temp = tail;
        if(head == tail)  // If there's only one element
        {
            head = tail = NULL;
        }
        else
        {
            tail = tail->prev;
            tail->next = NULL;
        }
        delete temp;
    }

    // Print the list
    void print()
    {
        if(head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }

        Node *temp = head;
        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Dlist dll;

    dll.push_front(30);
    dll.push_front(20);
    dll.push_front(10);
    dll.print();  // Prints: 10 20 30
    
    dll.push_back(40);
    dll.push_back(50);
    dll.print();  // Prints: 10 20 30 40 50

    dll.pop_front();
    dll.print();  // Prints: 20 30 40 50

    dll.pop_back();
    dll.print();  // Prints: 20 30 40

    return 0;
}
