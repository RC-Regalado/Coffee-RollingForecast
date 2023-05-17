#include "maintenance.hpp"

namespace maintenance {
    pruning::pruning() : maintenance(type::PRUNING) {
        id = 0;
    }

    void pruning::apply(const sub_batch &vt) {
        // TODO
    }
}
