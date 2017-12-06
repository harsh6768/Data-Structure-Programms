#include<iostream>
#include<conio.h>
using namespace std;
char *a=NULL,item;
int first=0,last,n,mid;
int main()
{
	cout<<"enter the size of the array:";
	cin>>n;
	a=new char[n];
	cout<<"Enter character in ascending order!\n";
	for(int i=0;i<n;i++)
	{
	cout<<"enter a character:";
	cin>>a[i];
    }
    cout<<"\nenter a character that u want to search:";
    cin>>item;
	last=n-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(a[mid]<item)
		{
			first=mid+1;
		}
		else if(int(a[mid])>int(item))
		{
			last=mid-1;
		}
		else if(int(a[mid])==(item))
		{
			cout<<a[mid]<<" is found at position "<<mid+1<<"!";
			break;
		}
	}
	if(int(a[mid])!=(item))
	{
		cout<<"Searching unsuccessful!";
	}
}
