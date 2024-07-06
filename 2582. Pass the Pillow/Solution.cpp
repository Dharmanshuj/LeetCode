class Solution {
public:
    int passThePillow(int n, int time) {
        int q = time / (n-1);
        return q%2 == 0 ? time-q*(n-1)+1 : n-time+q*(n-1);
    }
};
