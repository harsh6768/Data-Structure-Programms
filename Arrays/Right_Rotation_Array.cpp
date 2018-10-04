//Right Rotation 

#include<bits/stdc++.h>
using namespace std;

void rightRotateByOne(vector<int> &vec){
	
	int len=vec.size();
	int temp=vec[len-1];   //stroing the first element into the array 
	int i=0;
	
	for(i=len-1;i>0;i--){
	   	vec[i]=vec[i-1];    //then shift one place 
	}
	
	
	//now again push the first element to the last 
	vec[0]=temp;
	
}

int main(){
	
	int n;
	cout<<"Enter the No  of elements :";
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
        //call the function which will shift the right 
       rightRotateByOne(vec);	
	}
    
    cout<<endl<<"After Right Rotation Numbers:"<<endl;
	
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<ends;
	}	
	
}

