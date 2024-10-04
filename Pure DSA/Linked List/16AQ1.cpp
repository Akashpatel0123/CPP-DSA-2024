class Solution {
public:
    Node* deleteNodes(Node* head, int m, int n) {
        Node* current = head;
        Node* last = nullptr;

        while (current) {
            // Skip m nodes
            for (int i = 0; i < m && current; ++i) {
                last = current;
                current = current->next;
            }

            // Delete n nodes
            for (int i = 0; i < n && current; ++i) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }

            // Connect the last node of previous segment to the current node
            if (last)
                last->next = current;
        }

        return head;
    }
};