/*
    Input -> [-1 -2 -4 1 2 -4 45 8 -2]
    Output -> [-1 -2 -4 -4 -2 1 2 45 8]
*/

#include <bits/stdc++.h>
using namespace std;

void reorderNegPog(vector<int>& nums,int n) {
	int neg = 0;
	int pos = n-1;
	while(neg <= pos){
		int temp = nums[neg];
		if(temp > 0) swap(nums[neg],nums[pos--]);
		if(nums[neg] < 0) neg++;
		
	}    
}


int main(){
	vector<int> nums;
	int x;
	while(cin>>x){
		nums.push_back(x);
	}
	int n = nums.size();

	reorderNegPog(nums,n);

	for(int i=0;i<n;i++) cout<<nums[i]<<" ";
}



/*
    Time Complexity -> O(N)
    Space Complexity -> O(1)
*/
