#include<stdio.h>
#include<vector>
using namespace std;
bool ispossible( vector<int>& v, int m, int mid){
   int painters = 1;
   int boardsum = 0;
   for(int i=0;i<v.size();i++){
    if(v[i] > mid)
        return false;
    if(boardsum + v[i] <= mid){
        boardsum += v[i];
    }
    else{
        painters++;
        boardsum = v[i];
    }
   }
   return painters <= m;
}
int main(){
    vector<int> v{10,20,30,40};
    int s=0;
    int sum=0;
    int m=2;
    for(int i=0;i<v.size();i++){
        sum+=v[i];

    }
    int e=sum;
    int ans=e;
    int mid = s +(e-s)/2;
    while(s<=e){
        if(ispossible(v,m,mid)){
            ans=mid;
            e=mid-1;
           
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    printf("%d\n", ans);
    return 0;
}