#include<vector>
#include<climits>
using namespace std;

//Using Kadane's Algorithm
int maxSubarray(vector<int>& nums){
    int sum = 0, maxSum = INT_MIN;
    for(auto& i : nums){
        sum += i;
        maxSum = max(maxSum, sum);
        if(sum < 0) sum = 0;  // reset if current sum dips below 0
    }
    
    return maxSum;
}