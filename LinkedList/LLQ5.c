#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   int data;
   int key;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;


void insertFirst(int key, int data) {
   struct node *link = (struct node*) malloc(sizeof(struct node));
    link->key = key;
    link->data = data;
    link->next = head;
    head = link;
}
int length() {
   int length = 0;
   struct node *current;

   for(current = head; current != NULL; current = current->next) {
      length++;
   }

   return length;
}
void printlist() {
   struct node *ptr = head;
   printf("\n[ ");

   while(ptr != NULL) {
      printf("%d : %d \n",ptr->key,ptr->data);
      ptr = ptr->next;
   }

   printf(" ]");
}
void extract(int num){
     int a=1;
     while(num>0){
            int x=num%10;
            insertFirst(a,x);
            a++;
            num=num/10;
            }
        printlist();

    }
void main() {
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    int x,y;
    int a=1;
    extract(num);
    /* while(num>0){
            int x=num%10;
            insertFirst(a,x);
            a++;
            num=num/10;
            }*/
   // x=num/10;
    //y=num%10;
    //insertFirst(1,x);
    //insertFirst(2,y);
   //int a=length();
   //printf("%d",a);
   printlist();
}

