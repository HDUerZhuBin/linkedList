#include<stdio.h>
#include"linkedList.h"

int main(){

    float float_arr[] = {12,54,78,95,47,65,32};

    ptr_linkedList list = list_init();
    for(int i=0;i<sizeof(float_arr)/sizeof(float_arr[0]);i++){
        list_append(list,float_arr[i]);
    }

    int len_list = list->len;
    printf("len_list:%d\n",len_list);
    ptr_node temp_node = list->head;
    for(int j=0;j<len_list;j++){
        printf("len_list[%d]=%f\n",j,temp_node->data);
        temp_node = (ptr_node)temp_node->next;
    }
    printf("head:%f;tail:%f\n",list->head->data,list->tail->data);

    printf("**********this is just split line**********\n");

    list_append(list,300);
    list_append(list,400);

    len_list = list->len;
    printf("len_list:%d\n",len_list);
    temp_node = list->head;
    for(int j=0;j<len_list;j++){
        printf("len_list[%d]=%f\n",j,temp_node->data);
        temp_node = (ptr_node)temp_node->next;
    }
    printf("head:%f;tail:%f\n",list->head->data,list->tail->data);
    printf("**********this is just split line**********\n");

    list_left_append(list,100);
    list_left_append(list,200);

    len_list = list->len;
    printf("len_list:%d\n",len_list);
    temp_node = list->head;
    for(int j=0;j<len_list;j++){
        printf("len_list[%d]=%f\n",j,temp_node->data);
        temp_node = (ptr_node)temp_node->next;
    }
    printf("head:%f;tail:%f\n",list->head->data,list->tail->data);

    list_free(list);

    char c1 = (char)(1);
    printf("c1:%d\n",(int)(c1));

    return 0;
}