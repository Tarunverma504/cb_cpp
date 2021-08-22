/*
Given a square matrix and the task is to check the matrix is in lower triangular form or not. A square matrix is called lower triangular if all the entries above the main diagonal are zero.

Input Format
First line contains N, size of the matrix Next N lines contains N integers each denoting the matrix elements.

Constraints
4 <= N <= 100

Output Format
Print "true" or "false" (without the quotes).

Sample Input
4
374 0 0 0 
761 60 0 0 
578 531 878 0 
75 10 197 198 
Sample Output
true
*/
#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	int flag = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i][j] != 0){
               flag=1;
			}
		}
	}
	if(flag==1){
		cout<<"false"<<endl;
	}else{
		cout << "true"<<endl;
	}	
	return 0;
}
