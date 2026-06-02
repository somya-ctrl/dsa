#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> v;
   vector<int>arr{1,3,4,7,5};
   vector<int>brr{3,6,4,7}; 
   for(int i=0;i<arr.size();i++){
    int element =arr[i];
    for(int j=0;j<brr.size();j++){
        if(element == brr[j]){
            v.push_back(arr[i]);
        }

    }

   }
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   return 0;
}