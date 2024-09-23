#include<iostream>
#include<string>
using namespace std;

void subsequence(string str, string output , int index){
    if(index >= str.length()){
        cout<<"->"<<output<<endl;
        return ;
    }
    int ch = str[index];
    output.push_back(ch);
    subsequence(str, output, index+1);

    output.pop_back();
    subsequence(str, output, index+1);
}

int main(){
string str = "prachi";
string output = " ";
int index = 0;
subsequence(str, output, index);
    return 0;
}