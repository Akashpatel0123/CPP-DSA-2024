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
    //Push_front function
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
    //Linear search
    int linear_search(int val)
    {   int idx = 1;
        Node* ptr = head;
        while(ptr != NULL)
        {
          if(ptr->data==val)
          {
             return idx;
          }
          ptr = ptr->next;
          idx++;
        }
        return -1;
    }
    
};
int main() {
    List ll;
    ll.push_front(50);
    ll.push_front(40);
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);
    ll.print_list();
    cout<<"\n"<<ll.linear_search(50);
    return 0;
}