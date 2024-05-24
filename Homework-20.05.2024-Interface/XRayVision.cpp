#include "XRayVision.h"

    XRayVision::XRayVision() : XRayVision("X-Ray_Vision") {}

    XRayVision::XRayVision(string nameAbility) {
        SetNameAbility(nameAbility);
    }

    XRayVision::~XRayVision() {}

    void XRayVision::SetNameAbility(string nameAbility) {
        this->nameAbility = nameAbility;
    }

    string XRayVision::GetNameAbility() const {
        return nameAbility;
    }
