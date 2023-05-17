//
// Created by rc-regalado on 07-25-22.
//

#ifndef OBJECTS_VARIETY_H
#define OBJECTS_VARIETY_H
#include <iostream>
#include <cstdint>
#include <string>

using namespace std;

class variety {
    uint8_t id;
    string name;
    float average;
    string key;

public:
    variety() {
        id = count++;
        name = "no set";
        average = 0.0f;
    }

    explicit variety(string name) {
        id = count++;
        this->name = std::move(name);
        average = 0.0f;
    }

    string get_key() const {
        return key;
    }

    static uint8_t count;
};

#endif //OBJECTS_VARIETY_H
