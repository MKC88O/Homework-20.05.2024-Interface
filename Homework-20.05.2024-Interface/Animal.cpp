#include "Animal.h"

    Animal::Animal() : Animal("Animal") {}

    Animal::Animal(string race) {
        SetRace(race);
    }

    Animal::~Animal() {}

    void Animal::SetRace(string race) {
        this->race = race;
    }

    string Animal::GetRace() const {
        return race;
    }
