#ifndef CAGE_H
#define CAGE_H

#include <iostream>

class Cage
{
    public:
        Cage();
        Cage(int newNumber, std::string newName); 
        std::string get_name(); 
        int get_ID_number(); 
        ~Cage();
    private:
        int id;
        std::string occupant;
};

#endif 