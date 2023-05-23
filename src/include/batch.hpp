//
// Created by rc-regalado on 07-25-22.
//

#ifndef OBJECTS_TABLON_H
#define OBJECTS_TABLON_H
#include <iostream>
#include <cstdint>
#include <string>
#include <map>

using namespace std;
#include "variety.hpp"
#include "maintenance.hpp"

class sub_batch {
    uint8_t id;
    string key;
    variety var;

    int poblation;
    string maintenance;
    map<string, float> vtable;

public:
    sub_batch(string key, variety var, int poblation);
    void add_maintenance(maintenance::maintenance* _m, int year);
    void set_variety(const variety& v, float _area) ;
    variety get_variety() const;

    float calc_production(int year);
};

class batch {
    uint8_t id;
    string key;
    float area;
    string name;
    map<string, sub_batch> vtable;

public:
    static uint8_t count;
    batch();
    batch(string key);
    batch(string key, string name, float area);

    string get_name() const;

    void set_area(float _area);
    void maintenance_to(const string& key, maintenance::maintenance* _m);

    float get_area();
    string get_key();
};



#endif //OBJECTS_TABLON_H
