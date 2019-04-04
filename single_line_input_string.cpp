#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string str,str2;
	// "12 23 34 45 56" taking input like this 
	getline(cin>>ws,str);
	
	//making variable for stringstream
	stringstream str1;
	
	vector<int> vec;
	int x;
	//storing string to stringstream 
	str1<<str;
	
	while(str1>>str2){  //converting stringstream to string 
		
		//it will convert the string to object
		stringstream convert(str2);
		//converting object to int
		convert>>x;
		
		//pushing the value into the vector
		vec.push_back(x);
		
	}
	//printing the integer values
	for(int x:vec){
		cout<<x<<endl;
	}
	
}
