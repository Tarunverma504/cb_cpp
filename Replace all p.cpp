/*
Replace all occurrences of pi with 3.14

Input Format
Integer N, no of lines with one string per line

Constraints
0 < N < 1000
0 <= len(str) < 1000

Output Format
Output result one per line

Sample Input
3
xpix
xabpixx3.15x
xpipippixx
Sample Output
x3.14x
xab3.14xx3.15x
x3.143.14p3.14xx
Explanation
All occurrences of pi have been replaced with "3.14".
*/
#include<iostream>
using namespace std;
string replacepi(string s){
	if(s.length()<=1)
		return s;
	if(s.substr(0,2)=="pi")
		return "3.14"+replacepi(s.substr(2));
	else
		return s[0]+replacepi(s.substr(1));
}
int main() {
	int t;
	cin>>t;
	while(t>0){
		string s;
		cin>>s;
		cout<<replacepi(s)<<endl;
		t--;
	}
	return 0;
}
