//
// Created by rc-regalado on 07-25-22.
//

#ifndef OBJECTS_VARIETY_H
#define OBJECTS_VARIETY_H
#include <iostream>
#include <cstdint>
#include <string>
#include <vector>
using namespace std;

class variety {
    uint8_t id;
    string name;
    vector<float>* production;
    string key;

public:
    variety();
    variety(int len, string name, float _prod[]);

    string get_key() const;
    float at(int year);
    void set_production(int year, float production);

    static uint8_t count;
};

#endif //OBJECTS_VARIETY_H
