#include<iostream>
#include<string.h>
using namespace std;
bool palindrome(char s[100],int n){
    int i=0;
    int j=n-1;
    while(i<=j){

    if(s[i]==s[j]){
    i++;
    j--;
}
else{
    return false;
}}
return true;
}
int main(){
    char s[100];
    cin.getline(s,100);
    int n;
    n=strlen(s);
    if(palindrome(s,n)){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

}