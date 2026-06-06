#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
  int data;
  struct Node* next;
} Node;

Node* createNode(int data)
{
  Node* newNode = (Node*)malloc(sizeof(Node));
  if(!newNode)
  {
    printf("Memory error\n");
    exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void deleteAtbeginning(Node **head)
{
 if(*head == NULL)
 {
  printf("The list is already empty.\n");
  return;
 }
 Node* temp = *head;
 *head = (*head)->next;
 free(temp);
}


