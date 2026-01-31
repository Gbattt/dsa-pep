#include<iostream>
using namespace std;

void BubbleSort(vector<int>arr){
    int n =arr.size();
    for(int i =0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printvector(const vector<int>& arr){
    for(int num:arr){
        cout<<" "<<num;
    }
}
int main(){
    vector<int>arr={1,3,2,7,3,9};
    BubbleSort(arr);
    printvector(arr);

}