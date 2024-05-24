#include "God.h"

    God::God() : God("God") {}

    God::God(string race) {
        SetRace(race);
    }

    God::~God() {}

    void God::SetRace(string race) {
        this->race = race;
    }

    string God::GetRace() const {
        return race;
    }
