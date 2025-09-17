//week02-4.cpp
//389. Find the Difference 找不同
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256]={};//分裝，大括號是桶子
        for(int i=0;i<s.length();i++){//字串的for迴圈
            char c =s[i];//取出
            A[c]++;//再放回
        }
        for(int i=0;i<t.length();i++){
            char c =t[i];//取出
            A[c]--;//全部拿出
            if(A[c]<0) return c;//拿完
        }
        return 0;
    }

};
