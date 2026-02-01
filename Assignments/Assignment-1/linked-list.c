#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char data;
    struct Node* next;
} Node, *NodePtr;

NodePtr insertSorted(NodePtr head, char charToInsert);

int main() {
    // Create the initial sorted list: A -> F -> H -> L -> P -> S
    NodePtr nodeS = malloc(sizeof(Node)); nodeS->data = 'S'; nodeS->next = NULL;
    NodePtr nodeP = malloc(sizeof(Node)); nodeP->data = 'P'; nodeP->next = nodeS;
    NodePtr nodeL = malloc(sizeof(Node)); nodeL->data = 'L'; nodeL->next = nodeP;
    NodePtr nodeH = malloc(sizeof(Node)); nodeH->data = 'H'; nodeH->next = nodeL;
    NodePtr nodeF = malloc(sizeof(Node)); nodeF->data = 'F'; nodeF->next = nodeH;
    NodePtr head = malloc(sizeof(Node)); head->data = 'A'; head->next = nodeF;

    // The character we want to insert
    char charToInsert = 'G';

    // The function call. We re-assign 'head' because the head of the list
    // might change if the new character is the smallest.
    head = insertSorted(head, charToInsert);

    for (NodePtr current = head; current != NULL; current = current->next) {
        printf("%c -> ", current->data);
    }

    void freeList(NodePtr head) {
    NodePtr temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}


    return 0;
}


NodePtr insertSorted(NodePtr head, char charToInsert) {

    NodePtr newNode = malloc(sizeof(Node));
    if (newNode == NULL) {
        return head; 
    }
    newNode->data = charToInsert;
    newNode->next = NULL;


    if (head == NULL || charToInsert <= head->data) {
        newNode->next = head;
        return newNode; 
    }


    NodePtr current = head;
    while (current->next != NULL && current->next->data < charToInsert) {
        current = current->next;
    }


    newNode->next = current->next; // New node points to what 'current' was pointing to
    current->next = newNode;       // 'current' now points to the new node


    return head;
}
