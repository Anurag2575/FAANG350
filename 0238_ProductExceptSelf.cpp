#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums){
    int n = nums.size();
    vector<int> result(n, 1);
    for(int i = 1; i < n; i++){
        result[i] = result[i-1] * nums[i-1];
    }
    
    int suffix = 1;
    for(int i = n-2; i >= 0; i--){
        suffix *= nums[i+1];
        result[i] *= suffix;
    }

    return result;
}