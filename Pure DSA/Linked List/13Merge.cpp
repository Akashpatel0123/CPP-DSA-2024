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
    //Push function
    void push_back(int val)
    {
        Node* newNode = new Node(val);
        if(head==NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    //MERGE SORT
    Node* splitmid(Node* head)
    {
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;
        while(fast != NULL && fast->next != NULL)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(prev != NULL)
        {
            prev->next = NULL;
        }
        return slow;
    }
    
    Node* merge(Node* left , Node* right)
    {
        List ans;
        Node* i = left;
        Node* j = right;
        while(i != NULL && j != NULL)
        {
            if(i->data <= j->data)
            {
                ans.push_back(i->data);
                i = i->next;
            }
            else {
                ans.push_back(j->data);
                j = j->next;    
                }
        }
        while(i != NULL)
        {
            ans.push_back(i->data);
            i = i->next;
        }
        while(j != NULL)
        {
            ans.push_back(j->data);
            j = j->next;
        }
        return ans.head;
    }
    
    Node* mergesort(Node* head)
    {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        Node* righthead = splitmid(head);
        Node* left = mergesort(head);
        Node* right = mergesort(righthead);
        return merge(left , right);
    }
    
};
int main() {
    List ll;
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);
    ll.push_back(40);
    ll.push_back(50);
    ll.head = ll.mergesort(ll.head);
    ll.print_list();
    return 0;
}