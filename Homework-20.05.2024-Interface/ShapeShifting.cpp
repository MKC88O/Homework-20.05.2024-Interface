#include "ShapeShifting.h"

    ShapeShifting::ShapeShifting() : ShapeShifting("Shape_Shifting") {}

    ShapeShifting::ShapeShifting(string nameAbility) {
        SetNameAbility(nameAbility);
    }

    ShapeShifting::~ShapeShifting() {}

    void ShapeShifting::SetNameAbility(string nameAbility) {
        this->nameAbility = nameAbility;
    }

    string ShapeShifting::GetNameAbility() const {
        return nameAbility;
    }
