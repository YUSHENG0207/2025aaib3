///LeetCode 學習計畫
///28.Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        //用迴圈,將字的所有字母位置跑一次,找到指定字時,return結果
        int H = haystack.length(),N = needle.length();
            for(int i=0;i<=H-N;i++){
                    if(haystack.substr(i,N)==needle) return i;
                //從i開始,剪出N個字母
            }
            return -1;
    }
}
