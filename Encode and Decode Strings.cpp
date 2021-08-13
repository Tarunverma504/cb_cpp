/*
Design an algorithm to encode a list of strings to a string. The encoded string is then sent over the network and is decoded back to the original list of strings.

Input Format
The first line representing n words The array containing strings.

Constraints
The length of array is 10^4.

Output Format
The string is encoded and decoded back.

Sample Input
4
lint code love code
Sample Output
[lint, code, love, code]
*/
#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	string str[n];
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	cout<<"[";
	for(int i=0;i<n-1;i++){
		cout<<str[i]<<", ";
	}
	cout<<str[n-1]<<"]";
	return 0;
}
