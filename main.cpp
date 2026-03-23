#include <iostream>
using namespace std;

#include "student.h"
int main(int argc, char* argv[]) {

  student a[(argc-1)/2];
  // Set age and set name for the first two ppl
  int i,age,u;
  string n;
   // 1. Ask for N names and N age using cin
for(i=0;i<(argc-1)/2;i++){
  a[i].set_name(argv[i*2+1]);
  a[i].set_age(atoi(argv[i*2+2]));
 }
  
 
  //2. Print name and age of all N ppl
//for(i=0;i<(argc-1)/2;i++){
//  a[i].print_info();
// }
  
//3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
int youngest = a[0].get_age();

for(int i = 0; i < (argc-1)/2; i++) {
    if (youngest > a[i].get_age()) {
        youngest = a[i].get_age();
    }
}
 // Print all info for the yougest person
cout<<"Youngest student"<<endl;
for(int i = 0; i < (argc-1)/2; i++) {
    if (youngest == a[i].get_age()) {
        a[i].print_info();
    }
}
  
  // Print all info for the yougest person
 
  
  //4. Change input from cin to argv

  
 return 0;

    
  }