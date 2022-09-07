#include "Cage.h"
#include <iostream>
using namespace std;

int main()
{
    
    Cage cage("Vy", 35);
   
    std::cout << "Occupant name: " << cage.get_name() << std::endl;
    std::cout << "ID Number: " << cage.get_IDnum() << std::endl;
    return 0;
}
