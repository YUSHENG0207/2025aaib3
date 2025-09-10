///week01-4b.cpp¨Ï¥Îc++»y¨¥
#include<iostream>
using namespace std;

int main()
{
    int a,b,ans=0;
    cin >>a >>b;
    for(int i=a;i<=b;i++){
        if(i%3==0)ans+=i;
    }
    cout << ans;
}
