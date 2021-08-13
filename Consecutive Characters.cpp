/*
Given a string s, the power of the string is the maximum length of a non-empty substring that contains only one unique character.

Return the power of the string.

Input Format
Single line input containing a string

Constraints
Solve in O(n) time.

Output Format
Single integer output

Sample Input
abbcccddddeeeeedcba
Sample Output
5
Explanation
The substring "eeeee" is of length 5 with the character 'e' only.
*/
#include<iostream>
using namespace std;
int main () {
	string str;
	getline(cin,str);
	int ans=0;
	int prev=0;
	int i=1;
	while(i<str.length()){
		int count=1;
		if(str[i]==str[i-1]){
			int j=i;
			while(j<str.length() && str[j]==str[j-1]){
				count++;
				j++;
			}
			if(count>ans)
				ans=count;
			i=j;
		}
		else{
			i++;
		}
	}
	cout<<ans;

	return 0;
}
