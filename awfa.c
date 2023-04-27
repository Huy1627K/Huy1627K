#include <stdio.h>

typedef struct Node {
    int data;
    struct Node * next;
}Node;
int count(Node * ptr){
    struct Node * start = ptr;
    int count = 0;  
    if (ptr != NULL){
        do{
            count++;
            ptr = ptr -> next;
        }while (ptr != start);
    }
}return count;

int main(){
    int *ptr;
    
}