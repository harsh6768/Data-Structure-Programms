#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node{
	int info;
	node *link;
};
node *head,*ptr,*loc,*loc1,*head1,*ptr1,*ptr2,*head2,*loc2;
void create();
void create1();
void display();
void display1();
void merging();
void sorting();
int main()
{
	int n;
	while(1)
	{
	cout<<"\n1-->create first list\n2-->create second list\n3-->display first list\n4-->display second list\n5-->Merging\n6-->Sorting";
	cout<<"Choose the option:";
	cin>>n;
	switch(n)
	{
		case 1:
			create();
			ptr->link=head;         //important for the circular linked list
			break;
		case 2:
			create1();
			ptr1->link=head1;
			break;
		case 3:
		     display();		
	         break;	
		case 4:
		     display1();
		 	 break;
		case 5:
		     merging();
			 break; 
		case 6:
		     sorting();  
			 break;  
	    }
     }       
}
void create()
{
	A:
	ptr=new node();
	cout<<"enter a number:";
	cin>>ptr->info;
	ptr->link=NULL;
	if(head==NULL)
	{
		head=ptr;
	}
	else
	{\
	   loc=head;
	   while(loc->link!=NULL)
	   {
	   	loc=loc->link;
		} 
		loc->link=ptr;
	}
	char m;
	cout<<"Press y/n(yes/no) to insert the node:";
	cin>>m;
	if(m=='y')
	goto A;
}
void display()
{
    loc=head;
	while(loc->link!=head)       //loop continue until the last node doesn't equal to the head
	{
		cout<<loc<<"||"<<loc->info<<"||"<<loc->link<<endl;
		loc=loc->link;
	}
	cout<<loc<<"||"<<loc->info<<"||"<<loc->link<<endl;   //print the last node 
}
void create1()
{
	A:
	ptr1=new node();
	cout<<"enter a number:";
	cin>>ptr1->info;
	ptr1->link=NULL;          // for 
	if(head1==NULL)
	{
		head1=ptr1;
	}
	else
	{\
	   loc1=head1;
	   while(loc1->link!=NULL)
	    {
	   	loc1=loc1->link;
		}  
		loc1->link=ptr1;
	}
	char m;
	cout<<"Press y/n(yes/no) to insert the node:";
	cin>>m;
	if(m=='y')
	goto A;
}
void display1()
{
	loc1=head1;
	while(loc1->link!=head1)       //loop continue until the last node doesn't equal to the head
	{
		cout<<loc1<<"||"<<loc1->info<<"||"<<loc1->link<<endl;
		loc1=loc1->link;
	}
	cout<<loc1<<"||"<<loc1->info<<"||"<<loc1->link<<endl;   //print the last node 
}
//--------------------------Merging--------------------------
void merging()
{   
    //loc=loc->link;
  	loc->link=head1;
	//loc1=loc1->link;  
	loc1->link=head;	
}
void sorting()
{
	loc=head;
	while(loc->link!=head)    //
	{
		loc1=loc->link;     //j=i+1
		//while(loc1->link!=head)           //while loop exit when it reached the last node  
		while(loc1!=head)
		{
		   if(loc->info>loc1->info)
		   {
			  int temp;
			  temp=loc->info;
			  loc->info=loc1->info;
			  loc1->info=temp;
		   }
		   loc1=loc1->link;	
		}
		loc=loc->link;		
	}
}
