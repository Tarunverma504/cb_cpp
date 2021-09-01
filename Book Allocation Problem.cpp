/*

You are given number of pages in n different books and m students. The books are arranged in ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.

Input Format
First line contains integer t as number of test cases. Next t lines contains two lines. For each test case, 1st line contains two integers n and m which represents the number of books and students and 2nd line contains n space separated integers which represents the number of pages of n books in ascending order.

Constraints
1 < t < 50
1< n < 100
1< m <= 50
1 <= Ai <= 1000

Output Format
Print the maximum number of pages that can be assigned to students.

Sample Input
1
4 2
12 34 67 90
Sample Output
113 
Explanation
1st students : 12 , 34, 67 (total = 113)
2nd students : 90 (total = 90)
Print max(113, 90)
*/
#include<iostream>
using namespace std;
bool isValid(int *arr,int n,int student,int capability ){
	int pages=0;
	for(int i=0;i<n;i++){
		if(pages+arr[i]>capability){
			pages=arr[i];
			student--;
			if(student<=0){
				return false;
			}
		}
		else{
			pages+=arr[i];
		}
	}
	return true;
}
int main() {
	int t;
	cin>>t;
	while(t>0){
		int n, m;
		cin>>n>>m;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int total_pages=0;
		for(int i=0;i<n;i++)
			total_pages+=arr[i];
		int l=arr[n-1];
		int r=total_pages;
		int ans=-1;
		while(l<=r){
			int mid=(l+r)/2;
			if(isValid(arr,n,m,mid)){
				ans=mid;
				r=mid-1;
			}
			else{
				l=mid+1;
			}
		}
		cout<<ans<<endl;
		t--;
	}
	return 0;
}
