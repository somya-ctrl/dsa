#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main(){
    string s;
    cout<<"enter the string";
    cin>>s;
    int n=s.length();
    int j=n-1;
    int i=0;
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s;

}