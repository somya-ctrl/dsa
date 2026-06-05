#include<iostream>
#include<string.h>
using namespace std;
int main (){
   char s[100];
   cout<<"enter the string";
   cin.getline(s, 100);
   int i=0;
   while(s[i]!='\0'){
      if(s[i]==' '){
         s[i]='@';
      }
      i++;
   }
   cout<<s;


}