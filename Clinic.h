#ifndef CLINIC_H
#define CLINIC_H

#include "Cage.h"
#include <iostream>

class Clinic
{
    public:
        Clinic(); 
        Clinic(int max_size, std::string name); 
        int get_number_of_cages();
        std::string get_name();               
        Cage* get_cages();       
        
        bool add_cage(Cage new_cage);
        ~Clinic(); 
    private:
        int numCages;
        int max_size;
        std::string name;
        Cage* cages;
};

#endif 