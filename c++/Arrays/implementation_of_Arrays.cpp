#include<iostream>
using namespace std;

void print (int arr[],int n){
    int i = 0;
    for( ;i<10 ;i++) {

        cout<<arr[i]<<" ";
    } if(i<10) cout<<endl;
}

void inputarr(int arr[] ,int n){
    for(int i = 0 ;i<10 ;i++) {
        cin>>arr[i];
    }
}



int main() {
    int arr[10];
    inputarr(arr,10);
    print(arr,10);

    return 0;
}