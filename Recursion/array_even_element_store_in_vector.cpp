// problem 5 : array even element store in vector
#include<iostream>
#include<vector>
using namespace std;

void array_even_element_to_vector(int array[], int size, int index, vector<int> &varray){
    if(index > size){
        return;
    }
    if(array[index] % 2 == 0){
        varray.push_back(array[index]);
    }
    array_even_element_to_vector(array, size, index+1, varray);
}

int main(){
    int array[11] = {12,56,32,11,86,45,99,124,90,44};
    int size = 11;
    int index = 0;
    vector<int> varray;
    array_even_element_to_vector(array, size, index, varray);
    for(int i=0; i< varray.size();i++){
        cout<<varray[i]<<" ";

    }
    return 0;
}