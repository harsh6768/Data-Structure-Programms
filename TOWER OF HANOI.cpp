#include<iostream>
#include<conio.h>
using namespace std; 
static int c=0;
int  tower(int n,char beg,char aux,char end){
	if(n==1)
	{
	cout<<"passes "<<beg<<" to "<<end<<endl;
	c++;
	return c;
    }
	else{
		tower(n-1,beg,end,aux);
		tower(1,beg,aux,end);         // call the tower 
		tower(n-1,aux,beg,end);
	}
}
int main()
{
	int n;
	cout<<"enter the number of towers:";
	cin>>n;
	int count=tower(n,'A','B','C');      //A B and C are the three towers 
	cout<<count;
}
