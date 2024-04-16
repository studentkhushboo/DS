#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node*lpt;
	int info;
	struct node*rpt;
	
	
};
struct node*first;
void create();
void display();
void insert_beg();
void insert_end();
void delete_FN_DLL();
 void delete_LN_DLL();

 
 int main()
 {
 	create();
 	display();
 	insert_beg();
 	insert_end();
     delete_FN_DLL(); 
	 delete_LN_DLL();

     

 	
 }
 
 void create()
 {
 	int ch;
 	struct node*ptr,*cpt;
 	ptr=(struct node*)malloc(sizeof(struct node)); 
 	printf("enter the info for first (ptr) node");
 	scanf("%d",&ptr->info);
 	ptr->lpt =NULL;
 	ptr->rpt=NULL;
 	first=ptr;
 	
 	
 	do
 	{
 		cpt=(struct node*)malloc(sizeof (struct node));
 		printf("enter the info for second (cpt)node");
		 scanf("%d",cpt->info); 
		 ptr->rpt=cpt;	
		 cpt->lpt=ptr;
		 ptr=cpt;
		 printf("enter 1 for new node and 0 for exit");
		 scanf("%d",&ch);
	 }
	 
	 while(ch==1);
	 ptr->rpt=NULL;
	 display();
	 
	 
}
	 
void display()
{
	struct node*ptr;
	ptr=first;
	
	while(ptr!=NULL)
	{
		printf("%d",ptr->info);
		ptr=ptr->rpt;
	}
	
	 }	 
	   void insert_beg()
	   {
	   	struct node*ptr;
	   	ptr=(struct node*) malloc(sizeof(struct node*))
	   	printf("enter info for insert node at begining")
	   	scanf("%d", &ptr->info);
	   	ptr->lpt=NULL;
	   	ptr->rpt=first;
	   	first->lpt=ptr;
	   	first=ptr;
	   	display();
	   	
	   }
	  void insert_end()
	  {
	  	struct node*ptr,*cpt;
	  	ptr=(struct node*)malloc(sizeof(struct node));
	  	printf("enter info for insert node at end");
	  	scanf("%d",ptr->info);
	  	cpt=first;
	  	while(cpt->rpt!=NULL)
	  	{
	  		cpt=cpt->rpt;
	  		ptr->lpt=cpt;
	  		cpt->rpt=ptr;
	  		ptr->rpt=NULL;
	  		
		  }
	  }
  void delete_FN_DLL()
  {
  	struct node*ptr;
  	ptr=first;
  	first=ptr->rpt;
  	first->lpt=NULL;
  	free(ptr);
  	
  }
  
 void delete_LN_DLL()
 {
 	struct node*ptr;
 	ptr=first;
 	while(ptr->rpt=NULL)
 	{
 		ptr=ptr->rpt;
 		ptr->lpt->rpt=NULL;
 		free(ptr)
	 }
 }

	 
	 
 

