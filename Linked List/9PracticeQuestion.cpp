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
    int siz()
    {   int idx = 0;
        Node* ptr = head;
        while(ptr != NULL)
        {
            ptr = ptr->next;
            idx++;
        }
        return idx;
    }
    void remove(int n)
{
    int size = siz();
    
    if (n > size || n <= 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    
    // Special case: removing the head node (n == size)
    if (n == size) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    
    Node* prev = head;
    for(int i = 1; i < size - n; i++) {
        prev = prev->next;
    }

    Node* temp = prev->next;
    prev->next = prev->next->next;
    
    // Special case: removing the last node
    if (temp == tail) {
        tail = prev;
    }
    
    delete temp;
}

};
int main() {
    List ll;
    ll.push_front(50);
    ll.push_front(40);
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);
    ll.remove(12);
    ll.print_list();
    return 0;
}