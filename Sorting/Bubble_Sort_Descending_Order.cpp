#include<iostream>
#include<conio.h>
using namespace std;
int *a=NULL,n,round;
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
	
	for(round=1;round<=n-1;round++)
	{
		for(int i=0;i<=n-round-1;i++)
		{
			if(a[i]>a[i+1])
			{
				int temp;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	cout<<endl<<ends<<"Numbers after the sorting in Descending Order\n"<<endl;
	cout<<ends<<"--------------------------------------------\n"<<endl;
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<ends;
	}
}
