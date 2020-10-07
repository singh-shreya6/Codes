//Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
//problem link: https://leetcode.com/problems/trapping-rain-water/
/*for submission on leetcode :

class Solution {
public:
    int trap(vector<int>& height)
{
    int left = 0, right = height.size() - 1;
    int ans = 0;
    int left_max = 0, right_max = 0;
    while (left < right) {
        if (height[left] < height[right]) {
            height[left] >= left_max ? (left_max = height[left]) : ans += (left_max - height[left]);
            ++left;
        }
        else {
            height[right] >= right_max ? (right_max = height[right]) : ans += (right_max - height[right]);
            --right;
        }
    }
    return ans;
}
};*/
//full solution:


#include <iostream> 
using namespace std; 

int findWater(int arr[], int n) 
{ 
	int result = 0; 
	int left_max = 0, right_max = 0; 
	int lo = 0, hi = n - 1; 

	while (lo <= hi) { 
		if (arr[lo] < arr[hi]) { 
			if (arr[lo] > left_max)  
				left_max = arr[lo]; 
			else
					result += left_max - arr[lo]; 
			lo++; 
		} 
		else { 
			if (arr[hi] > right_max) 
					right_max = arr[hi]; 
			else
				result += right_max - arr[hi]; 
			hi--; 
		} 
	} 

	return result; 
} 

int main() 
{ 
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Maximum water that can be accumulated is "
		<< findWater(arr, n); 
} 

