//Use of accumulate() and partial_sum() method

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int a[]={1,2,3,4,5};
	
	int sum=0;
	
	//this method just add the all elements present in the array
	cout<<accumulate(a,a+5,sum)<<endl;
	
	int a1[5];
	
	//this method use the prefix sum techinque and add the cumulative manner and add the values into the given array or vector
	partial_sum(a,a+5,a1);
	
	for(int i=0;i<5;i++){
		cout<<a1[i]<<ends;
	}
}
