///week02-2b.cpp c++
///�n��c++���r�� �ϹL��
#include<iostream>
#include<string>///�r��~��
using namespace std;
int main()
{
    string a,ans;///c++�r��
    cin>>a;///Ū�J�r��
    for(int i=a.length()-1;i>=0;i--){
        ans+=a[i];
    }
    cout<<a<<'+'<<stoi(ans)<<'=';
    cout<<stoi(a)+stoi(ans)<<endl;
}
