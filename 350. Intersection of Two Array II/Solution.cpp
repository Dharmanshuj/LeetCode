class Solution
{
    bool binary(vector<int>& nums, int value, int start, int end)
    {
        if(start > end || nums.empty())
            return false;
        int mid = start + (end - start) / 2;
        if(nums[mid] == value)
        {
            nums.erase(nums.begin() + mid);
            return true;
        }
        else if(nums[mid] > value)
            return binary(nums, value, start, mid-1);
        else
            return binary(nums, value, mid+1, end);
    }
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        if(nums1.empty() || nums2.empty())
            return {};
        int n = nums1.size();
        vector<bool> v(n, false);
        vector<int> result;
        sort(nums1.begin(), nums1.end());
        for(auto i : nums2)
            if(binary(nums1, i, 0, nums1.size()-1))
                result.push_back(i);
        return result;    
    }
};
