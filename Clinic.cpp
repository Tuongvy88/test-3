#include "Clinic.h"


Clinic :: Clinic(){
    max_size = 0;
    numCages = 0;
    name = "";
    cages = new Cage();
}

Clinic::Clinic(int new_max_size, std::string name){
    max_size = new_max_size;
    this->name = name;
    cages = new Cage[new_max_size];
    numCages = 0;
}
 
std::string Clinic::get_name(){
    return name;
}
int Clinic::get_number_of_cages(){
    return numCages;
}

Cage* Clinic::get_cages(){
    return cages;
}     

bool Clinic::add_cage(Cage new_cage){
    if(numCages <= max_size){
        cages[numCages] = new_cage;
        numCages+=1;
        return true;
    }
    return false;
}

Clinic :: ~Clinic(){
} 