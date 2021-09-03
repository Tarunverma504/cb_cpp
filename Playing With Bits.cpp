/*
Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to assign a task to his student Sanya. You have help Sanya to complete this task. Task is as follows - Prateek Bhayia gives Q queries each query containing two integers a and b. Your task is to count the no of set-bits in for all numbers between a and b (both inclusive)

Input Format
Read Q - No of Queries, Followed by Q lines containing 2 integers a and b.

Constraints
Q,a,b are integers.

Output Format
Q lines, each containing an output for your query.

Sample Input
2
1 1
10 15
Sample Output
1
17
*/
#include<iostream>
using namespace std;
int countBit(int no){
	int count=0;
	while(no>0){ //110&001
		if((no&1)>0){//1&1
			count++; //2

		}
		no=no>>1; //0


	}
	return count;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int l,r;
		cin>>l>>r;
		int count=0;
		for(int i=l;i<=r;i++){
			count+=countBit(i);
		}
		cout<<count<<endl;
	}
	return 0;
}
