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
  this->name = std::move(name);
  production = new vector<float>();

}

string variety::get_key() const { return key; }

float variety::at(int year){
  return production->at(current_year - year);
}
