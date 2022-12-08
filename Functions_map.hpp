//
//  Functions_map.hpp
//  Last_ex
//
//  Created by VolkSeriy on 09.12.2022.
//

#ifndef Functions_map_hpp
#define Functions_map_hpp

#include <cstdio>
#include <map>
#include <string>
#include <iomanip>
#include <chrono>
#include <functional>
#include <iostream>

#define ITER_QUANTITY 100000;
// standart insert operation
std::size_t map_insert() {
    std::map<int, std::string> map;
    uint tmp = ITER_QUANTITY;
    for (int i = 0; i < tmp; ++i) {
        map.insert({i, "BOBOBO" + std::to_string(i)});
    }
    return map.size();
}

// inserting to the end
std::size_t map_emplace_hint() {
    std::map<int, std::string> map;
    auto it = map.begin();
    uint tmp = ITER_QUANTITY;
    for (int i = 0; i < tmp; ++i) {
        map.emplace_hint(it, i, "BOBOBO" + std::to_string(i));
        it = map.end();
    }
    return map.size();
}

// inserting to the begin
std::size_t map_emplace_hint_begin() {
    std::map<int, std::string> map;
    auto it = map.begin();
    uint tmp = ITER_QUANTITY;
    for (int i = 0; i < tmp; ++i) {
        map.emplace_hint(it, i, "BOBOBO" + std::to_string(i));
        it = map.begin();
    }
    return map.size();
}

// inserting to the random pos
std::size_t map_emplace_hint_middle() {
    std::map<int, std::string> map;
    map.insert({0, "BOBOBO"});
    auto it = map.begin();
    uint tmp = ITER_QUANTITY;
    uint pos;
    for (int i = 1; i < tmp; ++i) {
        map.emplace_hint(it, i, "BOBOBO" + std::to_string(i));
        if (i%2 == 0)
            it++;
    }
    return map.size();
}
 

#endif /* Functions_map_hpp */
