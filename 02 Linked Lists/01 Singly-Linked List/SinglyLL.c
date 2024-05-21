#include <stdio.h>
#include <stdlib.h>

typedef struct NodeStruct {
    int data;
    struct NodeStruct* next;
} Node;

void createList(Node **head);
void displayList(Node *head);
// void insertAtBegin();
// void insertAtEnding();
// void countNodes();
// void insertAt();
// void insertBefore();
// void searchNode();
// void deleteFirst();
// void deleteLast();
// void deleteAny();
// void updateNode();
// void reverseList();

int main()
{
    Node *head = NULL;
    int choice;
    do
    {
        printf("\nPlease Insert a Valid Option:\n");
        printf("1...Create List.\n");
        printf("2...Display List.\n");
        // printf("3...Insert at beginning.\n");
        // printf("4...Insert at the end.\n");
        // printf("5...Count nodes.\n");
        // printf("6...Insert at specific position.\n");
        // printf("7...Insert before a given node.\n");
        // printf("8...Search an element.\n");
        // printf("9...Delete first element.\n");
        // printf("10...Delete last element.\n");
        // printf("11...Delete any element.\n");
        // printf("12...Update a node.\n");
        // printf("13...Reverse the List.\n");
        printf("0...EXIT.\n");
        printf("\nEnter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createList(&head);
            break;

        case 2:
            displayList(head);
            break;
        
        default:
            break;
        }

    } while (choice != 0);
}

void createList(Node **head)
{
    head = NULL;
    printf("List Created!\n");
}

void displayList(Node *head) {
    Node* current = head;
    if (head == NULL)
    {
        printf("Empty List!\n");
    }
    
    while (current != NULL)
    {
        printf("%d -> ", current -> data);
    }
}