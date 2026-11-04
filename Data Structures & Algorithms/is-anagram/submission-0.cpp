class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr(26,0);
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            int k = int(s[i]) - 97;
            arr[k]++;
            int j = int(t[i]) -97;
            arr[j]--;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0){
                return false;
            }
        }
        return true;
    }
};
