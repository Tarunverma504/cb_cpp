/*
Aisha and Ayush were playing word games. They both wrote two words randomly. Now you have to check if one word can be formed by jumbling the letters of another word. If possible, then print "True", otherwise print "False".

Input Format
First line contains word written by Aisha and second line contains word written by Ayush.

Constraints
You may assume the string contains only lowercase alphabets.

Output Format
Print True, if possible, else print False.

Sample Input
hello
holle
Sample Output
True
Explanation
Second string "holle` can be arranged to form "holle".
*/
#include<iostream>
using namespace std;
bool isjumbles(string str1,string str2){
    
    if(str1.length()!=str2.length())
        return false;
    int arr[256]={0};
    for(int i=0;i<str1.length();i++){
        arr[str1[i]]+=1;
    }
    for(int i=0;i<str2.length();i++){
        arr[str2[i]]-=1;
    }
    for(int i=0;i<256;i++){
        if(arr[i]!=0)
            return false;
    }
        
    return true;
}
int main(){
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    if(isjumbles(str1,str2))
		cout<<"True";
	else
		cout<<"False";

    return 0;
}
