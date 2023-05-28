#ifndef __UTILS_HPP
#define __UTILS_HPP

#include <cstddef>
#include <cstdint>
#include <string>
extern int current_year;

inline std::string gen_code(const std::string& in, uint8_t pos=0, uint8_t st=0){
    std::string code;
    size_t len = in.length() - 1;
    uint8_t i = pos;
    uint8_t n = 0;

    bool flag = false;
    int xstep = 0;

    while (i <= len && code.length() < 3){
        if ((i == len || in[i] == ' ') && !flag) {
            flag = true;
            n = (i + 1) == len ? 1 : ++i;

            i = n;
        }

        if (flag) code += in[i];

        i++;
    }

    return code;
}

#endif
