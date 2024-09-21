#include<iostream>
using namespace std;

int binarySearch(int array[],int target, int start, int end){

    int mid = start +((end-start)/2);
    if(start > end){
        return -1;
    }
    if(array[mid] == target){
        return mid;
    }
    if(array[mid] > target){
        return binarySearch(array, target, start, mid-1);
    }
    else{
        return binarySearch(array, target, mid+1, end);
    }
}

int main(){
    int array[100] = {11,22,33,44,55,66,77,88,99};
    int size = 9;
    int target = 66;
    int index = 0;
    int start = 0;
    int end = size-1;
    int ans  = binarySearch(array, target, start, end);
    if(ans > 0){
        cout<<"target found at index : "<<ans<<endl;
    }
    else{
        cout<<"target not found"<<endl;
    }

    return 0;
}