#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include<stdlib.h>

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
// void list_pop();

#endif