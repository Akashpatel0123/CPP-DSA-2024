#include<iostream>
using namespace std;

class Node
{
    int data;
    Node* next;
     public:
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
 };
  
int main()
{
    List ll; 
    return 0;
}