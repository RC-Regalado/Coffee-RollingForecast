#ifndef __UTILS_HPP
#define __UTILS_HPP

#include <algorithm>
#include <cctype>
#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <string>
extern int current_year;

template<typename TMap>
inline std::string gen_code(const std::string& in, const TMap& keys, uint8_t pos=0, uint8_t st=0){
    if (in.empty())
        throw std::runtime_error("The phrase cannot be empty.");

    std::string code;
    size_t len = in.length() - 1;
    uint8_t i = pos + st;
    uint8_t n = 0;

    bool flag = false;

    code += in[0];

    while (i <= len && code.length() < 3){
        if ((i == len || in[i] == ' ') && !flag) {
            flag = true;
            i = n = (i == len ? 1 : ++i);
        }

        if (flag) code += in[i];

        i++;
    }

    std::transform(code.begin(), code.end(), code.begin(), ::toupper);

    if (keys.contains(code)){
        code = gen_code(in, keys, pos+1, st+1);
    }

    return code;
}

#endif
