#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int sum=0;
	string str;
	cout<<"Enter Binary Digit:"<<ends;
	cin>>str;
	
	int len=str.length();
	cout<<"Size of the string:"<<ends<<len<<endl;
	char chr[len];
	
	//change the string to char array
	strcpy(chr,str.c_str()); 
	
	//for calculating the decimal of binary numbers 
	for(int i=0;i<len;i++){
		
		if(chr[i]=='1'){
			int power=len-1-i;
			sum+=(int)(pow(2,power));
		}
		  /*
		  sum+=(int)(pow(2,power)+0.5);  use this if your compiler don't give the ans this function incorrect 
		  */ 
	}
	cout<<sum;
}
