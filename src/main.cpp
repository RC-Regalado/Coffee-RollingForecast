#include <iostream>
#include <string>
#include <fstream>
#include <map>

using namespace std;

#include "objects/farm.hpp"

#define START 2022


void add_tablon(map<string, farm> &_map, const string &key, const batch &t, uint8_t year) {
    if (_map.find(key) == _map.end())
        _map[key] = farm(key);

    _map[key].add(2022, t);
}


int main() {
    // Primaria beneficio de cafe

    /*
    *  Plantas resiembra 2019
    *  Plantas resiembra 2020
    *  Plantas resiembra 2021
    *  Plantas resiembra 2022
    *  Plantas resiembra 2023
    *  Plantas resiembra 2024
    *  Plantas resiembra 2025
    *  Plantas resiembra 2026
    */

    /*
        * farm
        * batch
        * --
        *  Area 22/23
        *  Plantas en Cosecha 22 /23 Resiembra Año 2020
        *  Plantas en Cosecha 22/23 Resiembra Año 2019
        *  Variedad Pronostico  22/23
        *  Cafetos/Mz 22/23
        *  Clasificacion 22/23
        *  QQ Oro Uva / Mz Pronostico 22/23
        *  QQ Oro Uva Pronostico 22/23 CP
        *  QQ Oro Uva Pronostico 22/23 Resiembra
        *  Total QQ Oro Uva Pronostico 22/23
        *  --
        *  Total qq Acumulados
        *  Total Area
    */

    return 0;
}
