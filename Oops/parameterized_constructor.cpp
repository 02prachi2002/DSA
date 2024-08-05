#include <iostream>
using namespace std;

class Student{
    private:
        int age;
        int percent;
    public:
        string name;
        string gender;
        string subject;
        int marks;

    //only take public variable
        //constructor 1
    Student( string _subject, int _marks){
        subject = _subject;
        marks = _marks;
    }
       //constructor 2
     Student(string _name, string _gender ){
        name = _name;
        gender = _gender;
    }
       //constructor 3
     Student(string _name, string _gender , string _subject, int _marks){
        name = _name;
        gender = _gender;
        subject = _subject;
        marks = _marks;
    }
    //constructor 4
    Student(string name, string gender , int marks){
        this->name = name;
        this->gender = gender;
        this->marks = marks;
    }
};


int main(){
    Student s1("Rahul", "female");
    //here the constructor 2 is called
    cout<<s1.gender<<endl;
    cout<<s1.name<<endl<<endl<<endl;

    Student s2("Maths", 89);
    //here the constructor 1 is called
    cout<<s2.subject<<endl;
    cout<<s2.marks<<endl<<endl<<endl;

    Student s3("Mohan", "male", "English", 39);
    //here the constructor 3 is called
    cout<<s3.subject<<endl;
    cout<<s3.marks<<endl;
    cout<<s3.gender<<endl;
    cout<<s3.name<<endl<<endl<<endl;

    Student s4("SitaMohan", "female", 99);
    //here the constructor 4 is called
    cout<<s4.marks<<endl;
    cout<<s4.gender<<endl;
    cout<<s4.name<<endl<<endl<<endl;

    //lets make object on heap
    //analogy -> int *arr = new int(5)
    Student *s5 = new Student("Prachi Varshney", "female", "Astronomy", 99);
    cout<<s5->subject<<endl;
    cout<<s5->marks<<endl;
    cout<<(*s5).gender<<endl;
    cout<<(*s5).name<<endl<<endl<<endl;
    //have to destroy it also from heap
    delete(s5);

    
    return 0;
}