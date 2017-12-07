#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float sum=0;
	int row,col;
	cout<<"enter the size of the array!";
	cout<<"\nenter the no. of column:";
	cin>>col;
	cout<<"\nenter the no. of row:";
	cin>>row;
	
	int **a=new int*[row];    //create 2D array
	for(int i=0;i<row;i++)
	{
		a[i]=new int[col];
	}
	//end of 2D array
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cout<<"enter a number:";
		cin>>a[i][j];	
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		sum+=a[i][j];	
		}
	}
	cout<<sum<<endl;
	float total=row*col;
	cout<<total<<endl;
	float avg=sum/total;
    cout<<avg;	
}
