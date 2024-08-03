#include<iostream>
using namespace std;

int searchinarray(int arr[], int size, int target, int index){
    if(index >= size){
        return -1;
    }

    if(arr[index] == target){
        return target;
    }

    int ans = searchinarray(arr, size, target, index+1);
}

int main(){
    int arr[7] = {11,22,33,44,55,78,98};
    int target = 22;
    int size = 7;
    int index =0;
    int ans = searchinarray(arr, size, target, index);
    cout<<ans<<" ";
    if(ans == -1){
        cout<<"target not found";
    }
    else{
        cout<<"target found ";
    }
    return 0;
}