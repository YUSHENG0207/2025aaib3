///LeetCode �ǲ߭p�e
///28.Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        //�ΰj��,�N�r���Ҧ��r����m�]�@��,�����w�r��,return���G
        int H = haystack.length(),N = needle.length();
            for(int i=0;i<=H-N;i++){
                    if(haystack.substr(i,N)==needle) return i;
                //�qi�}�l,�ťXN�Ӧr��
            }
            return -1;
    }
}
