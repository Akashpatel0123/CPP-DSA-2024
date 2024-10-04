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
        cout << endl;
    }

bool detect_and_remove_cycle(Node* head)
{
    if (head == NULL || head->next == NULL)
        return false;

    Node* slow = head;
    Node* fast = head;

    // Step 1: Detect cycle
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        // Cycle detected
        if (slow == fast)
        {
            break;
        }
    }

    // No cycle
    if (fast == NULL || fast->next == NULL)
        return false;

    // Step 2: Find the start of the cycle
    slow = head;
    if (slow == fast)  // Special case: Cycle starts at the head
    {
        while (fast->next != slow)
        {
            fast = fast->next;
        }
    }
    else
    {
        while (slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
    }

    // Step 3: Remove the cycle
    fast->next = NULL;

    return true;  // Cycle detected and removed
}
};
int main() {
    List ll;
    ll.push_front(50);
    ll.push_front(40);
    ll.push_front(30);
    ll.push_front(20);
    ll.push_front(10);

    // Create a cycle for testing
    ll.tail->next = ll.head;

    if (ll.detect_and_remove_cycle(ll.head))
    {
        cout << "Cycle detected and removed." << endl;
    }
    else
    {
        cout << "No cycle detected." << endl;
    }

    ll.print_list();  // Now the list will be printed safely

    return 0;
}
