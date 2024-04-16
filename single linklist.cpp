#include <stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*link;
};
struct node*first;
void insert_beg();
void display();
void main()
{
    insert_beg();
    display();
}
void insert_beg() {
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d,&ptr->link");
    ptr->link=first;
    first=ptr;
}
void display(){
    struct node*cpt;
    cpt=first;
    while(cpt!=NULL)
    {
        printf("%d\t",cpt->info);
        cpt=cpt->link;
    }
}

