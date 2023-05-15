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


#define line() cout << endl;

class batch {
    uint8_t id;
    float area;
    string name;

    int poblacion;
    string mantenimiento;

    int poblacion_m;

    map<variety, float> vtable;

public:
    explicit batch(string name) {
        id = count++;
        this->name = std::move(name);
        area = 0.0f;

        poblacion = 0;
        poblacion_m = 0;
    }

    [[nodiscard]] string get_name() const {
        return name;
    }

    void set_variety(const variety& v, float _area) {
        this->vtable[v] = _area;
    }

    void print() {
        cout << "\t - " << get_name();
        cout << endl;
    }

    void set_area(float _area);
    void set_poblacion(int _pob);

    static uint8_t count;

    bool operator==(const batch &rhs) const;

    bool operator!=(const batch &rhs) const;

    batch();

    variety get_variety();

    float get_area();
};



#endif //OBJECTS_TABLON_H
