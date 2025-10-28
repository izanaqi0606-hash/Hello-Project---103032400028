#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef int infotype;
typedef int address;


typedef struct {
    infotype info[MAXSTACK];
    address top;
} stack;

void createStack_103032400028(Stack *s);
bool isEmpty_103032400028(Stack s);
bool isFull_103032400028(Stack s);
void push_103032400028(Stack *s, infotype X);
infotype pop_103032400028(Stack *s);
infotype sumStack_103032400028(stack s);


#endif
