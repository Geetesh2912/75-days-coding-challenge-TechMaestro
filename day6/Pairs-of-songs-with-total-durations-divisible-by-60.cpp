//author: Geetesh Mandaogade
//question link: https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/
//submission link: https://leetcode.com/submissions/detail/683593744/

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int map[60] = {};
        int result = 0;
        for(auto x:time){
            int t = x % 60;
            int y = (60 - t)%60;
            result += map[y];
            map[t]++;
        }
        return result;
    }
};