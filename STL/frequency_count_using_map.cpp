#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	cin>>arr[i];

	map<int,int>freq;
	map<int , int>::iterator itr;  //making iterator traversing the map
	
	//counting the frequency
	for(int i=0;i<n;i++)
	{
	   	freq[arr[i]]++;   	
	}

	for(itr=freq.begin(); itr!=freq.end(); ++itr)
	 {
	    if(itr->second == 1){
	    	cout<<itr->first;  //for displaying the key of the map 
	    //	cout<<itr->second; //for displaying the value of the map
	    }	
	 }
	
}
