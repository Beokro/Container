#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "stack.h"

void Stack_init(stack* s){
    s->value = malloc(sizeof(STACK_TYPE) *5);
    if(s->value == NULL){
        fprintf(stderr, "initalize stack failed due to lack of memory\n");
        exit(1);
    }
    s->size = 5;
    //top is index of the top most element
    s->top = -1;
}


void  Stack_push(stack* s, STACK_TYPE value){
    if((s->top+1) == s->size){
        s->size *=2;
        s->value = realloc(s->value,sizeof(STACK_TYPE*) * s->size);
    }
    s->top++;
    s->value[s->top] = value;
}


STACK_TYPE  Stack_pop(stack* s){
    if(s->top <0){
        fprintf(stderr, "Nothing in stack, can not pop\n");
        exit(1);
    }
    return s->value[s->top--];
}

void  Stack_clear(stack* s){
    free(s->value);
}

int Stack_empty(stack* s){
    return s->top == -1;
}
