#ifndef Vector_H_
#define Vector_H_

typedef int VECTOR_TYPE;

typedef struct cVector {
    VECTOR_TYPE ** value;
    int size;
    int count;
} vector ;

VECTOR_TYPE* Vector_get(vector* v, int index);
int Vector_set(vector* v, int index, VECTOR_TYPE* value);
int Vector_push(vector* v, VECTOR_TYPE * value);
int Vector_size(vector* v);
int Vector_count(vector* v);
int Vector_init(vector* v);
int Vector_clear(vector* v);

#endif
