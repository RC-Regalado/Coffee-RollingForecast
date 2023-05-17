//
// Created by rc-regalado on 07-25-22.
//

#include <batch.hpp>
#include <variety.hpp>

#include <string>

uint8_t batch::count = 0;

// Batch {{{
batch::batch() = default;

batch::batch(string name) {
  id = count++;
  this->name = std::move(name);
  area = 0.0f;
}

string batch::get_name() const { return name; }

void batch::set_area(float _area) { this->area = _area; }


string batch::get_key(){
  return key;
}
// }}}

// SubBatch {{{
sub_batch::sub_batch(string key, variety var, int poblation) {
  this->key = key;
  this->var = var;
  this->poblation = poblation;
}

void sub_batch::add_maintenance(maintenance::maintenance* _m, int year){
  
}

void sub_batch::set_variety(const variety &v, float _area) {
  this->vtable[v.get_key()] = _area;
}

variety sub_batch::get_variety() const {
  return var;
}
// }}}
