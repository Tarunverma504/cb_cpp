/*
Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

Input Format
N(integer) followed by N strings.

Constraints
N<=1000

Output Format
N lines each containing one string.

Sample Input
3
bat
apple
batman
Sample Output
apple
batman
bat
Explanation
In mathematics, the lexicographic or lexicographical order (also known as lexical order, dictionary order, alphabetical order or lexicographic(al) product) is a generalization of the way words are alphabetically ordered based on the alphabetical order of their component letters.

{...} Code Editor
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	string str[n],temp;
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	string a="";
	string b="";
	for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
			int x=0,y=0;
			a=str[j-1];
			b=str[j];
			
			while(x<a.length() && y<b.length()){
				
				if(a[x]==b[y]){
					x++;
					y++;
				}
				else{
					if(str[j]<str[j-1]){
						temp=str[j];
						str[j]=str[j-1];
						str[j-1]=temp;
						
					}
					break;
				}

			}
			if(x==a.length() && y!=b.length()){
				temp=str[j];
				str[j]=str[j-1];
				str[j-1]=temp;
			}
        }
    }
	for(int i=0;i<n;i++)
		cout<<str[i]<<endl;
	return 0;
}
