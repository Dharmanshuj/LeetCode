class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr)
    {
        if(arr.size() < 3)
            return false;
        int i=0;
        while(i < arr.size()-2)
        {
            if(arr[i+2]%2 == 0)
                i = i+3;
            else if(arr[i+1]%2 == 0)
                i = i+2;
            else if(arr[i]%2 == 0)
                i = i+1;
            else
                return true; 
        }
        return false;
    }
};
