#include <bits/stdc++.h>
using namespace std;

//void -> doesnt return anything
//return
//paramaterised 
//non-parameterised 


/*

void printname(string name){  //parameter to be passed with datatype 
    cout << "Arnold" << name;
}
int main(){
    string name;
    cin >> name;
//functions by value and reference
    printname(name);
    return 0;
}




int sum(int a, int b){    //paramaterised non void function 
    return a + b;
}
int mainn(){
    int a;
    int b;
    cin >> a >> b;
    cout << sum(a,b);
}
  

//pass by value 
int dosomething(string s){     //copy is created , original value doesnt change
     s[0]='f';
     cout << s << endl;

}

int main(){
    string s;
    s = "Luck";
    dosomething(s);
    cout << s;
}
      */

//pass by reference
int dosomething(string &s){     //copy is not created, original value change
     s[0]='f';
     cout << s << endl;

}

int main(){ 
    string s;
    s = "Luck";
    dosomething(s);
    cout << s;
}

//arrays are always passed by reference no need of & sign 

