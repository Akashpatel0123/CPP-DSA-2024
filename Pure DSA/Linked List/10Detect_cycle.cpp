#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
public:
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
        if (head == NULL)
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
        while (ptr != NULL)
        {
            cout << ptr->data;
            ptr = ptr->next;
            if (ptr != NULL)
            {
                cout << "->";
            }
        }
    }

    int siz()
    {
        int idx = 0;
        Node* ptr = head;
        while (ptr != NULL)
        {
            ptr = ptr->next;
            idx++;
        }
        return idx;
    }

    bool cycle(Node* head)
    {
        if (head == NULL || head->next == NULL)
            return false;
        
        Node* slow = head;
        Node* fast = head;
        
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if (fast == slow)
            {
                return true;
            }
        }
        return false;
    }
};

int main() {
    List ll;
    ll.push_front(50);
    ll.push_front(40);
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

    // Create a cycle
    ll.tail->next = ll.head;

    // Check for cycle and print result
    if (ll.cycle(ll.head))
    {
        cout << "Cycle detected in the list." << endl;
    }
    else
    {
        cout << "No cycle detected." << endl;
    }

    // Printing the list would cause an infinite loop if there's a cycle
    // Commenting it out for safety:
    // ll.print_list();

    return 0;
}
