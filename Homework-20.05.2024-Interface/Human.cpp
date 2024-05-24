#include "Human.h"

    Human::Human() : Human("Human") {}

    Human::Human(string race) {
        SetRace(race);
    }

    Human::~Human() {}

    void Human::SetRace(string race) {
        this->race = race;
    }

    string Human::GetRace() const {
        return race;
    }
