// problem 5 : array even element store in vector
#include<iostream>
#include<vector>
using namespace std;

void arraydouble(int array[], int size, int index){
   if(index > size){
    return;
   }
   array[index] = array[index]*2;
   arraydouble(array, size, index+1);
}

int main(){
    int array[11] = {12,56,32,11,86,45,99,124,90,44};
    int size = 11;
    int index = 0;
    arraydouble(array, size, index);
    for(int i =0;i< size;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}