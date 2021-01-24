#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int findMaxConsecutiveOnes(vector<int>& nums){
    int count = 0;
    int result = 0;
    for (int i=0; i<nums.size(); i++){
      if (nums[i]==0){
        count = 0;
      }
      else {
        count++; //increases the count for consecutive 1's
        result = max(result, count);
      }
    }
    return result;
  }
};

int main(){
  int vector<int> v;
  int n;

  cin >> n;

  for(int i=0; i<n; i++){
    cin >> v.push_back(i); 
  }
}
