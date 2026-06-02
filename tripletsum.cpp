#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{10,20,30,40,50};
    int sum=80;
    for(int i=0;i<v.size();i++){
    int element = v[i];
    for(int j=i+1;j<v.size();j++){
        int element2=v[j];
        for(int k=j+1;k<v.size();k++){
             if(element + element2 + v[k] == sum){
        cout<<element<<","<< element2 <<","<< v[k] <<endl;
        }
       
    }
    }
   
}
}