///week06-1.cpp
///242. Valid Anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        ///判斷字串長度
        if(s.length()!=t.length())return false;
        int R[26]={};///Recycle分類字母
        for(int i=0;i<s.length();i++){
            char c=s[i]-'a';
            R[c]++;
        }
        for(int i=0;i<t.length();i++){
            char c=t[i]-'a';
            R[c]--;
            if(R[c]<0)return false;
        }
        return true;

        }

};
