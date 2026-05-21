#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10; //short numbers
    float b=9.4;  //decimal numbers 
    long x=1234567890; //long numbers
    long long y=1234567890123456789;  //very long numbers
    char c='A'; //character data type

    //string and getline 
    //string s;
    //cin>>s;
    //cout<<"value of s is: "<<s; //string beore the space is only picked up 

    string s1;
    getline(cin,s1); //takes whole line as input including spaces
    cout<<"value of s1 is :"<<s1;

    return 0;

}