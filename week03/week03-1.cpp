///week03-1.cpp
///c++ �}�C vector<int>
#include<iostream>
#include<vector>
using namespace std;
int main()
{

    cout<<"�п�J4�Ӽ�: ";
    vector<int> a;///���Y�ۦp���}�C
    int now;
    for(int i=0;i<4;i++){
        cin>>now;
        a.push_back(now);
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
    cout <<"���J���\n";
    a.push_back(99);
    a.push_back(98);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
}
