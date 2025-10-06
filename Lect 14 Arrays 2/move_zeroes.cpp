class Solution
{
public:
    // TC O(N)
    // SC O(N)
    // void moveZeroes(vector<int>& nums) {
    //     vector<int> ans;

    //     for (auto x : nums) {
    //         if (x != 0)
    //             ans.push_back(x);
    //     }

    //     int no_of_z = nums.size() - ans.size();

    //     for (int i = 0; i < no_of_z; i++)
    //         ans.push_back(0);
    //     nums = ans;
    // }

    // TC O(N)
    // SC O(1)
    void moveZeroes(vector<int> &nums)
    {
        int i = 0;
        int j = 0;
        int n = nums.size();
        while (i < n)
        {
            if (nums[i] == 0)
            {
                i++;
            }
            else
            {
                nums[j] = nums[i];
                j++;
                i++;
            }
        }

        while (j < n)
        {
            nums[j] = 0;
            j++;
        }
    }
};