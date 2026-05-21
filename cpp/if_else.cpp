#include <bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin >> age ;
    if(age<18){
        cout <<"not eligible for job";

    }
    else if (age<=57){
        cout << "eligibile for job";
        if(age>55)                      //nested if-else
        cout <<", but early retirement";
    }
    else{
        cout<< "retirement time";
    }
    return 0;
}