#include<iostream>
#include "student.cpp"
using namespace std;
int main()
{
    //create object statically 

    student s1;
    student s2;
    student s3,s4,s5;

    s1.age=24;
    s1.rollno=101;
    cout<<s1.age<<endl;
    cout<<s1.rollno<<endl;


    //creates object dynamically 
    student *s6=new student;
    (*s6).age=23;
    (*s6).rollno=101;

    //or
    s6->age=23;
    s6->rollno=101;
     cout<<s6->age<<endl;
    cout<<s6->rollno<<endl;



}