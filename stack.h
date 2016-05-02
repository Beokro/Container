#ifndef STACK_H_
#define STACK_H_

typedef int STACK_TYPE;

typedef struct cstack{
    STACK_TYPE * value;
    STACK_TYPE top;
    int size;
} stack;


void        Stack_init(stack* s);
void        Stack_push(stack* s, STACK_TYPE value);
STACK_TYPE  Stack_pop(stack* s);
int         Stack_empty(stack* s);
void        Stack_clear(stack* s);


#endif
