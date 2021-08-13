/*
Take as input S, a string. Write a function that does basic string compression. Print the value returned. E.g. for input �aaabbccds� print out a3b2c2ds.

Input Format
A single String S.

Constraints
A string of length between 1 to 1000

Output Format
The compressed String.

Sample Input
aaabbccds
Sample Output
a3b2c2ds
Explanation
In the given sample test case 'a' is repeated 3 times consecutively, 'b' is repeated twice, 'c' is repeated twice. But, 'd' and 's' occurred only once that's why we do not write their occurrence.
*/
#include<iostream>
using namespace std;
int main() {
	string str;
	getline(cin,str);
	cout<<str[0];
	int i=1;
	int count=1;
	while(i<str.length()){
		if(str[i]==str[i-1]){
			count++;
		}
		else{
			if(count>1){
				cout<<count<<str[i];
				count=1;
			}
			else{
				cout<<str[i];
			}
		}
		i++;
	}
	if(count>1){
		cout<<count;
	}
	return 0;
}
