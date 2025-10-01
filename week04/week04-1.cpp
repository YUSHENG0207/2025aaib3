///week04-1.cpp
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    cout<< "沒有初始化的a長: "<<a.size()<<endl;
    a.push_back(99);
    cout<<"經過.push_back()後a長變: "<<a.size()<<endl;
    vector<int> b(3);
    cout<< "b的長: "<<b.size()<<endl;
    b.push_back(99);
    for(int i=0;i<b.size();i++)cout<<b[i]<<' ';
    cout<<"經過.push_back()後b長變: "<<b.size()<<endl;
    vector<int> c(3,88);
    for(int i=0;i<c.size();i++)cout<<c[i]<<' ';
    cout<<"初始化(3,88)"<<endl;
    }
