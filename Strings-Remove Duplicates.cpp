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
int main() {
	string str;
	getline(cin,str);
	cout<<str[0];
	int i=1;
	int prev=0;
	while(i<str.length()){
		if(str[i]==str[prev])
			i++;
		else{
			cout<<str[i];
			prev=i;
			i++;
		}
	}
	return 0;
}