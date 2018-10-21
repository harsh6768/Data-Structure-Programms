#include<bits/stdc++.h>
using namespace std ;

//base condition always write in  top of the 
long long int pow(long long int x,long long int y){
	
	if(y==0 )
	 return 1;
	if(y==1)
	  return x;
	else if(y%2==0){
	   long long int a= pow(x,y/2);  // if y is even then  x^4=x^2 * x^2  we only calculate x^2 
	  return a*a;	
    } 
    else{  // if y is odd  x^3 =x*x^2 we will calculate only the even power
    	return x*pow(x,y-1);
    }
}

int main(){
	
	long long int x,y;
	cin>>x>>y;
	
	long long int a=pow(x,y);
	cout<<a;
}
