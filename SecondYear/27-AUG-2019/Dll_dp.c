#include<stdio.h>
#include<stdlib.h>

struct node {
  int d;
  struct node *p, *n;
};

void insert_front(struct node **h, struct node **e, int d) {
  struct node *nn = (struct node*) malloc (sizeof(struct node*));
  nn->d = d;
  nn->p = 0;
  nn->n = (*h);

  if(!(*h)) (*e) = nn;
  else (*h)->p = nn;

  (*h) = nn;
}

void insert_end(struct node **h, struct node **e, int d) {
  struct node *nn = (struct node*) malloc (sizeof(struct node*));
  nn->d = d;
  nn->n = 0;
  nn->p = (*e);

  if(!(*e)) (*h) = nn;
  else  (*e)->n = nn;

  (*e) = nn;
}

void order_display(const struct node *h) {
  struct node *t = h;
  while(t) {
    printf("%d ", t->d);
    t = t->n;
  }
  printf("\n");
}

void rev_display(const struct node *e) {
  struct node* t = e;
  while(t) {
    printf("%d ", t->d);
    t = t->p;
  }
  printf("\n");
}


void rules() {
  printf("Enter\n1:Add front\n2:Add end\n3:Order display\n4:Reverse display\n--> Any other key to exist <--\n response:       ");
}

int main() {

  // FILE *fp, *fs;
  // fp = freopen("Files/output.txt", "w", stdout);
  // fs = freopen("Files/input.txt", "r", stdin); 

  struct node *h = 0, *e = 0;

  int c, val;
  do {
    rules();
    scanf("%d", &c);

    switch (c)
    {
    case 1:
      printf("Enter val: ");
      scanf("%d", &val);
      insert_front(&h, &e, val);
      break;

    case 2:
      printf("Enter val: ");
      scanf("%d", &val);
      insert_end(&h, &e, val);
      break;

    case 3:
      order_display(h);
      break;
    
    case 4:
      rev_display(e);
      break;
    
    default:
      return 0;
      break;
    }

  } while(c < 5 && c > 0);


  // fclose(fp);
  // fclose(fs);
  
  return 0;
}