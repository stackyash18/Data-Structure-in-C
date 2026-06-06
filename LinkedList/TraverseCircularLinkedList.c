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

void traverseCircularLinkedList(Node* head)
{
  if(head == NULL)
  {
    printf("The List is empty.\n");
    return;
  }
  Node* temp = head;
  do
  {
    printf("%d->", temp->data);
    temp = temp->next;
  }
  while(temp!=head);
  printf("%d(head)\n", head->next);
}


