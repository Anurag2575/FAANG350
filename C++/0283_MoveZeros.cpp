#include<vector>
using namespace std;

void moveZeros(vector<int>& nums){
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]!=0){
            swap(nums[i], nums[j++]);
        }
    }
}