///week02-2.cpp c++
///�n��c++���r�� �ϹL��
#include<iostream>
#include<string>///�r��~��
using namespace std;
int main()
{
    cout<<"�п�J�奻: ";
    string a,ans;///c++�r��
    cin>>a;///Ū�J�r��
    for(int i=a.length()-1;i>=0;i--){
        ans+=a[i];///
    }
    cout<<a<<ans;
}
