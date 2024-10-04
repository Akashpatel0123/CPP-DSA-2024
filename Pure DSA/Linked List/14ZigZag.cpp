#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class List {
public:
    Node* head;
    Node* tail;
    List() {
        head = NULL;
        tail = NULL;
    }

    // Push function to add elements to the front
    void push_front(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    // Push function to add elements to the back
    void push_back(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Print function
    void print_list() {
        Node* ptr = head;
        while (ptr != NULL) {
            cout << ptr->data;
            ptr = ptr->next;
            if (ptr != NULL) {
                cout << " -> ";
            }
        }
        cout << endl; // For better output formatting
    }

    // Split the linked list into two halves
    Node* splitmid(Node* head) {
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;  // Declare prev correctly
        while (fast != NULL && fast->next != NULL) {
            prev = slow;  // Update prev to the current slow
            slow = slow->next;
            fast = fast->next->next;
        }
        if (prev != NULL) {
            prev->next = NULL;  // Disconnect the left half from the right
        }
        return slow;  // Return the head of the right half
    }

    // Reverse the linked list
    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // Zigzag the linked list
    Node* zigzagll(Node* head) {
        // Split the list into two halves
        Node* righthead = splitmid(head);
        
        // Reverse the second half
        Node* rightrev = reverse(righthead);
        
        // Merge the two halves in a zigzag fashion
        Node* left = head;
        Node* right = rightrev;
        Node* tail = nullptr;  // To keep track of the last node
        
        while (left != NULL && right != NULL) {
            Node* nextleft = left->next;
            Node* nextright = right->next;

            left->next = right;
            right->next = nextleft;
            
            tail = right;  // Update the tail
            left = nextleft;
            right = nextright;
        }
        
        // If there are remaining nodes in the right half
        if (right != NULL) {
            tail->next = right;
        }

        return head;
    }
};

int main() {
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);
    ll.push_back(5);

    cout << "Original List: ";
    ll.print_list();

    // Apply Zigzag on the list
    ll.head = ll.zigzagll(ll.head);

    cout << "Zigzagged List: ";
    ll.print_list();

    return 0;
}
