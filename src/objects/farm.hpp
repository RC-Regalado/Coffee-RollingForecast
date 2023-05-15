//
// Created by rc-regalado on 07-25-22.
//

#ifndef OBJECTS_FINCA_H
#define OBJECTS_FINCA_H
#include <iostream>
#include <cstdint>
#include <vector>
#include <list>
#include <map>
#include <string>

using namespace std;
#include "batch.hpp"
#define mt map<string, batch>

class farm {
    uint8_t id;
    float area;
    string name;

    map<uint8_t, mt> tablones;
public:
    farm(string name) : name(std::move(name)) {}

    farm() = default;

    bool operator==(const farm &rhs) const {
        return id == rhs.id &&
               name == rhs.name;
    }

    bool operator!=(const farm &rhs) const {
        return !(rhs == *this);
    }

    void add(int year, const batch &t) {
        auto tyear = &tablones[year];
        if (tyear->find(t.get_name()) != tyear->end()){
//            (*tyear)[t.get_name()].set_variety(t.get_variety(), 2);
        }
    }

    [[nodiscard]] mt get(int year) const {
        return tablones.at(year);
    }
};

#endif //OBJECTS_FINCA_H
