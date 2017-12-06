#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int *stack=NULL,top=-1,item;
void push()
{
	int n;
	cout<<"enter the size of the stack:";
	cin>>n;
	stack=new int[n];      //dynamic array
	A:
	cout<<"enter a number:";
	cin>>item;
	if(top==n+1)
	{
	  cout<<"stack overflow!";
	}
	else
	{
		top=top+1;
		stack[top]=item;
	}
	char m;
	cout<<"do want to insert the another number!";
	cout<<"\npress y(yes)/n(no):";
	cin>>m;
	if(m=='y')
	goto A;
}
void pop()
{
	if(top==-1)
	{
		cout<<"underflow!";
	}
	else
	{
		top=top-1;
		item=stack[top];
	}
}
void display()       //display the stack
{
   for(int i=0;i<top+1;i++)
   {
   	cout<<stack[i]<<" ";
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
			push();
			break;
	    case 2:
	    	pop();
	    	break;
	    case 3:
	    	display();
	    	break;
	}
   }
}
