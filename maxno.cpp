#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,41,5,67,8};
    int size=5;
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"max no in array"<<endl<<max;
    return 0;
}