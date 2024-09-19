#include<iostream>
#include<vector>
using namespace std;

vector<int> targetoccurance(int arr[], int size, int target, int index){
    vector<int> ans;
 if(index >= size){
    return ans;
 }
  if(arr[index] == target){
   ans.push_back(index);
  }
 
  vector<int> finalans = targetoccurance(arr, size, target, index+1);
  for(int i=0;i<finalans.size(); i++){
    ans.push_back(i);
  }
}

int main(){
    int arr[7] = {11,22,33,22,55,78,22};
    int target = 22;
    int size = 7;
    int index =0;
  
  vector<int> v = targetoccurance(arr, size, target, index);
  for(int i=0;i< v.size();i++){
    v.push_back(i);
  }

    return 0;
}