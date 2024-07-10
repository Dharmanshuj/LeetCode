class Solution {
public:
    int minOperations(vector<string>& logs) {
        int position = 0;
        for(auto i : logs) {
            if(i == "../") {
                if(position != 0)
                    position--;
            }
            else if(i == "./")
                continue;
            else
                position++;
        }
        return abs(position);
    }
};
