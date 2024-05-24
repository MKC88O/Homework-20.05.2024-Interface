#include "SuperHero.h"

    const vector<Ability*>& SuperHero::GetAbilities()const {
        return abilities;
    }

    void SuperHero::SuperHeroAbility(Ability* ability) {
        abilities.push_back(ability);
    }

    void SuperHero::Print() const {

        cout << "Name: " << name << "\n";
        cout << "Ability: ";
        for (const auto& ability : abilities) {
            cout << ability->GetNameAbility() << " ";
        }
        cout << "\n";
        cout << "Moral Qualities: " << GetMoralQualities() << "\n";
        cout << "Race: " << GetRace();
        cout << "\n\n\n\n";
    }
