/*
    Input - [1,2,3,4,5]
    Output - 1 5
*/

#include <bits/stdc++.h>
using namespace std;

void maxMin(int n,vector<int>nums){
	int mx(nums[0]);
	int mn(nums[0]);

	for(int i=0;i<n;i++){
		if(nums[i] > mx) mx = nums[i];
		if(nums[i] < mn) mn = nums[i];
	}

	cout<<mn<<" "<<mx;
}


int main(){
	vector<int> nums;
	int x;
	while(cin>>x){
		nums.push_back(x);
	}
	int n = nums.size();

	maxMin(n,nums);
}


/*
    Time Complexity - O(N)
    Space Complexity - O(1)
*/