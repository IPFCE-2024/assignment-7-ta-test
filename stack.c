#include "stack.h"

void initialize(stack *s) { s->head = NULL; }
bool empty(stack *s) { return s->head == NULL; }
bool full(stack *s) { return false; } // never full

void push(int element, stack *s) {

  node *n = (node *)malloc(sizeof(node));
  if (n == NULL) {
    fprintf(stderr, "malloc failed on line: %d\n", __LINE__ - 2);
    exit(1);
  }
  n->data = element;
  n->next = s->head;
  s->head = n;
}

int pop(stack *s) {
  if (empty(s)) {
    return -1;
  }
  node *temp = s->head;
  int element = temp->data;
  s->head = temp->next;
  free(temp);
  return element;
}

void free_stack(stack *s) {
  node *n = s->head;
  while (n != NULL) {
    node *next = n->next;
    free(n);
    n = next;
  }
  s->head = NULL; // not really necessary, but good practice
}
