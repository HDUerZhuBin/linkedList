#include"linkedList.h"

ptr_linkedList list_init(){
    ptr_linkedList list = (ptr_linkedList)malloc(sizeof(linkedList));
    list->len = 0;
    list->head = NULL;
    list->tail = NULL;

    return list;
}

void list_free(ptr_linkedList list){
    ptr_node temp_node = NULL;
    while(list->head != list->tail){
        temp_node = list->head;
        list->head = (ptr_node)((list->head)->next);
        free(temp_node);
    }
    free(list->head);
    free(list);
}


void list_append(ptr_linkedList list,float data){
    //constract a new node,assign the data
    ptr_node new_node = (ptr_node)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;

    if(list->head==NULL){
        list->head = list->tail = new_node;
        (list->len)++;
    }else{
        list->tail->next = (struct node*)new_node;
        (list->len)++;
        list->tail = new_node;
    }
}

void list_left_append(ptr_linkedList list,float data){
    ptr_node new_node = (ptr_node)malloc(sizeof(node));
    new_node->data = data;
    new_node->next = NULL;
    
    new_node->next = (struct node*)list->head;
    list->head = new_node;
    if (list->tail == NULL){
        list->tail = new_node;
    }
    (list->len)++;
}


bool list_is_empty(ptr_linkedList list){
    return ((list->len) =0?True:False);

}

