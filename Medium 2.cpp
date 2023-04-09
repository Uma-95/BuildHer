/*Medium 2 

Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
 
Example 1:
Input: nums = [3,2,3]
Output: [3]
Example 2:
Input: nums = [1]
Output: [1]
Example 3:
Input: nums = [1,2]
Output: [1,2]
 
Constraints:
1 <= nums.length <= 5 * 104
-109 <= nums[i] <= 109*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    int check = n / 3;

    unordered_map<int, int> m;

    for (int i = 0; i < n; i++) {
        m[nums[i]]++;
    }
//iterate over the freq map and check if the frequency 
//of any element is greater than the threshold n/3. If so, we add it to the result vector.
    for (auto it:m) {
        if (it.second > check) {
            result.push_back(it.first);
        }
    }

    return result;
}

int main() {
    vector<int> nums ;
    int input;
    while(cin>>input){
    for(auto i:nums){
        nums.push_back(input);
    }
    }
    vector<int> result = majorityElement(nums);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}


