#include<iostream>
using namespace std;

void targetoccurance(int arr[], int size, int target, int index){
 if(index >= size){
    return;
 }
  if(arr[index] == target){
    cout<< index<< " ";
  }
 
  
  targetoccurance(arr, size, target, index+1);
}

int main(){
    int arr[7] = {11,22,33,22,55,78,22};
    int target = 22;
    int size = 7;
    int index =0;
  targetoccurance(arr, size, target, index);

    return 0;
}