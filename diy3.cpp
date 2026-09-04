#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    string s, word;
    cout<<"enter a sentence: ";
    getline(cin,s);
    stringstream ss(s);
    string words[100];
    int count=0;
    while(ss>>word)
    {
        words[count]=word;
        count++;
    }
    cout<<"reversed sentence: ";
    for(int i=count-1;i>=0;i--)
    {
        cout<<words[i]<<"";
    
    }
}