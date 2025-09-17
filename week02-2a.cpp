///week02-2.cpp c++
///要用c++的字串 反過來
#include<iostream>
#include<string>///字串外掛
using namespace std;
int main()
{
    cout<<"請輸入文本: ";
    string a,ans;///c++字串
    cin>>a;///讀入字串
    for(int i=a.length()-1;i>=0;i--){
        ans+=a[i];///
    }
    cout<<a<<ans;
}
