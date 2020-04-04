#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *link;
}*stnode;


void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));

    if(stnode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->link = NULL;
        tmp = stnode;
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                fnNode->num = num;
                fnNode->link = NULL;

                tmp->link = fnNode;
                tmp = tmp->link;
            }
        }
    }
}
void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);
            tmp = tmp->link;
        }
    }
}
int NodeCount()
{
    int ctr = 0;
    struct node *tmp;
    tmp = stnode;
    while(tmp != NULL)
    {
        ctr++;
        tmp = tmp->link;
    }
    return ctr;
}
int main()
{
    int n,x;

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    x = NodeCount();
    printf("\n Total number of nodes = %d\n",x);
    return 0;
}
