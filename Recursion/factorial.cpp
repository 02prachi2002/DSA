#include<iostream>
using namespace std;

int factorial(int num ){
    if(num == 0){
        return 1;
    }
    if(num == 1){
        return 1;
    }
    int factans = num * factorial(num-1);
    return factans;

}

int main(){
    int num;
    cout<<"Enter the number for factorial :";
    cin>> num;
  
    int ans = factorial(num);
    cout<<ans<<endl;
    return 0;
}