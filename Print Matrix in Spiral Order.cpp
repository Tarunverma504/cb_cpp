/*
Given a M x N matrix, print the matrix in spiral order.

Input Format
Two integers m and n. m*n elements of matrix.

Constraints
0<=m,n<=50
0<=mat[i][j]<=1000

Output Format
Elements of matrix printed in spiral order.

Sample Input
5 5
1 2 3 4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9
Sample Output
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
Explanation
none.
*/
#include<iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	// m=m-1;
	// n=n-1;
	int ec=m-1,sc=0;
	int er=n-1,sr=0;
	int i=0;
	int j=0;
	

	
	while(sc<=ec && sr<=er ){
		//print first column
		for(int i=sc;i<=ec;i++){
			cout<<arr[sr][i]<<" ";	
		}
		sr++;
		
		for(int i=sr;i<=er;i++){
			cout<<arr[i][ec]<<" ";
		}
		ec--;
		if(sr<=er){
			for(int i=ec;i>=sc;i--){
				cout<<arr[er][i]<<" ";

			}
			er--;
		}
		
			
		
		if(sc<=ec){
			
			for(int i=er;i>=sr;i--){
				cout<<arr[i][sc]<<" ";
			}
			sc++;
		}
		
	}
	return 0;
}
