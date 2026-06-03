#include<iostream>
#include<vector>
using namespace std;
void transpose(int arr[][3],int rows,int cols){
  for(int i=0;i<rows;i++){
        for(int j=i+1;j<cols;j++){
            swap(arr[i][j],arr[j][i]);
        }
  }
}
void printarray(int arr[][3],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
  }
}
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
    transpose(arr,rows,cols);
    printarray(arr,rows,cols);
    

}