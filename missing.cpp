#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    vector<int>arr{1,3,2,5};
    vector<int>v;
    int max=INT_MIN;
    sort(arr.begin(), arr.end());
    for(int i=0;i<arr.size();i++){
            if(arr[i]!=i+1){
                cout<<i+1;
            }
    }
}