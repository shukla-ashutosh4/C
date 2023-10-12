#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode; 
}

























// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// struct Node* insertEnd(struct Node* head, int data) {
//     struct Node* newNode = createNode(data);
//     if (head == NULL) {
//         return newNode;
//     }
//     struct Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     return head;
// }

// struct Node* printList(struct Node* head) {
//     struct Node* temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     struct Node* head = NULL;
//     head = insertEnd(head, 4);
//     head = insertEnd(head, 44);
//     head = insertEnd(head, 444);
//     head = insertEnd(head, 4444);

//     printf("Linked List: ");
//     printList(head);

//     return 0;
// }