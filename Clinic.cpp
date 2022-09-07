#include "Clinic.h"
#include "Cage.h"
#include <iostream>
#include <string>

Clinic::Clinic()
{
    size = 0;
    index = 0;
    vy = NULL;
}
Clinic::Clinic(std::string name, int max_size)
{
    c_name = name;
    size = max_size;
    index = 0;
    vy = new Cage[size];
}
int Clinic::get_number_of_cages()
{
    return size;
}
std::string Clinic::get_name()
{
    return c_name;
}
Cage *Clinic::get_cages()
{
    return vy;
}
bool Clinic::add_cage(Cage new_cage)
{
    if (index < size)
    {
        vy[index] = new_cage;
        index++;
        return true;
    }
    return false;
}
Clinic::~Clinic()
{
}
