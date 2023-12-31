#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums[0]; // 원소가 1개인 경우 예외처리

        int res = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i += 2)
        {
            if (nums[i] != nums[i + 1])
            {
                res = nums[i];
                break;
            }
        }
        return res;
    }
};