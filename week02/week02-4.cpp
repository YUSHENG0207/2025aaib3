//week02-4.cpp
//389. Find the Difference �䤣�P
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256]={};//���ˡA�j�A���O��l
        for(int i=0;i<s.length();i++){//�r�ꪺfor�j��
            char c =s[i];//���X
            A[c]++;//�A��^
        }
        for(int i=0;i<t.length();i++){
            char c =t[i];//���X
            A[c]--;//�������X
            if(A[c]<0) return c;//����
        }
        return 0;
    }

};
