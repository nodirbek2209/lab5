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

    // Function to insert a new node at the end of the linked list
    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Recursive function to delete duplicates from the linked list
    void deleteDuplicates(Node* current) {
        if (current == nullptr || current->next == nullptr) {
            return;
        }
        if (current->data == current->next->data) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
            deleteDuplicates(current); // Check if the current node is also a duplicate
        } else {
            deleteDuplicates(current->next);
        }
    }

    // Wrapper function to call deleteDuplicates
    void deleteDuplicatesWrapper() {
        deleteDuplicates(head);
    }

    // Function to display the elements of the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
    }
};

int main() {
    LinkedList list;

    // Input elements into the linked list
    int input;
    
    while (cin >> input) {
        list.insert(input);
    }

    // Delete duplicates
    list.deleteDuplicatesWrapper();

    // Display the linked list after removing duplicates
    list.display();
    
    return 0;
}
