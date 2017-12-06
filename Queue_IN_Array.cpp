#include<iostream>
#include<conio.h>
using namespace std;
int *queue=NULL,front=0,rear=0,n,item;
void insert()
{
	char m;
	cout<<"enter the size of the queue:";
	cin>>n;
	queue=new int[n];
	A:
	cout<<"enter a number:";
	cin>>item;
	if(rear==n ||front==rear+1)
	{
		cout<<"Queue Overflow!";
		exit(1);
	}
	else if(front==NULL)
	{
		front=1;
		rear=1;
	}
	else
	{
		rear=rear+1;
	}
	queue[rear]=item;
	cout<<"do want to insert the another number!";
	cout<<"\npress y(yes)/n(no):";
	cin>>m;
	if(m=='y')
	goto A;
}
void deletion()
{
	char a;
	B:
    if(front==NULL)
    {
    	cout<<"Queue Underflow!";
	}
	else if(front==rear)      //for the circular queue
	{
		front=NULL;
		rear=NULL;
	}
	else if(front==n)
	{
		front=1;
	}
	else
	front=front+1;
	cout<<"do want to delete the another number!";
	cout<<"\npress y(yes)/n(no):";
	cin>>a;
	if(a=='y')
	goto B;
	
}
void display()
{
	for(int i=front;i<=rear;i++)
	{
		cout<<queue[i]<<" ";
	}
}
int main()
{
    while(1)
   {
   	int n;
   	cout<<"\n1-->Insertion_IN_stack\n2-->Deletion_from_stack\n3-->Display\n";
   	cout<<"Choose the option:";
   	cin>>n;
	switch(n)
	{
		case 1:
			insert();
			break;
	    case 2:
	    	deletion();
	    	break;
	    case 3:
	    	display();
	    	break;
	}
   }
}
