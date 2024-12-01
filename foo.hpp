#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{

    for (auto& person : people) {
        person.birthday();
    }

    std::vector<char> result;
   
    for (auto it = people.rbegin(); it != people.rend(); ++it) {
        if (it->isMonster()) {
            result.push_back('n');
        } else {
            result.push_back('y');
        }
    }

    return result;
}
