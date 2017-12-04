#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node{
	int info;
	node *plink;
	node *flink;
};
node *head=NULL,*tail=NULL,*ptr,*loc;
void create();
void insert_at_beg();
void insert_at_last();
void insert_at_any_point();
void deletion_from_beg();
void deletion_from_last();
void deletion_from_anywhere();
void display();
int main()
{
	int a,n;
	while(1)
	{
	cout<<"\n1-->create\n2--> Insert_at_BegininG\n3-->Inser_at_lasT\n4-->InserT_at_any_point\n5-->Deletion_from_beg\n6-->Deletion_from_last\n7-->Deletion_from_anywhere\n8-->DisplaY the node\n";
	cout<<"Choose the option:";
	cin>>n;
	switch(n)
	{
		case 1:
			create();
			break;
		case 2:
			insert_at_beg();
			break;
		case 3:
			insert_at_last();
		case 4:
		    insert_at_any_point();
			break;
		case 5:
			 deletion_from_beg();
			 break;
	        case 6:
	    	         deletion_from_last();
	    	         break;
	        case 7:
	    	         deletion_from_anywhere();
			 break;
		case 8:
		         display();		
	                 break;		   
	}
    }
	return 0;
}
void create()
{  A:
	char m;
	ptr=new node();
	cout<<"enter a number:";
	cin>>ptr->info;
	ptr->plink=NULL;
	ptr->flink=NULL;
	if(head==NULL && tail==NULL)
	{
		head=ptr;
		tail=ptr;         //store the address of the ptr node 
	}
	else
	{
	    ptr->plink=tail;  // tail having the address of the previous node 
	    tail->flink=ptr;   //store the address of the ptr into the flink of the previous node
	    tail=ptr;          //update the pointer 
	}
	cout<<"Press y/n(yes/no) to insert the node:";
	cin>>m;
	if(m=='y')
	goto A;
	
}
void display()
{
	loc=head;
	while(loc!=NULL)
	{
	  cout<<loc->plink<<"||"<<loc->info<<"||"<<loc->flink<<endl;
	  loc=loc->flink;	
	}
}
void insert_at_beg()
{
	loc=head;
	node* new1;
	new1=new node();
	new1->flink=NULL;
	new1->plink=NULL;
	cout<<"enter a number:";
	cin>>new1->info;
	//update the pointers
	new1->flink=head;
	head->plink=new1;
	head=new1;
	new1->plink=head;
}
void insert_at_last()
{
	loc=head;
	node *new1;
	new1=new node();
	cout<<"enter a number:";
	cin>>new1->info;
	new1->plink=NULL;
	new1->flink=NULL;
	while(loc->flink!=NULL)
	{
		loc=loc->flink;
	}
	//update the pointer
	new1->plink=loc;
	loc->flink=new1;
	new1=loc;
}
void insert_at_any_point()
{
	int item;
	loc=head;
	node *new1;
	new1=new node();
	cout<<"enter a number after u want to insert the number:";
	cin>>item;
	cout<<"enter a number:";
	cin>>new1->info;
	new1->flink=NULL;
	new1->plink=NULL;
	while(loc->info!=item)
	{
		loc=loc->flink;
	}
	//update the pointer to linked the list
	new1->flink=loc->flink;
	(loc->flink)->plink=new1;
	new1->plink=loc;
	loc->flink=new1;
}
void deletion_from_beg()
{
	loc=head;
	(head->flink)->plink=NULL;
	head=head->flink;
	free(loc);
}
void deletion_from_last()
{
	loc=head;
	while(loc->flink!=NULL)
	{
		loc=loc->flink;
	}
	//update the pointer
	(loc->plink)->flink=loc->flink;
	tail=loc->plink;
}
void deletion_from_anywhere()
{
	loc=head;
	node *preloc;
	int item;
	cout<<"enter a number that u want to delete:";
	cin>>item;
	while(loc->info!=item)
	{
		preloc=loc;
		loc=loc->flink;
	}
	//update the pointer
	preloc->flink=loc->flink;
	(loc->flink)->plink=preloc;
}
