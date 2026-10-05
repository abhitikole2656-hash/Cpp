#include<iostream>
#include<string>
using namespace std ;

class student 
{
private:
int roll_number;
string name;
float mark;
public:
void input()
{
cout<<"enter the roll_number: ";
cin>>roll_number;
cout<<"enter the name: "<<endl;
cin>>name;
cout<<"enter the mark: "<<endl;
cin>>mark;
}
void display()
{
cout<<"roll_number of student :"<<roll_number<<endl;
cout<<"name of student:"<<name<<endl;
cout<<"mark of student:"<<mark<<endl;
 }
};
int main()
{
student s;
s.input();
s.display();
}
