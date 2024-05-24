#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Good abstract {
    string moralQualities;
public:
    Good();
    Good(string moralQualities);

    virtual~Good();

    void SetMoralQualities(string moralQualities);

    virtual string GetMoralQualities() const;
};

