#include<iostream>
#include<string>
#ifndef CAGE_H
#define CAGE_H
using namespace std;

class Cage
{
    private:
    std::string name;
    int num;
public:
    Cage();
    Cage(std::string newName, int newNumber); 
    std::string get_name();                   
    int get_IDnum();                         
    ~Cage();
};

#endif