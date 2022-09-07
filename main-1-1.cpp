#include "Cage.cpp"
#include<iostream>
using namespace std;
int main()
{
//create an instance Cage class using parameterized constructor
Cage c1(1001,"jacky");
//display its details using getter methods
cout<<"ID: "<<c1.get_id_number()<<endl;
cout<<"Name: "<<c1.get_name()<<endl;
//create another instance Cage class using default constructor
Cage c2;
//set its fields using setter methods
c2.set_id_number(1003);
c2.set_name("Tom");
//display its details using getter methods
cout<<"ID: "<<c2.get_id_number()<<endl;
cout<<"Name: "<<c2.get_name()<<endl;
return 0;
} 