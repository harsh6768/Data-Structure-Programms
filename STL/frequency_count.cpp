#include<bits/stdc++.h>
using namespace std;
bool comp(int x, int y)
{
	return(x<y);
}
main()
{
	int arr[7];
	for(int i=0; i<7; i++)
	cin>>arr[i];
	//for getting the max number from the array

	int* max = max_element(arr+0, arr+6, comp), maxSize = *max;
	int arr2[*max+1];
	
	memset(arr2, 0, sizeof(arr2));
	//memset(arr2, 0, sizeof(arr2));
	for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
	  
	  	arr2[arr[i]]++;   // couting frequency of numbers and storing into the second array
		  	
	}
	
	for(int i=0; i<sizeof(arr2)/sizeof(arr2[0]); i++){
		if(arr2[i] == 1){
		cout<<i;break;
	  }
	}
	
}
