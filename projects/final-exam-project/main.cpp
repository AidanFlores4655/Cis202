/*
File: main.cpp
Description: creates a class that stores Mountain data that converts the elevation in feet to meters and prints it out.
Tue. June 6, 2023
Aidan Flores
aidanf4655@student.vvc.edu
*/
#include<iostream>
#include<iomanip>
#include "mountain.h"

using namespace std;


int main(){
  Mountain mountains[7];
  mountains[0] =  Mountain("Chimborazo", "Ecudador", 20549);
  mountains[1] =  Mountain("Matterhorn", "Switzeland", 14692);
  mountains[2] =  Mountain("Olympus", "Geece", 9573);
  mountains[3] =  Mountain("Everest", "Nepal", 290929);
  mountains[4] =  Mountain("Mount Marcy", "United States", 5344);
  mountains[5] =  Mountain("Mount Mitchell", "United States", 6684);
  mountains[6] =  Mountain("Zugpitze", "Switzerland", 9719);
  
  cout << setw(13) << "Mountain Name" << setw(18) << "Country" << setw(23) << "Elevation (ft)" << setw(22) << "Elevation (m)" << endl;
  cout << endl;
  
  for (Mountain mountain : mountains){
      cout << left << setw(13) << mountain.getName();
      cout << "\t \t" << setw(21) << mountain.getCountry() << mountain.getElevation() << " ft";
      cout << "\t \t" << setw(20) << mountain.toMeters(mountain.getElevation()) << endl;
    }
  
  int smallest = minElevation(mountains);
  cout << ("\nThe Shortest Mountain is: ");
  cout << mountains[smallest].getName();
  cout << ", " << mountains[smallest].getCountry();
  cout << ", with an elevation (ft) of: " << mountains[smallest].getElevation() << " ft" << endl;
  
}