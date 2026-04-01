class Solution {
public:

    string encode(vector<string>& strs) {
        string encmsg="";
        for(auto &s : strs){
            encmsg+=to_string(s.size())+"#"+s;
        }
        return encmsg;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i=0;
        while(i<s.size()){
            string wlen;
            while(s[i]!='#'){
                wlen+=s[i];
                i++;
            }
            int len=stoi(wlen);
            i++;
            string word;
            while(len--){
                word+=s[i];
                i++;
            }
            result.push_back(word);
        }
        return result;
    }
};
