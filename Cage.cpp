#include<iostream>
#include<string>
#include "Cage.h"

using namespace std;

Cage::Cage()
{
    name = "";
    num = 0;
}
Cage::Cage(std::string newName, int newNumber){
    name = newName;
    num = newNumber;
}
std::string Cage::get_name(){
    return name;
}
int Cage::get_IDnum(){
    return num;
}

Cage::~Cage()
{

}