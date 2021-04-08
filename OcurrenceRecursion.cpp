#include <iostream>
using namespace std;



int firstOccurence(int arr[], int n, int i, int key){

    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }

    return firstOccurence(arr, n, i+1, key);
}

int lastOccurence(int arr[], int n, int i, int key){

    if(i==n){
        return -1;
    }
    int restArr = lastOccurence(arr, n, i+1, key);

    if(restArr!=-1){
        return restArr;
    }

    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,3,2,1,4,2};

    int key;
    cin>>key;

    cout<<firstOccurence(arr, 8, 0, key);
    cout<<lastOccurence(arr, 8, 0, key);

    return 0;
}