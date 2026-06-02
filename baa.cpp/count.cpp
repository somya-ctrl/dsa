#include<iostream>
using namespace std;
int main(){
    int arr[] ={0,1,0,1,1,1,1,0};
    int size = 8;
    int count1=0;
    int count2=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count1+=1;
        }
        else if(arr[i]==1){
            count2+=1;
        }
    }
    cout<<"no of zeroes"<<count1<<endl;
    cout<<"no of ones"<<count2;
    return 0;
}