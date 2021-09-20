/*
Take as input S, a string. Write a function that removes all consecutive duplicates. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000

Output Format
String

Sample Input
aabccba
Sample Output
abcba
Explanation
For the given example, "aabccba", Consecutive Occurrence of a is 2, b is 1, and c is 2.

After removing all of the consecutive occurences, the Final ans will be : - "abcba".
*/
#include<iostream>
using namespace std;
void getresult(string str,string res,int i){
	if(i==str.length()){
		cout<<res;
		return;
	}
	if(str[i]!=str[i+1]){
		res=res+str[i];
	}
	getresult(str,res,i+1);
}
int main() {
	string str;
	cin>>str;
	getresult(str,"",0);
	return 0;
}
