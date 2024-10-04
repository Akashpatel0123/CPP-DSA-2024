#include <iostream>
using namespace std;

class Node
{   public:
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{ public:
    Node* head;
    Node* tail;
    List()
    {
        head = NULL;
        tail = NULL;
    }
    //Push function
    void push_front(int val)
    {
        Node* newNode = new Node(val);
        if(head==NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    //print function
    void print_list()
    {
        Node* ptr = head;
      while(ptr != NULL)
      {
            cout<<ptr->data;
            ptr = ptr->next;
             if(ptr != NULL)  
             {
              cout << "->";
             }
      }     
    }
    //Insert in Middle
    void insert_middle(int val , int pos)
    {
        Node* newNode = new Node(val);
        Node* prev = head;
        for(int i=0 ; i<pos-1 ; i++)
        { 
            prev = prev->next;
            if(prev == NULL)
        {
            cout<<"Invalid input";
            return ;
        }
        }
        newNode->next = prev->next;
        prev->next = newNode;
    }
    
};
int main() {
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.insert_middle(100 , 2);
    ll.print_list();
    return 0;
}