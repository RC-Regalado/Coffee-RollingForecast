//
// Created by rc-regalado on 07-25-22.
//

#include "farm.hpp"

farm::farm(string name) : name(std::move(name)) {}

farm::farm() = default;

bool farm::operator==(const farm &rhs) const {
  return id == rhs.id && name == rhs.name;
}

bool farm::operator!=(const farm &rhs) const { return !(rhs == *this); }

void farm::add(const batch &t) {
}

batch farm::get(string key) { return batchs[key]; }
