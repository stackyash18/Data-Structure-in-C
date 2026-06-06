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

void traverseList(Node* head)
{
  Node* current = head;
  while(current != NULL)
  {
    printf("%d->", current->data);
    current = current->next;
  }
  printf("NULL\n");
}

 Node* reverseListRecursive(Node* head)
 {
  if(head == NULL || head->next == NULL)
  {
    return head;
  }
  Node* rest = reverseListRecursive(head->next);
  head->next->next = head;
  head->next = NULL;
  return rest;
 }

