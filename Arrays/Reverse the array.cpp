/*
    Input - [2,3,4]
    Output - [4,3,2]
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> nums;
	int x;
	while(cin>>x){
		nums.push_back(x);
	}
	int n = nums.size();

	for(int i=0,j=n-1;i<j;i++,j--){
		swap(nums[i],nums[j]);
	}

	for(int i=0;i<n;i++) cout<<nums[i]<<" ";
}

/*
    Time Complexity -> O(N/2)
    Space Complexity -> O(1)
*/