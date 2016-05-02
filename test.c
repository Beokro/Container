#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include "stack.h"
#include "queue.h"

int main(){
    vector  v_list;
    int * temp = malloc(sizeof(int*));
    *temp = 5;
    Vector_init(&v_list);
    Vector_push(&v_list, temp);
    Vector_push(&v_list, temp);
    Vector_push(&v_list, temp);
    Vector_push(&v_list, temp);
    Vector_push(&v_list, temp);
    Vector_push(&v_list, temp);
    Vector_push(&v_list, temp);
    Vector_push(&v_list, temp);
    Vector_push(&v_list, temp);
    Vector_push(&v_list, temp);
    Vector_push(&v_list, temp);
    Vector_push(&v_list, temp);
    Vector_push(&v_list, temp);
    int * to_print = (int * )Vector_get(&v_list,11);
    printf("value I get from index 11 is %d\n", *to_print);

    *temp = 8;
    Vector_set(&v_list, 11, temp);
    to_print = (int * )Vector_get(&v_list,11);
    printf("value I get from index 11 is %d\n", *to_print);


    stack s;
    int stackvalue = 1;
    Stack_init(&s);
    Stack_push(&s,1);
    Stack_push(&s,2);
    Stack_push(&s,3);
    Stack_push(&s,4);
    Stack_push(&s,5);
    Stack_push(&s,6);
    Stack_push(&s,7);
    printf("value I get from stack is %d\n", Stack_pop(&s));
    printf("value I get from stack is %d\n", Stack_pop(&s));
    printf("value I get from stack is %d\n", Stack_pop(&s));
    printf("value I get from stack is %d\n", Stack_pop(&s));
    printf("value I get from stack is %d\n", Stack_pop(&s));
    printf("value I get from stack is %d\n", Stack_pop(&s));
    printf("value I get from stack is %d\n", Stack_pop(&s));

    queue * q = NEWQ();
    Enqueue(q, 5);
    Enqueue(q, 6);
    Enqueue(q, 7);
    Enqueue(q, 8);
    Enqueue(q, 9);
    Enqueue(q, 10);
    printf("value I get from queue is %d\n", Dequeue(q));
    printf("value I get from queue is %d\n", Dequeue(q));
    printf("value I get from queue is %d\n", Dequeue(q));
    printf("value I get from queue is %d\n", Dequeue(q));
    printf("value I get from queue is %d\n", Dequeue(q));
    printf("value I get from queue is %d\n", Dequeue(q));

    return 0;
}
