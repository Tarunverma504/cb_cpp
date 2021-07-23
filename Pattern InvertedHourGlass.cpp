/*
Take N as input. For a value of N=5, we wish to draw the following pattern :

             5                   5 
             5 4               4 5 
             5 4 3           3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2 1 0 1 2 3 4 5 
             5 4 3 2 1   1 2 3 4 5 
             5 4 3 2       2 3 4 5 
             5 4 3           3 4 5 
             5 4               4 5 
             5                   5 
Input Format
Take N as input.

Constraints
Output Format
Pattern should be printed with a space between every two values.

Sample Input
5
Sample Output
5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5 

*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=n;i>0;i--){
		for(int j=n;j>0;j--){
			if(j>=i)
			cout<<j<<" ";
			else
				cout<<"  ";
		}
		for(int j=0;j<=n;j++){
			if(j<i)
				cout<<"  ";
			else
				cout<<j<<" ";

		}
		cout<<endl;		
	}
	for(int j=n;j>=0;j--)
		cout<<j<<" ";
	for(int j=1;j<=n;j++)
		cout<<j<<" ";
		cout<<endl;
	for(int i=1;i<=n;i++){
		for(int j=n;j>=0;j--){
			if(j>=i)
				cout<<j<<" ";
			else
				cout<<"  ";
		}
		for(int j=1;j<=n;j++){
				if(j>=i)
					cout<<j<<" ";
				else	
					cout<<"  ";
			}
		cout<<endl;
	}

	return 0;
}
