#include<iostream>
using namespace std;

int counting(int num){
      if (num == 0){
        return 0;
    }
    int ans = counting(num - 1);
    cout<<num<<" ";
    return ans;
   
}

int main(){
    int num ;
    cout<<" enter thr text :";
    cin>>num;
    int finalans = counting(num);
    cout<<finalans;

    return 0;
}