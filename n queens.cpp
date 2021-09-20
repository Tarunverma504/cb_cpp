#include<iostream>
using namespace std;
bool isSafe(int board[][50],int i,int j,int n){
	//vertical and horizontally check
	for(int k=0;k<n;k++){
		if(board[k][j]==1|| board[i][k]==1){
			return false;
		}
	}
	// we have to check for left diagonal
	int x=i;
	int y=j;
	while(x>=0 && y>=0){
		if(board[x][y]==1)
			return false;
		x--;
		y--;
		
	}
	// again we have to check for the right diagonal also
	x=i;
	y=j;
	while(x>=0 && y<n){
		if(board[x][y]==1)
			return false;
		x--;
		y++;
		
	}
	// the position is now safe 
	return true;
}
int count=0;
bool solveNQueen(int board[][50],int i,int n){
	//base case
	if(i==n){
		// we have successfully place queen in n rows
		//print the board;
		cout<<count++<<endl;
		for(int l=0;l<n;l++){
			for(int r=0;r<n;r++){
				if(board[l][r]==1)
					cout<<"Q ";
				else
					cout<<"_ ";
			}
			cout<<endl;
		}
		return true;
		//i \f we want all pall positible ways to place we eturn false here
	}
	
	//recursive case
	//try to place the queen in currenty row and call ont the remaining part which will be solved by recursition
	for(int j=0;j<n;j++){
		// i have to check if i,j position is save to place the queen or not
		if(isSafe(board,i,j,n)){
			// place the queen- Assuming i,j is the right position
			board[i][j]=1;
			bool kyaNextQueenRakhPaye=solveNQueen(board,i+1,n);
			if(kyaNextQueenRakhPaye==true){
				return true;	
			}
			
			//means i,j is not true our assumptin is wrong
			board[i][j]=0; //backtrack
		}
	}
	//we have truied for all positions in the current row but not able to plae the queen
	return false;
}
 int main(){
 	int board[50][50]={0};
 	int n;
 	cin>>n;
 	solveNQueen(board,0,n);
 }
 
