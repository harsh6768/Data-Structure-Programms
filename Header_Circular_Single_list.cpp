
#include<iostream>
#include<conio.h>
using namespace std;
struct node{
	int info;
	node *link;
};
node *head,*ptr,*loc;
void create();
void display();
void header();
int main()
{
	int n;
	while(1)
	{
	cout<<"\n1-->create\n2--> Insert_at_BegininG\n3-->Inser_at_lasT\n4-->InserT_at_any_point\n5-->Deletion_from_beg\n6-->Deletion_from_last\n7-->Deletion_from_anywhere\n8-->Max_node_sigle_list\n9-->min_node__in__list\n10-->DisplaY the node\n";
	cout<<"Choose the option:";
	cin>>n;
	switch(n)
	{
		case 1:
			header();
			create();
			ptr->link=head;         //important for the circular linked list
			break;
		case 2:
			//insert_at_beg();
			break;
		case 3:
			//insert_at_last();
		case 4:
		    //insert_at_any_point();
			break;
		case 5:
			 //deletion_from_beg();
			 break;
	    case 6:
	    	 //deletion_from_last();
	    	 break;
	    case 7:
	    	 //deletion_from_anywhere();
	    case 8:
	    	  //max_node();
	    	  break;
	    case 9:
	    	  //min_node();
	    	  break;
		case 10:
		     display();		
	         break;		   
	}
     }       

}
void header()
{
	head=new node();
	head->link=NULL;
    head->info=0;
}
void create()
{
	A:
	int count;
	count++;
	head->info=count;
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
	cout<<loc<<"||"<<loc->info<<"||"<<loc->link<<endl;
	loc=loc->link;
	cout<<"----------------------\n";
	while(loc->link!=head)       //loop continue until the last node doesn't equal to the head
	{
		cout<<loc<<"||"<<loc->info<<"||"<<loc->link<<endl;
		loc=loc->link;
	}
	cout<<loc<<"||"<<loc->info<<"||"<<loc->link<<endl;   //print the last node 
}
