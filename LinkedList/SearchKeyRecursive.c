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


Node* searchKeyRecursive(Node* current, int key)
{
  if(current == NULL)
  {
    return NULL;
  }
  if(current->data == key)
  {
    return current;
  }
  return searchKeyRecursive(current->next, key);
}
