#include<iostream>
#include<conio.h>
using namespace std;
int *a,n;
void Quick_Procedure(int a[],int n,int beg,int end,int *loc)
{
  int left,right;
  left=beg;
  right=n-1;
  *loc=beg;
  B:
  for(int i=n-1;i>0;i--)
  {
  	while(a[*loc]<=a[right] && *loc!=right)
  	{
  		right=right-1;
	}
	if(*loc==right)
	{
		return ;
	}
	if(a[*loc]>a[right])
	{
		int temp;
		temp=a[*loc];
		a[*loc]=a[right];
		a[right]=temp;
		*loc=right;
		goto A;
	}	
  }
  
  A:for(int i=0;i<n;i++)
  {
     while(a[*loc]>a[left])
	 {
	 	left=left+1;
	 }
	 if(*loc==left)
	 {
	  return; 	
	 }	
	 if(a[*loc]<a[left])
	 {
	 	int temp;
	 	temp=a[*loc];
	 	a[*loc]=a[left];
	 	a[left]=temp;
	 	*loc=left;
	 	goto B;
	 }
  }
}

void quick_sort(int a[],int n)
{
	int beg,end,top=-1;
	int loc;
	int lower[10],upper[10];
	if(n>1)
	{
		top++;
		lower[top]=0;
		upper[top]=n-1;
	}
	while(top!=-1)
	{
		beg=lower[top];
		end=upper[top];
		top--;
		Quick_Procedure(a,n,beg,end,&loc);    //passing as a address
		if(beg<loc-1)    //array before the pivot elelment 
		{
			top++;
			lower[top]=beg;
			upper[top]=loc-1;
		}
		if(loc+1<end)  //for the array after the pivot element
		{
			top++;
			lower[top]=loc+1;
			upper[top]=end;
		}
		
	}
}
int main()
{
	cout<<"enter the size of the array:";
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter a number:";
		cin>>a[i];
	}
	quick_sort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<ends;
	}
}
