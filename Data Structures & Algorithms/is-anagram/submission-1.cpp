class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash1(256);
        vector<int> hash2(256);
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            hash1[s[i]]++;
            hash2[t[i]]++;
        }
        if(hash1==hash2) return true;
        else return false;
    }
};
