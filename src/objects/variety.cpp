//
// Created by rc-regalado on 07-25-22.
//

#include "variety.hpp"
#include "utils.hpp"
#include <algorithm>
#include <iterator>

uint8_t variety::count = 0;

variety::variety() {
  id = count++;
  name = "Test Implementation";
}

variety::variety(int len, string name, float _prod[]) {
  id = count++;
  this->len = len;
  this->name = std::move(name);

  {
    this->production.reserve(production.size() + len );
    copy(&_prod[0], &_prod[len], back_inserter(this->production));
  }
}
variety::~variety(){
}

string variety::get_key() const { return key; }

float variety::at(int year){
  return this->production[current_year - year];
}
