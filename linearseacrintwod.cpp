#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool linearsearch(int arr[3][3],int rows,int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
        
    }
    return false;

}
int main(){
    int arr[3][3];
    int rows;
    int cols;
    int key;
    cout<<"enter key:";
    cin>>key;
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
    
    if(linearsearch(arr, rows, cols, key)){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }

}