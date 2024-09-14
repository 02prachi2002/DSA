#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &arr)
{
for(int i=0;i<arr.size()-1; i++){
    for(int j=0;j<arr.size()-i; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}
}
int main(){
vector<int> arr{2,4,112,6,7,90};
bubbleSort(arr);
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
    return 0;
}