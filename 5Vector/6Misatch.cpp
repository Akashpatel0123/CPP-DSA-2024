#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2); // To store the result [duplicate, missing]
        int n = nums.size(); // The size of the input array
        vector<bool> isPresent(n + 1, false); // Boolean array to track presence of numbers

        // Identify the duplicate number
        for (int num : nums) {
            if (isPresent[num]) {
                ans[0] = num; // Found the duplicate
            }
            isPresent[num] = true;
        }

        // Identify the missing number
        for (int i = 1; i <= n; i++) {
            if (!isPresent[i]) {
                ans[1] = i; // Found the missing number
                break;
            }
        }

        return ans;
    }
};
