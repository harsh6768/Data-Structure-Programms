#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter a Decimal Number:"<<ends;
	cin>>n;
	vector<int> arrayOfBits;
	
	//for storing the bits into the vector 
	while(n>0){
		
		int b=n%2;
		arrayOfBits.push_back(b);
		n/=2;
				
	}
	//Display In the reverse order to get the equevalent of decimal number   
	for(int i=arrayOfBits.size()-1; i>=0 ;i--){	
	
		cout<<arrayOfBits[i]<<ends;	
	}
	
}
