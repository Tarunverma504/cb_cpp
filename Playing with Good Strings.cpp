/*
A Good String is a string which contains only vowels (a,e,i,o,u) . Given a string S, print a single positive integer N where N is the length of the longest substring of S that is also a Good String.

Note: The time limit for this problem is 1 second, so you need to be clever in how you compute the substrings.

Input Format
A string 'S'

Constraints
Length of string < 10^5

Output Format
A single positive integer N, where N is the length of the longest sub-string of S that is also a Good String.

Sample Input
cbaeicde
Sample Output
3
Explanation
Longest good substring is "aei"
*/
#include<iostream>
using namespace std;
int main() {
	string str;
	getline(cin,str);
	int count=0;
	int ans=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
			count++;
		}
		else{
			if(count>ans)
				ans=count;
			count=0;
		}
	}
	if(ans<count){
		cout<<count;
	}
	else
	cout<<ans;
	return 0;
}
