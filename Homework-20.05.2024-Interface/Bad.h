#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Bad abstract {
    string moralQualities;
public:
    Bad();
    Bad(string moralQualities);

    virtual~Bad();

    void SetMoralQualities(string moralQualities);

    virtual string GetMoralQualities() const;
};

