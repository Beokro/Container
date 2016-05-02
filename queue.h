#ifndef QUEUE_H_
#define QUEUE_H_

//fix me change it to endpoint_t
typedef int NODE_TYPE;

typedef struct cnode{
    NODE_TYPE  value;
    struct cnode * next;
} node;

typedef struct cqueue{
    node * head;
    node * tail;
} queue;

queue *     NEWQ();
int         Queue_empty(queue * q);
void        Enqueue(queue * q, NODE_TYPE n);
NODE_TYPE   Dequeue(queue * q);
void        Queue_display(queue * q);

#endif
