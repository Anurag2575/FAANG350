#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
  unordered_map<int, int> numbers; //map to store number and its index
  
  for(int i = 0; i < nums.size(); i++){
    int moreNeeded = target - nums[i];
    if(numbers.find(moreNeeded) != numbers.end()) return {numbers[moreNeeded], i};
    numbers[nums[i]] = i;
  }

  return {-1, -1}; //if no valid pair is found.
}
