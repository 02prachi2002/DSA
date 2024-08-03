// To find the  last occurance of the charachter in the given string
#include<iostream>
#include<string.h>
using namespace std;

void lastoccuranceLR(string str, char target, int i, int &ans){
    if(i>=str.size()){
        return ;
    }
    if(str[i] == target){
        ans = i;
    }
    lastoccuranceLR(str, target, i+1, ans);
}

int main (){
cout<<"enter the string: ";
string str;
char target;
int ans = 0;
cin>>str;
cout<<"enter the target string: ";
cin>>target;
lastoccuranceLR(str, target,0,ans );
cout<< ans<<endl;
    return 0;
}