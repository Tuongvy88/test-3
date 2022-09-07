#include "Cage.h"


Cage :: Cage(){
    id = 0;
    occupant = "";
}
 
Cage :: Cage(int newNumber, std::string newName){
    id = newNumber;
    occupant = newName;
}

std::string Cage ::  get_name(){
    return occupant;
}

int Cage :: get_ID_number(){
    return id;
}

Cage :: ~Cage(){
    
}