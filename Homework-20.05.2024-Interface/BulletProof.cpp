#include "BulletProof.h"

    BulletProof::BulletProof() : BulletProof("Bulletproof") {}

    BulletProof::BulletProof(string nameAbility) {
        SetNameAbility(nameAbility);
    }

    BulletProof::~BulletProof() {}

    void BulletProof::SetNameAbility(string nameAbility) {
        this->nameAbility = nameAbility;
    }

    string BulletProof::GetNameAbility() const {
        return nameAbility;
    }
