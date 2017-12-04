#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node{
	int info;
	node* link;
};
node  *head=NULL,*ptr,*loc;
void create();
void insert_at_beg();
void insert_at_last();
void insert_at_any_point();
void deletion_from_beg();
void deletion_from_last();
void deletion_from_anywhere();
void display();
void max_node();
//void min_node();
//void even_odd();
int main()
{
	int a,n;
	while(1)
	{
	cout<<"\n1-->create\n2--> Insert_at_BegininG\n3-->Inser_at_lasT\n4-->InserT_at_any_point\n5-->Deletion_from_beg\n6-->Deletion_from_last\n7-->Deletion_from_anywhere\n8-->Max_node_sigle_list\n9-->min_node__in__list\n10-->DisplaY the node\n";
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
	    case 8:
	    	  max_node();
	    	  break;
	    case 9:
	    	  //min_node();
	    	  break;
		case 10:
		     display();		
	         break;		   
	}

    }
	return 0;
}
void create()
{   A:char m;
	ptr=new node();
	cout<<"enter the number:";
	cin>>ptr->info;
	ptr->link=NULL;
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{
		loc=head;
		while(loc->link!=NULL)         //to find out last node   if this node is not null then update the pointer 
		{
			loc=loc->link;
		}
	   	loc->link=ptr;           //assign the pointer
	}
	cout<<"Press y/n(yes/no) to insert the node:";
	cin>>m;
	if(m=='y')
	goto A;
}
void display()
{
	loc=head;
	while(loc!=NULL)     //because loc is stored the address of the loc-link
	{
	cout<<loc<<"||"<<loc->info<<"||"<<loc->link<<endl;
	loc=loc->link;
	}
	
}
void insert_at_beg()
{
	node *new1;
    loc=head;
    new1=new node();
    cout<<"enter a number:";
    cin>>new1->info;
    ptr->link=NULL;
	new1->link=head;
	head=new1;
		
}
void insert_at_last()
{  A:
	node *new1;
	char m;
	loc=head;
	new1=new node();
	cout<<"enter a number:";
	cin>>new1->info;
	while(loc->link!=NULL)
	{
		loc=loc->link;
	}
	loc->link=new1;
	cout<<"press y/n(yes/no) to insert more node at the last:";
	cin>>m;
	if(m=='y')
	goto A;
}
void insert_at_any_point()
{
	 node *new1;
	 int item;
	 node *loc=head;
	 new1=new node();
	 cout<<"enter that number after u want to insert a number:";
	 cin>>item;
	 cout<<"enter a number:";
	 cin>>new1->info;
	 while(loc->info!=item)             //for comparing the value then insert the value
	 {
	 	loc=loc->link;
	 }
	 new1->link=loc->link;
	 loc->link=new1;	 
}
void deletion_from_beg()
{
   loc=head;
   head=loc->link;  
   free(loc);  	
}
void deletion_from_last()
{
	loc=head;
	node *preloc;
	while(loc->link!=NULL)
	{
		preloc=loc;       
		loc=loc->link;
	}
	preloc->link=NULL;       //to delete the last node 
}
void deletion_from_anywhere()
{
   node *preloc;
   int item;
   loc=head;
   cout<<"enter number that u want to delete: ";
   cin>>item;
   while(loc->info!=item)
   {
   	preloc=loc;    //store the previous node to in the preloc
   	loc=loc->link;
	}
	preloc->link=loc->link;    //assign the address of next to loc node to the preloc of the loc the delete the loc
}
void max_node()
{
	int max=0;
	while(loc->link!=NULL)
	{
	   if(loc->info>max)
	   {
	     max=loc->info; 	
	   }	
	   loc=loc->link;
	}
	cout<<max;
}


