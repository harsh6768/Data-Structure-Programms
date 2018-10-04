//Left Rotation of an Array

#include<bits/stdc++.h>
using namespace std;


void leftRotateByOne(vector<int> &vec){
	
	int temp=vec[0];   //stroing the first element into the array 
	int i=0;
	for(i=0;i<vec.size();i++){
	   	vec[i]=vec[i+1];    //then shift one place 
	}
	
	//now again push the first element to the last 
	vec[i-1]=temp;
	

}

int main(){
	
	int n;
	cout<<"Enter the No element :";
	cin>>n;
	
	int num;
	vector<int> vec;
	for(int i=0;i<n;i++){
		cin>>num;
		vec.push_back(num);
	
	}
	
	int index;
	cout<<"Enter the index from which you want to rotate:";
	cin>>index;
	vector<int> vec1;
	//index+1 because index is one less from the actual number and in for loop we are working with actual number 
    for(int i=0;i<index+1;i++){
        //call the function which will shift the left 
    	leftRotateByOne(vec);
    	
    }
    
    cout<<endl<<"After Left Rotation Numbers:"<<endl;
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<ends;
	}	
	
	 
}

