///week03-1.cpp
///c++ 陣列 vector<int>
#include<iostream>
#include<vector>
using namespace std;
int main()
{

    cout<<"請輸入4個數: ";
    vector<int> a;///伸縮自如的陣列
    int now;
    for(int i=0;i<4;i++){
        cin>>now;
        a.push_back(now);
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
    cout <<"推入兩數\n";
    a.push_back(99);
    a.push_back(98);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
}
