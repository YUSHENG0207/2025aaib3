///week05-3.cpp
///CPE 這次的第二題UVA 483 WORD Scramble
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string line;///Part1:Input
    while(getline(cin,line)){
        ///讀入一行,一直讀,直到ctrl-z
        stringstream ss(line);///Part3:把字串用來斷句
        string word;///用來斷句
        ss >> word;///Part5:解決空格問題
        reverse(word.begin(),word.end());
        cout << word ;///Part5:解決空格問題
        while (ss >> word){
            reverse(word.begin(),word.end());///Part4:反過來
            ///reverse,內建函式
            cout <<" "<< word;
        }
        ///Part2;Output
        cout << endl;
        ///cout << line<< endl;
    }
}
