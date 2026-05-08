#include<iostream>
#include<string>
using namespace std;

class Player{
public:
    string name;
    int age;
    void setName(string name ){
        name = n;
    }

};

class Cricketer : public Player{
public:
    int runs;
    void setruns(int r){
        runs=r;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
    }
};

class Footballer : public Player{
public:
    int goals;
    void setgoals(int g){

    }
};
