#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "vector.h"


int Vector_init(vector* v){
    printf("initalize Vector\n");
    v->value = malloc(sizeof(VECTOR_TYPE *) * 10);
    v->size = 10;
    v->count = 0;
}

VECTOR_TYPE* Vector_get(vector* v, int index){
    if(index >= v->count){
        fprintf(stderr, "EINVAL: request semaphore index out of range (Vector_get)\n");
        return NULL;
    }
    int * for_print = (int *)v->value[index];
    printf("Got the semaphore valuue: %d\n", *for_print);
    return v->value[index];
}


int Vector_set(vector* v, int index, VECTOR_TYPE* value){
    if(index >= v->count){
        fprintf(stderr, "EINVAL: request semaphore index out of range (Vector_set)\n");
        //fix me, change to return EINVAL
        return -1;
    }
    v->value[index] = value;
    //fix me, change it to OK
    return 0;
}


int Vector_push(vector* v, VECTOR_TYPE * value){
    if(v->count == v->size){
        v->size*=2;
        v->value = realloc(v->value, sizeof(VECTOR_TYPE*)*v->size);
    }
    v->value[v->count] = value;
    int * for_print = (int *)v->value[v->count];
    v->count++;
    printf("just added a value into semp listvalue is %d with index %d \n", * for_print, v->count-1);
    return v->count;
}


int Vector_size(vector* v){
    return v->size;
}

int Vector_count(vector* v){
    return v->count;
}


int Vector_clear(vector* v){
    free(v->value);
}
