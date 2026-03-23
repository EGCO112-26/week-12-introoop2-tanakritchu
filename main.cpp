#include <iostream>
using namespace std;

#include "student.h"
#define N 3
int main(int argc, char* argv[]) {
  student s1,s2;

//  s1.set_name("Amy"); s1.set_age(20);
//  s2.set_name("James");
//  s2.set_age(17);
//  s1.get_age() > s2.get_age() ? (s1.print_name(), cout << " is older") : (s2.print_name(), cout << " is older");



  student a[N];
  // Set age and set name for the first two ppl
  int i,age;
  string n;
   // 1. Ask for N names and N age using cin
    //  for(i = 0; i < N; i++){
    //     cout << "Enter name: ";
    //     cin >> n;
    //     cout << "Enter age: ";
    //     cin >> age;

    //     a[i].set_name(n);
    //     a[i].set_age(age);
    // }

  //2. Print name and age of all N ppl
  for(i = 0; i < N; i++){
        cout << "Name: " << a[i].get_name() << ", Age: " << a[i].get_age() << endl;
    }
  
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
  // Print all info for the yougest person
  int minAge = a[0].get_age();

for(i = 1; i < N; i++){
    if(a[i].get_age() < minAge){
        minAge = a[i].get_age();
    }
}

cout << "\nYoungest student(s):\n";
for(i = 0; i < N; i++){
    if(a[i].get_age() == minAge){
        a[i].print_name();
        cout << " " << a[i].get_age() << endl;
    }
}
 
  
  
  //4. Change input from cin to argv
  if(argc == 1 + 2*N){
        for(i = 0; i < N; i++){
            a[i].set_name(argv[1 + 2*i]);
            a[i].set_age(atoi(argv[2 + 2*i]));
        }

        for(i = 0; i < N; i++){
            a[i].print_name();
            cout << " " << a[i].get_age() << endl;
        }
    }

    return 0;
}
  


