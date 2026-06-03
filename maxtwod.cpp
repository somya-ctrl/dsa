#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int arr[3][3];
    int rows;
    int cols;
    cout<<"enter no of rows:"<<endl;
    cin>>rows;
    cout<<"enter no of col:"<<endl;
    cin>>cols;
    cout<<"enter the elements:";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    int max=INT16_MIN;
    for(int i=0;i<rows;i++){
        
        for(int j=0;j<cols;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }

    cout<<"max element"<<max;

}