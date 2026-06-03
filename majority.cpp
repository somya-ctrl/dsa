#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ans;
    int arr[] = {1,3,4,5,5,5,5,5,5,2,5};
    int size = 11;
    for(int i=0;i<size;i++){
       int count =0;
       
        for(int j = 0; j < size; j++) {

            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > size / 2) {

            cout << "Majority element is: " << arr[i];

            break;
        }
    }
    return 0;
}