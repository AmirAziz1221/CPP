#include <iostream>

// Node structure for the doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Function to display all elements in the doubly linked list
void displayElements(Node* head) {
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

int main() {
    // Creating nodes
    Node* node1 = new Node{1, nullptr, nullptr};
    Node* node2 = new Node{2, nullptr, nullptr};
    Node* node3 = new Node{3, nullptr, nullptr};

    // Linking nodes
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;

    // Set the head of the list
    Node* head = node1;

    // Display all elements in the list
    displayElements(head);

    // Free allocated memory
    delete node1;
    delete node2;
    delete node3;

    return 0;
}

