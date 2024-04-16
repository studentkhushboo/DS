 #include<stdio.h>
 #include<stdlib.h>
 struct node
 {
 	int info ;
 	struct node*link;
 	
 };
 struct node*first
   void create();
   void display();
 
 int main()
 {
 	create();
 	display();
 	
 }
 void create();
 {
 	int ch;
 	struct node*a,*b;
 	a=(struct node*) malloc(sizeof(struct node));
 	printf("enter info for first node(a)");
 	scanf("%d",a->info);
 	first=a;
 	a->link=NULL;
 	do
 	{
 	
 		b=(struct node*) malloc(sizeof(struct node));
 	  printf("enter info for first node(b)");
 	  scanf("%d",b->info);
 	  a->link=b;
 	  a=b;
 	  printf("press 1 for new node and 0 for exit");
 	  scanf("%d",&ch);

	 }
	 while(ch==1);
	 a->link=NULL;
	 display();
 }
 
 void display()
 {
 	struct node*c;
 	c=first;
 	while(c!=NULL)
 	{
 		printf("%d",c->info);
 		c=c->link;
	 }
 }
 
 
 
