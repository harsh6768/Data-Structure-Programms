#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[20],i,n,round;
	cout<<"ENTER how many numbers u want to sort:";
	cin>>n;
	cout<<"ENTER numbers:";
	for(i=0;i<=n-1;i++)
	cin>>a[i];
	for(round=1;round<=n-1;round++)
	{
		for(i=0;i<=n-round-1;i++)
		{
			if(a[i]>a[i+1])
			{
				int swap=a[i];
				a[i]=a[i+1];
				a[i+1]=swap;
			}
		}
	}
	cout<<ends<<"Numbers after the sorting"<<endl;
	cout<<"--------------------------------------------"<<endl;
	for(i=0;i<=n-1;i++)
	cout<<a[i]<<ends;
}
