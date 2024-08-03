#include<iostream>
using namespace std;

void printarray(int *arr, int size, int index){
   if(index >= size ){
    return ;
   }
   printarray(arr, size, index+1); //reverse printing of array
   cout<< arr[index]<<" ";
// printarray(arr, size, index+1); // straight printing of arrat
}

int main(){
    int arr[10] = {11, 22, 33,44,55,66,77,88,99};
    int size = 10;
    printarray(arr, 10, 0);
    return 0;
}