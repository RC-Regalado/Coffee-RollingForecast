#ifndef __MAINTENANCE_HPP
#define __MAINTENANCE_HPP
#include <cstdint>

class sub_batch;

namespace maintenance {
    enum class type : int {
        PRUNING,
    };

    class maintenance {
    protected:
      uint8_t id;
      uint16_t year;

      bool triggered;
      type _type;

    public:
      maintenance(type _t);
      virtual void apply(const sub_batch& vt) = 0;

      bool fire_up(uint16_t year);
      bool is_triggered();
    };

    class reseeding : public maintenance {
        public:
            void apply(const sub_batch& vt);
    };

    class pruning : public maintenance {
        public:
            pruning();
            void apply(const sub_batch& vt);
    };
} // namespace maintenance

#endif
