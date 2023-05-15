//
// Created by rc-regalado on 07-25-22.
//

#include "variety.hpp"

uint8_t variety::count = 0;

bool variety::operator==(const variety &rhs) const {
    return name == rhs.name &&
           average == rhs.average;
}

bool variety::operator!=(const variety &rhs) const {
    return !(rhs == *this);
}

bool variety::operator<(const variety &rhs) const {
    if (id < rhs.id)
        return true;
    if (rhs.id < id)
        return false;
    if (name < rhs.name)
        return true;
    if (rhs.name < name)
        return false;
    return average < rhs.average;
}

bool variety::operator>(const variety &rhs) const {
    return rhs < *this;
}

bool variety::operator<=(const variety &rhs) const {
    return !(rhs < *this);
}

bool variety::operator>=(const variety &rhs) const {
    return !(*this < rhs);
}
