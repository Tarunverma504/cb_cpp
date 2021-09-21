/*
// 5 3 4 6 7 8 9 1 2 
// 6 7 2 1 9 5 3 4 8 
// 1 9 8 3 4 2 5 6 7 
// 8 5 9 7 6 1 4 2 3 
// 4 2 6 8 5 3 7 9 1 
// 7 1 3 9 2 4 8 5 6 
// 9 6 1 5 3 7 2 8 4 
// 2 8 7 4 1 9 6 3 5 
// 3 4 5 2 8 6 1 7 9 
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool kyaNumberAlreadyRowYaColumnYaBoxMePresentH(int mat[][9],int i,int j,int number,int n){
	//row colun check
	for(int k=0;k<n;k++){
		if(mat[i][k]==number || mat[k][j]==number)
			return true;
	}
	//check in that square
	n=sqrt(n);
	int starti=(i/n)*n;
	int startj=(j/n)*n;
	for(int l=starti; l<starti+n; l++){
		for(int r=startj; r<startj+n; r++){
			if(mat[l][r]==number)
				return true;
			
		}
	}
	return false;
	
}
bool sudukosolver(int mat[][9],int i,int j,int n){
	//base case
	if(i==n){
		for(int l=0;l<n;l++){
			for(int r=0;r<n;r++){
				cout<<mat[l][r]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	if(j==n){
		return 	sudukosolver(mat,i+1,0,n);
	}
	if(mat[i][j]!=0){
		return sudukosolver(mat,i,j+1,n);
	}
	
	for(int number=1;number<=n;number++){
		if(kyaNumberAlreadyRowYaColumnYaBoxMePresentH(mat,i,j,number,n)==false){
			mat[i][j]=number;
			bool kyaBakiSeAnsMila=sudukosolver(mat,i,j+1,n);
			if(kyaBakiSeAnsMila==true)
				return true;
			
			else
			mat[i][j]=0; //backtrack else
		}
		
		
	}
	return false;
}
int main(){
	
	int mat[9][9] =
		{{5,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};
		sudukosolver(mat,0,0,9);
}
