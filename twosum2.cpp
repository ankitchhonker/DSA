#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> twosum( vector<int> arr,int target)
{
	int left = 0;
	int right = arr.size();
	vector<int>ans(2);
	while(left<=right)
	{
		int sum = arr[left] + arr[right];
		if(target== sum)
		{
			ans.push_back(left);
			ans.push_back(right);
			return ans;
		}
		
		else if(sum > target)
		right--;
		
		else
		left ++;
	}
	return {};
}
int main(){
	vector<int> nums;
	    nums.push_back(2);
		nums.push_back(3);
		nums.push_back(4);
		nums.push_back(5);
		nums.push_back(6);
		nums.push_back(9);
	
	int t = 15;
	int i = 0;
	
	  vector<int>ans(2);
	  ans = twosum(nums,t);
	  for(i=0;i<2;i++)
	  cout<<" "<<ans[i];
	  
	  return 0;
}
