#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int h){

    //getting the size of the array
	int n1=mid-l+1;   //mid and l is the index so we need to add 1 for the size
	int n2=h-mid; 
	
	//initialize the array
	int left[n1],right[n2];
	
	//copying the value of the array
	for(int i=0;i<n1;i++)
	   left[i]=arr[l+i];
	
	//m+1 is the first index of the next half array
	for(int j=0;j<n2;j++)
	   right[j]=arr[mid+1+j];
	   
	   
    //Now start merging by sorting the array
    
    int i=0,j=0;
	
	//initial index of merged subarray
	int k=l;
    
    while(i<n1 && j<n2){
    	
    	if(left[i]<=right[j]){
    		 //setting the value 
    		 //then increase the value of i
			arr[k]=left[i];
    		i++;
    	}else{
    		arr[k]=right[j];
    		j++;
    	}
    	k++;
    	
    }
    //copy the remaining values 
    while(i<n1){
    	arr[k]=left[i];
    	i++;
    	k++;
    }
    //copy the remaining values
    while(j<n2){
    	arr[k]=right[j];
    	j++;
    	k++;
    }
}

/*

1. l is the lowest index of the array
2. h is the highest index of the array
3. and the array arr

*/
void mergeSort(int arr[],int l,int h){
	
	//calling mergerSort recursively unitl we signle deigit in array
	if(l<h){
		
		//something logic here
		//we can also use mid=l+h/2 but for avoids the overflow for large integer
		int mid=l+(h-l)/2;
		//passing the first and second half for recursive call
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,h);
		
		//after that we need to merge the array to get the sorted array
		merge(arr,l,mid,h);
		
	}
	
}

int main(){
	
	int n;
	cout<<"Enter the size of the Array:"<<ends;
	cin>>n;
     
	int arr[n];	
	cout<<"Enter the Number:"<<ends;

    for(int i=0;i<n;i++)
       cin>>arr[i];

   //Befor  sorting the Array 
    for(int j=0;j<n;j++)
       cout<<arr[j]<<"-->"<<ends;
	
	cout<<endl;       
    //passing the first,last index and the arr
    mergeSort(arr,0,n-1);
    
    //Sorted Array
    for(int j=0;j<n;j++)
       cout<<arr[j]<<"-->"<<ends;
    
}
