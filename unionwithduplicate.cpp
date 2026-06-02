#include<iostream>
#include<vector>
using namespace std;

int main() {

    int arr[] = {1,2,3,4,5};
    int brr[] = {3,4,13};

    int sizeA = sizeof(arr) / sizeof(arr[0]);
    int sizeB = sizeof(brr) / sizeof(brr[0]);

    vector<int> v;

    for(int i = 0; i < sizeA; i++) {
        v.push_back(arr[i]);
    }

    for(int i = 0; i < sizeB; i++) {

        int element = brr[i];
        bool found = false;

        for(int j = 0; j < sizeA; j++) {

            if(element == arr[j]) {
                found = true;
                break;
            }
        }

        if(!found) {
            v.push_back(element);
        }
    }

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}