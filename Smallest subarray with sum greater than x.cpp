/*
Given an array of integers (A[]) with n elements and a number x, find the smallest sub array with sum greater than the given value.

Note: The answer always exists. It is guaranteed that x doesn't exceed the summation of a[i] (from 1 to N).

Input Format
First line contains two integers representing value of n and x repectively.
Next n line contains array elements

Constraints
1 = N, x = 10^5
1 = A[] = 10^4

Output Format
Minimum length subarray

Sample Input
6 3
1
4
45
6
0
19
Sample Output
1
Explanation
None.
*/
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=INT_MAX;
    int left=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        while(sum>=target){
            ans=min(ans,i+1-left);
            sum-=arr[left];
            left++;
        }
    }
    cout<<ans;
    return 0;
                    
                
}

