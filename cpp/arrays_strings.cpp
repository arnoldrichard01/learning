#include <bits/stdc++.h>
using namespace std;
int main(){
    /* 
    //array: only similar datatype , consecutive memory address
    //1d array 
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] ;
    arr[0] += 2 ;  //manipulating array elements
    cout << arr[0]; */

    //2d arrays 
    //int arr[3][5];  //3 is row , 5 is column

    //strings 
    string s= "Arnold";
    int len = s.size();
    s[len-1]= 's';
    cout << s[len-1];
    cout << s;



    return 0;
}