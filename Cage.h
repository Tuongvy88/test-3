#ifndef CAGE_H
#define CAGE_H

#include<string>
using namespace std;

class Cage
{
//Private instance variables
private:
string occupantName;
int IDNumber;
public:
Cage();
Cage(int, string);
string get_name();
int get_id_number();
~Cage();
}; 