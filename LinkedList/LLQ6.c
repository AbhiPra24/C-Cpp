#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
   char data;
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
      printf("%d : %c \n",ptr->key,ptr->data);
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
void vowels(char name[]){
     for(int i=0;i<10;i++){
            char temp=name[i];
            insertFirst(i+1,temp);
                }
      printlist();

    }
void main() {
    char name[10];
    printf("Enter the name:");
    /*for(int i=0;i<10;i++){
            scanf("%c" ,&name[i]);
                }*/
     gets(name);
     /*for(int i=0;i<10;i++){
            printf("%c" ,name[i]);
                }*/
    vowels(name);

}


