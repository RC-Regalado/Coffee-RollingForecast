//
// Created by rc-regalado on 07-25-22.
//

#include "batch.hpp"

uint8_t batch::count = 0;

bool batch::operator==(const batch &rhs) const {
    return area == rhs.area &&
           name == rhs.name &&
           poblacion == rhs.poblacion;
}

bool batch::operator!=(const batch &rhs) const {
    return !(rhs == *this);
}

void batch::set_area(float _area){
    this->area = _area;
}

void batch::set_poblacion(int _pob) {
    this->poblacion = _pob;
}

batch::batch() {

}

variety batch::get_variety() {
}
