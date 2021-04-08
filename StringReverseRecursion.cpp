//Reverse the string using recursion

#include<iostream>
using namespace std;

void reverseString(string s){
    if(s.length() == 0){
        return;
    }

    string rest = s.substr(1);//substr is used to refer the string from index 1
    cout<<s[0];//palash
    reverseString(rest);
    cout<<s[0];//hsalap

}

int main(){

    string s = "palash";

    reverseString(s);
    cout<<endl;
    return 0;
}