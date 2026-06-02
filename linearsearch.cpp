#include<iostream>
using namespace std;
int main (){
    int arr[]={1,2,3,4,5};
    int size = 5;
    int flag=0;
    int key;
    cout<<"Enter the element to find: ";
    cin>>key;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Element found!"<<endl;
    }
    else{
        cout<<"Element not found!"<<endl;
    }
    return 0;
}