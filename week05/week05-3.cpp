///week05-3.cpp
///CPE �o�����ĤG�DUVA 483 WORD Scramble
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string line;///Part1:Input
    while(getline(cin,line)){
        ///Ū�J�@��,�@��Ū,����ctrl-z
        stringstream ss(line);///Part3:��r��Ψ��_�y
        string word;///�Ψ��_�y
        ss >> word;///Part5:�ѨM�Ů���D
        reverse(word.begin(),word.end());
        cout << word ;///Part5:�ѨM�Ů���D
        while (ss >> word){
            reverse(word.begin(),word.end());///Part4:�ϹL��
            ///reverse,���ب禡
            cout <<" "<< word;
        }
        ///Part2;Output
        cout << endl;
        ///cout << line<< endl;
    }
}
