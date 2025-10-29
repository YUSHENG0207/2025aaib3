///week08-1.cpp
///3370. Smallest Number With All Set Bits
class Solution {
public:
    int smallestNumber(int n) {
        int N = 0;
        while(n>0){
            n=n/2;
            N++;
        }
        cout <<"現在發現n是(二進位的)幾位數"<< N<<"位數\n";
        int ans = 0;
        for (int i=0;i<N;i++){
            ans =ans*2+1;
        }
        return ans;
    }
};
