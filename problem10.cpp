#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a new node at the beginning of the linked list
    void insert(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Recursive function to delete all elements of the linked list
    void deleteAllElements(Node* current) {
        if (current == nullptr)
            return;

        // Recursively delete all elements
        deleteAllElements(current->next);

        // Print and delete current node
        cout << current->data << " is deleted" << endl;
        delete current;
    }

    // Wrapper function to call deleteAllElements
    void deleteAllElementsWrapper() {
        
        deleteAllElements(head);
        head = nullptr; // After deleting all nodes, head should point to nullptr
    }

    // Function to input elements into the linked list until a termination character is provided
    void inputElements() {
        int value;
        
        while (cin >> value) {
            insert(value);
        }
    }
};

int main() {
    LinkedList list;

    // Input elements into the linked list
    list.inputElements();

    // Delete all elements and print deletion messages
    list.deleteAllElementsWrapper();

    return 0;
}
