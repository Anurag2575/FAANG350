#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums){
  int j = 0;
  for(int i = 1; i < nums.size(); i++){
    //if unique element is found
    if(nums[i] != nums[j])
      //move it next to the last unique element
      nums[++j] = nums[i];
  }

  return j+1;//returns length of array after removing duplicates
}
