#include<iostream>
#include<conio.h>
using namespace std;
int *a,n,min1,loc;
int main()
{
	int i,j;
	cout<<"enter the size of the array:";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter a number:";
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		min1=a[i];
		loc=i;
		j=i+1;
		while(j<n)
		{
			if(min1>a[j])
			{
				min1=a[j];
				loc=j;
			}
			j=j+1;
		}
		int temp;
		temp=a[loc];
		a[loc]=a[i];
		a[i]=temp;
	}
	cout<<endl<<"-----------------Selection Sort-----------------\n";
	cout<<endl<<"------------------------------------------------\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<ends;
	}
}
