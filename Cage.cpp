#include "Cage.h"
#include<iostream>
using namespace std;
//default constructor 
Cage::Cage()
{
id=0;
name=""; 
}
//parameterized constructor
Cage::Cage(int newNumber,string newName)
{
id=newNumber;
name=newName; 
}
//getter methods to return name and id
string Cage::get_name()
{
return name;
}
int Cage::get_id_number()
{
return id;
}
//setter methods to set name and id
void Cage::set_name(string newName)
{
name=newName;
}
void Cage::set_id_number(int newNumber)
{
id=newNumber;
}
//destructor 
Cage::~Cage()
{
cout<<"object destructed.."<<endl; 
} 