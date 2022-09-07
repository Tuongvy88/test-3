#include <iostream>
#ifndef CLINIC_H
#define CLINIC_H
#include "Cage.h"
using namespace std;
class Clinic
{
private:
    std::string c_name;
    int size;
    Cage *vy;

public:
    int index;
    Clinic();
    Clinic(std::string name, int max_size);

    int get_number_of_cages();   // returns the number of cages currently in the the clinic

    std::string get_name(); // returns the clinics's name
    Cage *get_cages(); // returns the array of cages currently in the clinic

    bool add_cage(Cage new_cage);  // returns true and adds new cage to the clinic 
    ~Clinic();
};

#endif
