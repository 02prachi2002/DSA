#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> &arr)
{
for(int i=0;i<arr.size()-1; i++){
    int minnumber = i;
    for(int j=i+1;j<arr.size(); j++){
        if(arr[j]<arr[minnumber]){
            minnumber = j;
        }
    }
    swap(arr[minnumber], arr[i]);
}
}
int main(){
vector<int> arr{2,4,112,6,7,90};
selectionSort(arr);
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
    return 0;
}