class Solution {
public:
    int longestConsecutive(vector<int>& nums) {


        unordered_set<int> s(nums.begin(), nums.end());

        int longest = 0;
        for(auto &n: s){

            // Have to check if there is a number in the set that is smaller than n, because 
            // if there is, then n is not the start of a sequence. Optimization.
            if(!s.count(n-1)){
                int length = 1;
                while(s.count(n+length))
                    ++length;

                longest = max(longest, length);
            }
        }
        return longest;
    }
};