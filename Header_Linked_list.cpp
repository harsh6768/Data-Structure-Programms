#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node{
	int info;
	node* link;
};
node  *head=NULL,*ptr,*loc;
void create()
{   
    A:
    int count;
    count++;
    head->info=count;
	char m;
	ptr=new node();
	cout<<"enter the number:";
	cin>>ptr->info;
	ptr->link=NULL;
	loc=head;
	while(loc->link!=NULL)         //to find out last node   if this node is not null then update the pointer 
	{
			loc=loc->link;
	}
	loc->link=ptr;           //assign the pointer
	cout<<"Press y/n(yes/no) to insert the node:";
	cin>>m;
	if(m=='y')
	goto A;
}
void display()
{
	loc=head;
	cout<<loc<<"||"<<loc->info<<"||"<<loc->link<<endl;   //print the header node
	loc=loc->link;
	cout<<"----------------------\n";
	
	while(loc!=NULL)     //because *loc is stored the address of the *loc-link
	{
	cout<<loc<<"||"<<loc->info<<"||"<<loc->link<<endl;
	loc=loc->link;
	}	
}
void header()
{
	head=new node();
	head->link=NULL;
    head->info=0;
}
int main()
{
	int a,n;
	while(1)
	{
	cout<<"\n1-->create\n2-->DisplaY the node\n";
	cout<<"Choose the option:";
	cin>>n;
	   switch(n)
	   {
		     case 1:
			    header();      //call header to make the header node
			    create();
			    break;
		    case 2:
		        display();		
	            break;		   
	}
    }
	return 0;
}

