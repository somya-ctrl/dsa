#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int i=0;
    int j=size-1;
       
    while(i<=j){
        cout << arr[i] << " ";

        if(i != j) {
            cout << arr[j] << " ";
        }

       i++;
       j--;
    }
    return 0;
}