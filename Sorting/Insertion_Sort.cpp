#include<iostream>
#include<conio.h>
using namespace std;
int *a=NULL;
int main()
{
	int i,n,j;
	cout<<"enter the size of the array:";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter a number:";
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		int temp=a[i];
		j=i-1;
		while(j>=0 && temp<a[j])            //comparing the temp value with the previous value of the array 
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;     //assign the value
	}
	cout<<endl<<"--------Insertion Sort------------";
	cout<<endl<<"-----------------------------------\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<ends;
	}
}
