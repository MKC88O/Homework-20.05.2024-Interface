#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Ability abstract {
public:
    virtual string GetNameAbility() const = 0;
};

