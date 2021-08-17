/*
You are given two strings A and B of lowercase letters, return true if you can swap two letters in A so the result is equal to B, otherwise, return false.

Input Format
The first line represents input string. The second line represents the goal string.

Constraints
1 <= s.length, goal.length <= 2 * 10^4
s and goal consist of lowercase letters.

Output Format
The boolean result as true or false.

Sample Input
aa
aa
Sample Output
true

*/
#include<iostream>
using namespace std;

string buddyStrings (string A, string B) {
    if(A.empty() || B.empty()){
        return "false";
    }
    for(int i=0;i<A.size()-1;i++){
        swap(A[i],A[i+1]);
            
        if(A==B){
            return "true";
        }
        swap(A[i], A[i+1]);    
    }
    return "false";
}

int main(){
	string str1, str2;
	cin >> str1;
	cin >> str2;
	string res = buddyStrings(str1, str2);
	cout << res;
}
