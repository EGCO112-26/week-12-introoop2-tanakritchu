#include <iostream>
using namespace std;

class student{
private:
  string name;
  int age;
public:
  void set_name(string="TAWAN");
  void print_name();
  void set_age(int );
  int get_age();
  void print_info();
};

void student::set_age(int a){
  age = a;
}

void student::set_name(string x){
  name = x;
}

void student::print_name(){
  cout<<"Name: "<<name<<endl;
}

int student::get_age(){
  return age;
}

void student::print_info(){
  print_name();
  cout<<"Age: "<<age<<endl;
}