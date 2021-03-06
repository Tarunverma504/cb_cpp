/*
Given a long vector of strings, print the strings that contain the strings generated by numeric string str.

vector<string> keypad = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

string searchIn [] = {
            "kartik", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
For example, if the input is 26 and the string is coding, then output should be coding since 26 can produce co which is contained in coding.

Input Format
A numeric string str

Constraints
len(str) < 10
No of strings in the vector < 10

Output Format
Each matched string from the given vector.

Sample Input
34
Sample Output
vidhi
divyam
sneha
Explanation
34 will result into combinations :

*dg         *eg         *fg
*dh            *eh         *fh
*di            *ei         *fi
Corresponding strings are output.

vidhi contains dh
divyam contains di
sneha contains eh
*/
#include<iostream>
using namespace std;
string codes[]={" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
string names[]={
            "kartik", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };
string ans[1000000];
int num=0;
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();
     for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
        if (j == M)
            return i;
    }
    return -1;
}
void getmatch(string asf){
	for(int i=0;i<11;i++){
		if(isSubstring(asf,names[i])!=-1){
			ans[num++]=names[i];
		}
	}
}
void getresult(string s,string asf){
	if(s.length()==0){
		//cout<<asf<<endl;
		getmatch(asf);
		return;
	}
	char ch=s[0];
	string code=codes[ch-'0'];
	string ros=s.substr(1);
	for(int i=0;i<code.length();i++){
		getresult(ros,asf+code[i]);
	}
}
int main() {
	string s;
	cin>>s;
	getresult(s,"");
	for(int i=0;i<num;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
