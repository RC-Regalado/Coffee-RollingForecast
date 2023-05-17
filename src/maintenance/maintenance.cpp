#include <cstdint>
#include <maintenance.hpp>

namespace maintenance {
    maintenance::maintenance(type _t) : _type(_t) {}

    bool maintenance::fire_up(uint16_t year){
        return this->year == year;
    }

    bool maintenance::is_triggered() {
        return triggered;
    }
}
