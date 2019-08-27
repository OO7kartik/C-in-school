#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  int data;
  struct node *next;
}node;

node *last_node(node *head) {
  while(head->next) head = head->next;
  return head;
}

void insert(node **head, int val) {
  node *new_node = (node*) malloc (sizeof(node));
  new_node->data = val;

  if((*head)) last_node(*head)->next = new_node;
  else (*head) = new_node;
}

void display(node *head) {
  while(head) {
    printf("%d ", head->data);
    head = head->next;
  }
}

void reverse(node **head) {
  node *prev = 0, *next = 0, *cur = (*head);
  while(cur) {
    next = cur->next;
    cur->next = prev;
    prev = cur;
    cur = next;
  }
  (*head) = prev;
}

int main() {

  struct node *head = 0;
  
  for(int i = 0; i < 5; i++)
    insert(&head, i);

  display(head);
  printf("reversing...\n");
  reverse(&head);
  display(head);

  return 0;
  }