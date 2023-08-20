class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // Maps the given string of coded number of chars to a vector of all strings with the same
        // composition
        unordered_map<string, vector<string>> m;
        for (int i = 0; i < strs.size(); i++){
            string key = getKey(strs[i]);
            m[key].push_back(strs[i]);
        }

        vector<vector<string>> result;
        
        //iterating through the hashmap
        //Using the second iterator to get the vector of strings
        for (auto it = m.begin(); it != m.end(); it++){
            result.push_back(it->second);
        }
        return result;


    }

private:
    // Returns a string of coded number of chars
    string getKey(string str){
        vector<int> count(26);

        for (int i=0; i < str.size(); i++){
            count[str[i]-'a']++;
        }

        string key = "";
        for(int i=0; i < count.size(); i++){
            key.append(to_string(count[i]) + '#');
        }
        return key;
    }

};