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


void insertAfter(Node* prevNode, int key)
{
 if(prevNode == NULL)
 {
  printf("prevNode cannot be NULL.\n");
  return;
 }
 Node* newNode = createNode(key);
 newNode->data = key;
 newNode->next = prevNode->next;
 prevNode->next = newNode;
}



