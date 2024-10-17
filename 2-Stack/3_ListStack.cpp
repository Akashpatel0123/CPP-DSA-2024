#include<iostream>
#include<string>
using namespace std;
template<class T>
class Node
{   public :
    T data;
    Node<T> *next;
    Node(T val)
    {
        data = val;
        next = nullptr;
    }
    
};
template<class T>
class List
{
  Node<T> *head;
  public:
  List()
  {
      head = nullptr;
  } 
  // PUSH FUNCTION
  void push(T val)
  {   
      Node<T> *newnode = new Node<T>(val);
      if(head==nullptr)
      {
          head = newnode;
      }
      else
      {
        newnode->next = head;
        head = newnode;
      }
  }
  //POP FUNCTION
  void pop()
  {
      if(head==nullptr)
      {
       cout<<"Stack is empty!\n";
       return ;
      }
      else
      {
          head = head->next;
      }
  }
  // TOP FUNCTION
  T top()
  {
      return head->data;
  }
  
  //ISEMPTY FUNCTION
  bool isEmpty() 
  {
     return head==NULL;
  }
  //PRINT FUNCTION
  void print()
  {
      Node<T> *ptr = head;
      while(ptr != nullptr)
      {
          cout<<ptr->data;
          ptr = ptr->next;
          if(ptr != nullptr)
          {
              cout<<" -> ";
          }
      }
  }
};
int main()
{
    List<int> ll;
    ll.push(30);
    ll.push(20);
    ll.push(10);
    ll.pop();
    ll.print();
    return 0;
}