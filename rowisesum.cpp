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
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum=sum+arr[i][j];
        }
         cout<<"sum is:"<<sum<<endl;
    }

   

}