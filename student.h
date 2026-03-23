#include <iostream>
using namespace std;

class student{
private:

  string name;
  int age;

public:
  
void set_name(string n){
        name = n;
    }

    void set_age(int a){
        age = a;
    }

    string get_name(){
        return name;
    }

    int get_age(){
        return age;
    }

    // print name
    void print_name(){
        cout << name;
    }
};
