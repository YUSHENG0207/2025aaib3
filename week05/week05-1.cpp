///week05-1
///58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//把字串string 當iostream的cin來用
        string word;//字串
        //ss >> word;//像是cin>>word一樣，現在的ss可以用ss>>word
        //ss >> word;
        while(ss >> word){//一直讀

        }
        cout << word;

        return word.length();//最後,把長度送出
    }
};
