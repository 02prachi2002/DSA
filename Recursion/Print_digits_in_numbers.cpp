#include<iostream>
#include<vector>
using namespace std;

// in this agar hum number ka refrence na bhejkar sirf number ki copy bhi bhete toh koi problem nahi thi 
//because number mai kuch change nahi ho raha hai 
//but it is a good pracise to send refrence as copy nahi banti hai usmai
void digits_to_numbers(int &number, vector<int> &varray){
    //basecase
    if(number  == 0){
        return;
    }
    //processing
    int digit = number % 10;
    number = number / 10;

    digits_to_numbers(number, varray);
    varray.push_back(digit);
}

int main(){
    int number = 4123;
    vector<int> varray;
    digits_to_numbers(number, varray);
    for(int i=0;i<varray.size();i++){
     cout<<varray[i]<<" ";
    }
    return 0;

}