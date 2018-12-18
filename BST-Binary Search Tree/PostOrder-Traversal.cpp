#include<bits/stdc++.h>
using namespace std;

struct tree{
	
	int data;
	tree *left;
	tree *right;
	
};

tree* insertNode(tree *root,int data){
	
	//if there were no tree 
	if(root==NULL){
		
		tree *temp;
        //making new node
		temp=new tree;
		temp->data=data;
		//at the begining left and right node should be contain NULl 
		temp->left=temp->right=NULL;
		return temp;
		
	}
	//data is the current value of that we are inserting into the bst
	
	if(data<(root->data)){
         
		 root->left=insertNode(root->left,data);		
	
	}
	else if(data>(root->data)){
	      
		  root->right=insertNode(root->right,data);
		
	}
	
	return root;
	
}

//displaying data using postOrder traversal
void postOrder(tree *root){
	 
	 if(root==NULL){
	     return;	
	 }
	 
	 inOrder(root->left);
	 inOrder(root->right);
	 cout<<root->data<<ends;
	 
}

int main(){
   
   tree *root=NULL;
   A: 
   int data;
   cout<<"Enter Number:"<<ends;
   cin>>data;
   //for inserting the data into the the BST
   root=insertNode(root,data);
    
    //for entering the another number 
   char ch;  
   cout<<"Press y or Y to insert another number:"<<ends;
   cin>>ch;
   if(ch=='y' or ch=='Y')
     goto A;
 	
   //displaying the data using inOrder traversal
   postOrder(root);
    
}
