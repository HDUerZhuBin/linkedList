#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include<stdlib.h>
#define bool char
#define False ((char)0)
#define True ((char)1)

typedef struct{
    float data;
    struct node *next;
}node,*ptr_node;

typedef struct{
    ptr_node head;
    ptr_node tail;
    int len;
}linkedList,*ptr_linkedList;

ptr_linkedList list_init();
void list_free(ptr_linkedList list);

void list_append(ptr_linkedList list,float data);
void list_left_append(ptr_linkedList list,float data);
void list_insert(ptr_linkedList list,int idx,float data);
// void list_pop();

int list_left_pop(ptr_linkedList list);//delete the first element
int list_right_pop(ptr_linkedList list);//delete the last element

bool list_is_empty(ptr_linkedList list);


#endif