#include <iostream>
using namespace std;

class Student{
    private:
        int age;
        int percent;
    public:
        int name;
        string gender;
        string subject;
        int marks;


    //this is the default constructor which is called when there is no other constructor in the class
    //compiler has inbuilt default constructor also which is called when we do not define any of the constructor

    Student(){
        cout<<"this is a default constructor"<<endl;
    }

};


int main(){
    Student s1;
    s1.gender = "female";//now as we have defined female to the gender it will print female in output
    cout<<s1.gender<<endl;//nothing will be shown to us
    //as we have not defined anything so the garbage value will be shown as output
    cout<<s1.marks<<endl; //4201147

    return 0;
}