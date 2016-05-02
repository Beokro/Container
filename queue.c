#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "queue.h"

queue * NEWQ(){
    queue * q = malloc(sizeof(queue));
    q->head = NULL;
    q->tail = NULL;
    return q;
}


int Queue_empty(queue * q){
    if(q->head == NULL && q->tail == NULL)
        return 1;
    return 0;
}

void Enqueue(queue * q, NODE_TYPE n){
    node * tempNode = malloc(sizeof(node*));
    tempNode->value = n;
    tempNode->next = NULL;
    //if queue is empty
    if(Queue_empty(q)){
        q->head = tempNode;
        q->tail = tempNode;
    }else{
        q->tail->next = tempNode;
        q->tail = tempNode;
    }
    return;
}


NODE_TYPE Dequeue(queue * q){
    if(q->head == NULL){
        fprintf(stderr, "Error: The waitting queue does not have any process\n");
        exit(1);
    }
    NODE_TYPE result;
    node * temp;
    //get the head element of the queue
    result = q->head->value;
    temp = q->head;
    q->head = q->head->next;
    free(temp);

    //check if queue is empty now, if it is, set the tail to NULL too
    //otherwise it will point to the memory we just freed
    if(q->head == NULL)
        q->tail = NULL;
    return result;
}


void Queue_display(queue * q){
    node * temp = q->head;
    while(temp!=NULL){
        printf(",%d",temp->value);
        temp = temp->next;
    }
    printf("\n");
}
