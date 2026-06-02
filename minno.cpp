#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,41,5,67,8};
    int size=5;
    int min=INT8_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"max no in array"<<endl<<min;
    return 0;
}