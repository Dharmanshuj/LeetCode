class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, int> h;
        for(int i=0; i<heights.size(); i++) {
            h[heights[i]] = i;
        }
        sort(heights.begin(), heights.end(), greater<int>());
        vector<string> result;
        for(auto i : heights) {
            result.push_back(names[h[i]]);
        }
        return result;
    }
};
