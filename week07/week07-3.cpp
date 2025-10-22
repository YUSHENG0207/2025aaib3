///weeek07-3.cpp
///682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;//Part04:把資料放到陣列a裡
        for(string op : operations){//Part01:C++進階迴圈
            ///cout << "NOW" << op << "\n";//Part02:看他是誰
            if(op[0]=='C'){//清掉最後一位
                a.pop_back();
            }else if (op[0]=='D'){//最會一位「變兩倍」再「加到後面」
                a.push_back(a.back()*2);
            }else if(op[0]=='+'){
                int temp = a.back();
                a.pop_back();
                int temp2 = a.back();
                a.push_back(temp);
                a.push_back(temp+temp2);
            }else {
                a.push_back(stoi(op));
            }
        }
        int ans = 0;
        for(int now :a){
            ans += now;
        }
        return ans ;
    }
};
