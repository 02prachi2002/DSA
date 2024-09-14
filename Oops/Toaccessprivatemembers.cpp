#include <iostream>
using namespace std;

class Student{
    private:
        int age;
        int percent;
    public:
        string name;
        int marks;
// we can access the private members using getter and setter function

// getter function is used for output display
    int getterage(){
        return age;
    }
// setter is used for setting the new value to the variable
    void setterage(int _age){
        age = _age;
    }

};


int main(){
    Student s1;
    s1.setterage(15);
   cout<< "the age if the person is "<<s1.getterage();
    return 0;
}