#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
      vector<int> temp(nums.size() );
      for(int i=0; i< nums.size(); i++){
          temp[(i+k) % nums.size()] = nums[i];
      }
      nums = temp;
}

void printArray(vector<int>& nums, int k){
      for(int i=0; i<nums.size(); i++){
            cout << nums[i] << " ";
      }
      cout << endl;
}

int main() {
      int nums[7] = {1,2,3,4,5,6,7};
      int k = 2;
      int size = 7;

      rotate(nums,2);
      printArray(nums,2);

      return 0;

}      