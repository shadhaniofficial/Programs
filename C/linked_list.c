#include <stdio.h>
#include <stdlib.h>

#define m_s (struct node *)malloc(sizeof(struct node)) //

struct node {
  int data;
  struct node *link;
};

struct node* del_list(struct node *head){
  struct node *temp = head;
  while (temp != NULL){
    temp = temp -> link;
    free(head);
    head = temp;
  }
  return head;
}

struct node* del_first(struct node *head){
  if (head == NULL) printf("List is already empty!");
  else {
    struct node *temp = head;
    head = head -> link;
    free(temp);
    temp = NULL;
  }
  return head;
}

struct node* del_last(struct node *head){
  if (head == NULL) printf("List is already empty!");
  else {
    struct node *temp = head;
    struct node *temp2 = head;
    while (temp -> link != NULL){
      temp2 = temp;
      temp = temp -> link;
    }
    temp2 -> link = NULL;
    free(temp);
    temp = NULL;
  }
  return head;
}

int main(){
  struct node *head = m_s;
  head -> data = 1;
  head -> link = NULL;
  
  struct node *current = m_s;
  current -> data = 2;
  current -> link = NULL;
  head -> link = current;
  
  current = m_s;
  current -> data = 3;
  current -> link = NULL;
  head -> link -> link = current;

  current = m_s;
  current -> data = 4;
  current -> link = NULL;
  head -> link -> link -> link = current;

  
  printf("%d\n", head -> link -> link -> link -> data);

  //del_first(head);
  
  printf("%d", head -> link -> data);
  
  return 0;
}
