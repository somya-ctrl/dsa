#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{1,0,1,0,1,1,0,0};
    int start=0;
    int end=v.size()-1;
    int i=0;
    while(i!=end){
        if(v[i]==0){
            swap(v[i],v[start]);
            i++;
            start++;

        }
        else{
            swap(v[i],v[end]);
            end--;
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"";
    }
    return 0;
}