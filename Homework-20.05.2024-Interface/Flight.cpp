#include "Flight.h"

    Flight::Flight() : Flight("Flight") {}

    Flight::Flight(string nameAbility) {
        SetNameAbility(nameAbility);
    }

    Flight::~Flight() {}

    void Flight::SetNameAbility(string nameAbility) {
        this->nameAbility = nameAbility;
    }

    string Flight::GetNameAbility() const {
        return nameAbility;
    }

    void Flight::Fly() const {};
