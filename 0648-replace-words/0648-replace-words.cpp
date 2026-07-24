class Solution {
public:
    string replaceWords(vector<string>& dictionary, string s) {
        stringstream ss(s);vector<string>words;
        string word;
        while (ss >> word)words.push_back(word);
        //sort(dictionary.begin(),dictionary.end());
        for(int i=0;i<words.size();i++){
            for(int j=0;j<dictionary.size();j++){
                string t=dictionary[j];
                if (words[i].size()>=t.size()&&words[i].substr(0,t.size())==t){
                    words[i]=t;
                    //break;
                }
            }
        }
        string ans="";
        for(auto x:words){
            ans+=x;
            ans+=" ";
        }
        ans.pop_back();
        return ans;
    }
};