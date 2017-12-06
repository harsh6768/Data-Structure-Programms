#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int info;
	int pri;
	node *link;
};
node *head=NULL,*ptr,*loc;
void create()
{ 
    A:
	char m;
	ptr=new node();
	cout<<"enter a number:";
	cin>>ptr->info;
	cout<<"enter priority for this node:";
	cin>>ptr->pri;
	if(head==NULL)
	{
		head=ptr;
	}
	else if(head->pri>ptr->pri)    //if priority of given node is greater than priority of entered node 
	{
		ptr->link=head; 
		head=ptr;  
	}
	else
	{
		loc=head;
		while(loc->link!=NULL && (loc->link)->pri<=ptr->pri)   //find the last node of the priority queue and it's priority
		{
			loc=loc->link;
		}
	    ptr->link=loc->link;   // for storing the null value and node before the previous queue
	    loc->link=ptr;
	}
	cout<<"press the y/n:";
	cin>>m;
	if(m=='y')
	goto A;
	
}
void display()
{
	loc=head;
	while(loc!=NULL)
	{
		cout<<loc->info<<"||"<<loc->pri<<"||"<<loc->link<<endl;
		loc=loc->link;
	}
}
int main()
{
	
	while(1)
   {
   	int n;
   	cout<<"\n1-->Insertion_Priority\n2-->Display\n";
   	cout<<"Choose the option:";
   	cin>>n;
	switch(n)
	{
		case 1:
			create();
			break;
	    case 2:
	    	display();
	    	break;
	}
   }
}
