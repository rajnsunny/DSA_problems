/*
    Prob Link -> https://leetcode.com/problems/sort-colors/description/
    Input - [0 1 2 1 2 0]
    Output - [0 0 1 1 2 2]
*/

/*
    Dutch National Flag Algorithm
*/

#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zer = 0;
        int one = 0;
        int two = n - 1;
        while(one <= two){
            if(nums[one] == 0) {
                swap(nums[one],nums[zer]);
                zer++;
                one++;
            }
            else  if(nums[one] == 2){
                swap(nums[one],nums[two]);
                two--;
            }
            else{
                one++;
            }
        }
    }


int main(){
	vector<int> nums;
	int x;
	while(cin>>x){
		nums.push_back(x);
	}
	int n = nums.size();

	sortColors(nums);

	for(int i=0;i<n;i++) cout<<nums[i]<<" ";
}

/*
    Time Complexity -> O(N)
    Space Complexity -> O(1)
*/