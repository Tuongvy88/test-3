#include "Cage.h"
#include "Clinic.h"
#include <iostream>
using namespace std;

int main()
{
  
    Cage cage(100, "cages");
    
    std::cout << "Occupant name: " << cage.get_name() << std::endl;
    std::cout << "ID Number: " << cage.get_ID_number() << std::endl;
    
    
    Clinic clinic(3, "PS clinic");
    
    
    if(clinic.add_cage(cage)){
        cout << "Added cage1 to clinic" << endl;
    }else{
        cout << "Not added" << endl;
    }
    Cage cage2(200,"cage2");
    if(clinic.add_cage(cage2)){
        cout << "Added cage2 to clinic" << endl;
    }else{
        cout << "Not added" << endl;
    }
    if(clinic.add_cage(Cage(300,"cage3"))){
        cout << "Added cage3 to clinic" << endl;
    }else{
        cout << "Not added" << endl;
    }
    
    cout << "Number of cages: " << clinic.get_number_of_cages() << endl;
    
    
    
}