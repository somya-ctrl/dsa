#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string";
    cin>>s;
    int len=0;
    while(s[len]!='\0'){
       len++;
    }
 cout<<"length"<<len;
}
   