#include "TreeManagment.h"

    TreeManagement::TreeManagement() : TreeManagement("Tree_Management") {}

    TreeManagement::TreeManagement(string nameAbility) {
        SetNameAbility(nameAbility);
    }

    TreeManagement::~TreeManagement() {}

    void TreeManagement::SetNameAbility(string nameAbility) {
        this->nameAbility = nameAbility;
    }

    string TreeManagement::GetNameAbility() const {
        return nameAbility;
    }
