#include <unordered_map>
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
       if (head == nullptr) {
            return nullptr;
        }
        Node* current = head;
        while (current != nullptr) {
            Node* copy = new Node(current->val);
            copy->next = current->next;
            current->next = copy;
            current = copy->next;  
        }
        current = head;
        while (current != nullptr) {
            Node* copy = current->next;
            if (current->random != nullptr) {
                copy->random = current->random->next;
            } 
            current = current->next->next;  
        }


        Node* newHead = head->next;
        Node* orig = head;
        Node* copied = newHead;

        while (orig != nullptr) {
            
            orig->next = orig->next->next;

            
            if (copied->next != nullptr) {
                copied->next = copied->next->next;
            }

            orig = orig->next;
            copied = copied->next;
        }

        return newHead; 
    }
};