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

void traversalHeaderLinkedList(Node* header)
{
  if(header == NULL)
  {
    printf("List is empty.\n");
    return;
  }
  Node* temp = header->next;
  while(temp != NULL)
  {
    printf("%d->", temp->data);
    temp = temp->next;
  }
  printf("NULL.\n");
}
