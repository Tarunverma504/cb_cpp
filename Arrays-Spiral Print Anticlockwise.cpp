/*
Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 10.

Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
Explanation
For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> first row and then do the same traversal for the remaining matrix .
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
		for(int i=sr;i<=er;i++){    //first column
			cout<<arr[i][sc]<<", ";

		}
	sc++;
	for(int i=sc;i<=ec;i++){     //last row
		cout<<arr[er][i]<<", ";
	}
	er--;
	if(sr<=er){
		for(int i=er;i>=sr;i--){   //last column
			cout<<arr[i][ec]<<", ";
		}
		
	}
	ec--;
	if(sc<=ec){
		for(int i=ec;i>=sc;i--){    //first row
			cout<<arr[sr][i]<<", ";
		}
		
	}
	sr++;
		
	}
	cout<<"END";
	return 0;
}
