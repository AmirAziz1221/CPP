#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    // Function to insert a node at the end of the list
    void insertAtEnd(int value) {
        Node* newNode = new Node{value, nullptr, nullptr};
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }

    // Function to display all elements in the list
    void displayElements() {
        Node* current = head;
        if (current == nullptr) {
            std::cout << "The list is empty." << std::endl;
            return;
        }
        std::cout << "Elements in the list: ";
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList dll;

    // Inserting elements at the end of the list
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);

    // Display all elements in the list
    dll.displayElements();

    return 0;
}
