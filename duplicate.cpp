#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,3,4,4,6,2,5,5};
    int size = 8;
    for(int i=0;i<size;i++){
       int count =0;
        for(int j =i+1; j<size; j++){
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count>=1){
            cout <<"duplicate element is: "<< arr[i];
            
        }
    }
    return 0;
}