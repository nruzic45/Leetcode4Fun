class Solution1 {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        //Unordered map is implemented using hash table
        // where keys are hashed into indices of a 
        //hash table so that the insertion is always randomized.
        
        // Maps char to int, where int is the number of times
        // the char appears in the respective string, if the mapings are correct
        // the output is true.

        unordered_map<char,int> s_map;
        unordered_map<char,int> t_map;

        for(int i=0; i < s.size(); i++){
            s_map[s[i]]++;
            t_map[t[i]]++;
        }

        for(int i=0; i<s_map.size(); i++){
            if(s_map[i] != t_map[i]) return false;
        }

        return true;

    }
};

class Solution2 {
public:

    void sortString(string &s){
        sort(s.begin(), s.end());
    }

    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        sortString(s);
        sortString(t);
        return s == t;
    }



}