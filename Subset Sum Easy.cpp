/*
Mike is a very passionate about sets. Lately, he is busy solving one of the problems on sets. He has to find whether if the sum of any of the non-empty subsets of the set A is zero.

Input Format
The first line contains an integer T, which is the total number of test cases.
T test cases follow.
Each test case consists of two lines.
The first line consists of a single integer N, which is the number of elements present in the set A.
The second line contains N space separated integers denoting the elements of the set A.

Constraints
1 = T =10
1 = N = 4
-10^5 = A[i] = 10^5

Output Format
Print the answer for each testcase in a new line.
If the sum of any of the subset is zero, then print �Yes� (without quotes) else print �No�(without quotes).

Sample Input
1
4
1 3 2 -3
Sample Output
Yes
Explanation
The sum of the subset {3,-3} is zero.
*/
#include<iostream>
using namespace std;

bool subset(int*a,int i, int sum,int n,bool atleastOneIncluded){
    if(i>=n){
        if(sum==0 && atleastOneIncluded){
            return true;
        }
        else {
            return false;
        }
    }
   
   bool exc = subset(a,i+1,sum,n,atleastOneIncluded);
   sum+=a[i];
   bool inc = subset(a,i+1,sum,n,true);

    return inc or exc;

}

int main() {
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        if(subset(a,0,0,n,false))
        cout<<"Yes";
        else
        cout<<"No";

        cout << endl;
    }


	return 0;
}

