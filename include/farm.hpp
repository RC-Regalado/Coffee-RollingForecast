//
// Created by rc-regalado on 07-25-22.
//

#ifndef OBJECTS_FARM_H
#define OBJECTS_FARM_H
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

    map<string, batch> batchs;
public:
    farm();
    explicit farm(string name);
    bool operator==(const farm & rhs) const;
    bool operator!=(const farm & rhs) const;

    void add(const batch &t);
    batch get(string key);
};

#endif
