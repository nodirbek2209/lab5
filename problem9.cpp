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

    // Recursive function to calculate the length of the linked list
    int lengthRecursive(Node* current) {
        if (current == nullptr) {
            return 0;
        }
        // Recursively count the length of the rest of the list
        return 1 + lengthRecursive(current->next);
    }

    // Wrapper function to call lengthRecursive
    int length() {
        return lengthRecursive(head);
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

    // Calculate and print the length of the linked list
    cout <<list.length() << endl;

    return 0;
}
