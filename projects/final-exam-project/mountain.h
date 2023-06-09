#ifndef mountain_h
#define mountain_h

#include<iostream>
#include<iomanip>
using namespace std;

class Mountain{
  string name;
  string country;
  int elevation;

  public:

  Mountain();
  Mountain(string name, string country, int elevation);

  void setName(string name);
  void setCountry(string country);
  void setElevation(int elevation);
  void print() const;

  string getName();
  string getCountry();
  int getElevation();
  double toMeters(double elevationInFeets);

  
  
};

int minElevation(Mountain mountains[]);

#endif