#include<iostream>
using namespace std;

bool sorted_array(int *array, int size, int index){
    if(index>=size){
        return true;
    }
    
    if(array[index]>array[index-1]){
         bool nextans = sorted_array(array, size, index+1);
         return nextans;
    }
    else{
        return false;
    }
     
}

int main(){
    int array[100] = {11,10,34,23};
    int size = 5;
    int index = 0;
    bool ans = sorted_array(array, size, index);
    if(ans){
        cout<<"the array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
    return 0;
}