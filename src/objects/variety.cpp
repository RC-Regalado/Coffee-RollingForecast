//
// Created by rc-regalado on 07-25-22.
//

#include "variety.hpp"
#include "utils.hpp"

uint8_t variety::count = 0;

variety::variety() {
  id = count++;
  name = "no set";
  production = nullptr;
}

variety::variety(int len, string name, float _prod[]) {
  id = count++;
  this->len = len;
  this->name = std::move(name);
  this->production = new float[len];

  for (int i=0; i < len; i++)
    this->production[i] = _prod[i];
}
variety::~variety(){
  delete [] production;
}

string variety::get_key() const { return key; }

float variety::at(int year){
  return production[current_year - year];
}
