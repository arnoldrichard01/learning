#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    switch(n){
        case 1:
           cout << "monday";
           break;
        case 2:
           cout << "tuesday";
           break; //if not break will execute all the commands after satisying this case.
        case 3:
           cout << "wednesday";
           break;
        case 4:
           cout << "thursday";
           break;
        default:     //defaut statement in C
           cout << "invalid";
    }
    return 0;
}