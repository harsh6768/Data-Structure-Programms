//Algorithms : Sieve Of Eratosthenes
//for printing the prime number below the given number 

#include<bits/stdc++.h>
using namespace std;

#define li long long int

int main(){
	
	li n;   
	cout<<"Enter the number ";
	cin>>n;

    //for setting the boolean value into the vector
	bool vec[n+1];   //we are saving the  

   //settting the default	
	memset(vec,true,sizeof(vec));  //this will set the true into the vector 

	
	for(li i=2;i*i<=n;i++){
	 	
	 	//if number is true and p*p is less than the size of the 
	 	if(vec[i]==true){
	 		
	 		//if 2 is prime then it will start from the 4 so that 2 won't get affect
	 		for(li j=i*2;j<=n;j+=i){   
	 			vec[j]=false;   //setting the value if number is not prime then set the false
	 		}
	 	}
	 	
	}
	
	//for printing the prime value
	for(li i=2;i<=n;i++){
	    
	    //if vec[i] true then print the value
		if(vec[i]){
			cout<<i<<ends;
		}	
	}
	
	
}
