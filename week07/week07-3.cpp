///weeek07-3.cpp
///682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;//Part04:���Ʃ��}�Ca��
        for(string op : operations){//Part01:C++�i���j��
            ///cout << "NOW" << op << "\n";//Part02:�ݥL�O��
            if(op[0]=='C'){//�M���̫�@��
                a.pop_back();
            }else if (op[0]=='D'){//�̷|�@��u�ܨ⭿�v�A�u�[��᭱�v
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
