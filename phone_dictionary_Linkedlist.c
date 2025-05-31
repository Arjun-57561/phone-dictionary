#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char name[50];
    char phone[15];
} Contact;


typedef struct Node {
    Contact contact;
    struct Node* next;
} Node;

// Global variable to keep track of the head of the linked list
Node* head = NULL;

// Function to create a new node with a contact
Node* createNode(char name[], char phone[]) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation error!\n");
        exit(1);
    }
    strcpy(newNode->contact.name, name);
    strcpy(newNode->contact.phone, phone);
    newNode->next = NULL;
    return newNode;
}

// Function to add a contact to the linked list
void addContact() {
    char name[50];
    char phone[15];
    
    printf("Enter contact name: ");
    scanf("%s", name);
    printf("Enter phone number: ");
    scanf("%s", phone);
    
    Node* newNode = createNode(name, phone);
    newNode->next = head;
    head = newNode;
    
    printf("Contact added successfully!\n");
}

// Function to search for a contact by name
void searchContact() {
    if (head == NULL) {
        printf("No contacts to search.\n");
        return;
    }
    
    char name[50];
    printf("Enter the name to search: ");
    scanf("%s", name);
    
    Node* current = head;
    while (current != NULL) {
        if (strcmp(current->contact.name, name) == 0) {
            printf("Contact found: %s - %s\n", current->contact.name, current->contact.phone);
            return;
        }
        current = current->next;
    }
    printf("Contact not found.\n");
}

// Function to display all contacts
void listContacts() {
    if (head == NULL) {
        printf("No contacts to display.\n");
        return;
    }
    
    printf("\nPhone Book Contacts:\n");
    Node* current = head;
    int index = 1;
    while (current != NULL) {
        printf("%d. %s - %s\n", index++, current->contact.name, current->contact.phone);
        current = current->next;
    }
}

// Function to delete a contact by name
void deleteContact() {
    if (head == NULL) {
        printf("No contacts to delete.\n");
        return;
    }
    
    char name[50];
    printf("Enter the name of the contact to delete: ");
    scanf("%s", name);
    
    Node* current = head;
    Node* previous = NULL;
    
    // Traverse the list to find the contact
    while (current != NULL && strcmp(current->contact.name, name) != 0) {
        previous = current;
        current = current->next;
    }
    
    if (current == NULL) {
        printf("Contact not found.\n");
        return;
    }
    
    // Remove the node from the list
    if (previous == NULL) {
        head = current->next; // The head is the contact to be deleted
    } else {
        previous->next = current->next;
    }
    
    free(current);
    printf("Contact deleted successfully!\n");
}

// Function to free all memory used by the linked list
void freeMemory() {
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
}

// Main function with menu-driven interface
int main() {
    int choice;
    
    do {
        printf("\nPhone Dictionary Menu:\n");
        printf("1. Add Contact\n");
        printf("2. Search Contact\n");
        printf("3. List All Contacts\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                searchContact();
                break;
            case 3:
                listContacts();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                printf("Exiting...\n");
                freeMemory();
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
    
    return 0;
}
