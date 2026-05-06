#include<iostream>
using namespace std;
class student{
    public:
    //data members
    string name;
    int rollno;

    //member function
    void display(){
        cout<<"name "<<name<<endl;
        cout<<"rollno "<<rollno<<endl;
        }

};

int main(){
    
    student s1;
    s1.name="Akash";
    s1.rollno=333;
    s1.display();
    return 0;
}