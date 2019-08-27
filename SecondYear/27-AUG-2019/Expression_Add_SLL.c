#include<stdio.h>
#include<stdlib.h>

struct node {
  int coef;
  int power;
  struct node *n;
};

struct node *get_node(int coef, int power) {
  struct node *nn = (struct node*) malloc (sizeof(struct node));
  nn->coef = coef; 
  nn->power = power;
  return nn;
}

void insert(struct node **h, struct node **e, struct node *nn) {
  nn->n = 0;

  if(!(*e)) (*h) = nn;
  else  (*e)->n = nn;

  (*e) = nn;
}

void display(const struct node *h) {
  while(h) {
    printf("%dx^%d ", h->coef, h->power);
    h = h->n;
  }
  printf("\n");
}

void input(struct node **head, struct node ** end, int n) {
  int coef, power;
  for(int i = 0; i < n; i++) {
    scanf("%d %d", &coef, &power);
    insert(head, end, get_node(coef, power));
  } 
}

void rules() {
  printf("Enter\n1:Add front\n2:Add end\n3:Order display\n4:Reverse display\n--> Any other key to exist <--\n response:       ");
}

void get_expression(struct node *head1, struct node *head2, struct node **res, struct node **end) {
  while(head1 && head2) {
    if(head1->power == head2->power) {
      insert(res, end, get_node(head1->coef+head2->coef, head1->power));
      head1 = head1->n;
      head2 = head2->n;
    }
    else if(head1->power > head2->power) {
      insert(res, end, get_node(head1->coef, head1->power));
      head1 = head1->n;
    }
    else {
      insert(res, end, get_node(head2->coef, head2->power));
      head2 = head2->n;
    }
  }
  while(head1) {
    insert(res, end, get_node(head1->coef, head1->power));
    head1 = head1->n;
  }
  while(head2) {
    insert(res, end, get_node(head2->coef, head2->power));
    head2 = head2->n;
  }
}

int main() {

  FILE *fp, *fs;
  fp = freopen("Files/output.txt", "w", stdout);
  fs = freopen("Files/input.txt", "r", stdin); 

  struct node *head1 = 0, *end1 = 0;
  struct node *head2 = 0, *end2 = 0;
  struct node *res = 0, *end  = 0;

  int coef, power, n1, n2;
  scanf("%d %d", &n1, &n2);
  
  input(&head1, &end1 ,n1);
  input(&head2, &end2 ,n2);

  display(head1);
  display(head2);

  get_expression(head1, head2, &res, &end);

  display(res);

  fclose(fp);
  fclose(fs);
  
  return 0;
}