#include <iostream>
using namespace std;

int fe(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;   
    }
    return -1;          
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int key = 45;

    int index = fe(arr, n, key);

    if(index != -1)
        cout << index;
    else{
        cout<<(key*2)<<endl;
    }
        

    return 0;
}