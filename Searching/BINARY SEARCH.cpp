//Number should enter in a increment manner
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	int a[20],i,j,first=0,last,mid,key,pos=-1,n;
	cout<<"enter how many number u want:";
	cin>>n;
	cout<<"enter the numbers:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"enter number that u want to search:";
	cin>>key;
	last=n-1;
	mid=first+last/2;
	
	while(first<=last)
	{
		if(key>a[mid])
		{
			first=mid+1;
		}
		else if(key==a[mid])
		{
			pos=mid;
			cout<<key<<"\tNumber is found in "<<pos+1<<ends<<"position.";
			break;
			}
		else if(key<a[mid])
		last=mid-1;
	
	}
	getch();
	
}
