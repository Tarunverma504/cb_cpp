/*
Given two arrays of integers nums and index. Your task is to create target array under the following rules:

Initially target array is empty.
From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
Repeat the previous step until there are no elements to read in nums and index.
Return the target array.

It is guaranteed that the insertion operations will be valid.

Input Format
First line of input contains an integer n representing the length of the array nums. Next line contains n integers representing array elements. Next line contains n integers representing index array.

Constraints
1 <= nums.length, index.length <= 100
nums.length == index.length
0 <= nums[i] <= 100
0 <= index[i] <= i

Output Format
An array of n integers representing target array.

Sample Input
5
0 1 2 3 4 
0 1 2 2 1
Sample Output
0 4 1 3 2
Explanation
nums index target
0 0 [0]
1 1 [0,1]
2 2 [0,1,2]
3 2 [0,1,3,2]
4 1 [0,4,1,3,2]
*/

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    int index[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cin>>index[i];
        
    int temp[1000000];
    for(int i=0;i<n;i++){
        for(int j=n;j>=index[i];j--){
            temp[j] = temp[j-1];
        }
        temp[index[i]]=arr[i];
    }
    for(int k=0;k<n;k++){
        cout<<temp[k]<<" ";
    }
    
}

