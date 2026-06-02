#include<iostream>
#include<climits>
using namespace std;
int getmax(int arr[],int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int size){
    int min = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int arr[6];
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    cout << getmax(arr,6);
    cout<< getmin(arr,6);
    return 0;
}   