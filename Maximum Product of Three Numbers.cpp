/*
Given an array arr of n integers , find three numbers in the given array such that their product is maximum. Print the maximum product obtained.

Input Format
First number of the given input is the length of the array n, Next n lines of input contains elements of the array.

Constraints
3<=n<=10^4
-1000<=arr[i]<=1000

Output Format
An integer representing maximum product of three numbers.

Sample Input
3
-1 -2 -3
Sample Output
-6
Explanation
In sample test case, taking product of largest 3 numbers gives maximum product, i.e -1 * -2 *-3 = -6.
*/
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                long long int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    long long int product1=arr[0]*arr[1]*arr[n-1];
    long long int product2=arr[n-1]*arr[n-2]*arr[n-3];
    if(product1>product2)
        cout<<product1;
    else
        cout<<product2;

}

