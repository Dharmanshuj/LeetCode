class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double wait = 0, time = 0;
        for(auto pair : customers) {
            if(time > pair[0])
                wait += time - pair[0];
            else
                time = pair[0];
            wait += pair[1];
            time += pair[1];
        }
        double result = wait / customers.size();
        return result;
    }
};
