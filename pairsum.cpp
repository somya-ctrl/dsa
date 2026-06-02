#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v{10,30,40,50};
int sum=80;
for(int i=0;i<v.size();i++){
    int element = v[i];
    for(int j=i+1;j<v.size();j++){
        if(element +v[j]==sum){
        cout<<element<<","<< v[j];
    }
    }
   
}
 return 0;
}