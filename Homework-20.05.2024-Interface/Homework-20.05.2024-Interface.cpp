// Homework-20.05.2024-Interface.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include "Ability.h"
#include "Flight.h"
#include "SuperPower.h"
#include "SuperSpeed.h"
#include "XRayVision.h"
#include "BulletProof.h"
#include "ShapeShifting.h"
#include "Regeneration.h"
#include "TreeManagment.h"
#include "FireResistance.h"
#include "Freeze.h"
#include "Good.h"
#include "Bad.h"
#include "Human.h"
#include "Animal.h"
#include "God.h"

using namespace std;

class SuperHero abstract{
protected:
    string name;
    vector<Ability*> abilities;
public:
    virtual~SuperHero() = default;
    virtual string GetName() const = 0;
    virtual string GetRace() const = 0;
    virtual string GetMoralQualities() const = 0;

    const vector<Ability*>& GetAbilities()const {
        return abilities;
    }

    virtual void SuperHeroAbility(Ability* ability) {
        abilities.push_back(ability);
    }

    virtual void Print() const {
        
        cout << "Name: " <<name << "\n";
        cout << "Ability: ";
        for (const auto& ability : abilities) {
            cout << ability->GetNameAbility() << " ";
        }
        cout << "\n";
        cout << "Moral Qualities: " << GetMoralQualities() << "\n";
        cout << "Race: " << GetRace();
        cout << "\n\n\n\n";
    }
};

class Mystique : public SuperHero, public Human, public Bad {
public:
    Mystique() : Mystique("Mystique") {}

    Mystique(string name) {
        SetName(name);
        SuperHeroAbility(new ShapeShifting());
    }
    
    virtual~Mystique() {}

    void SetName(string name) {
        this->name = name;
    }

    string GetName() const {
        return name;
    }
    string GetRace() const {
        return Human::GetRace();
    }
    string GetMoralQualities() const {
        return Bad::GetMoralQualities();
    }
};

class Wolverine : public SuperHero, public Human, public Good {
public:
    Wolverine() : Wolverine("Wolverine") {}

    Wolverine(string name) {
        SetName(name);
        SuperHeroAbility(new SuperPower());
        SuperHeroAbility(new Regeneration());
    }

    virtual~Wolverine() {}

    void SetName(string name) {
        this->name = name;
    }

    string GetName() const {
        return name;
    }
    string GetRace() const {
        return Human::GetRace();
    }
    string GetMoralQualities() const {
        return Good::GetMoralQualities();
    }
};

class IronMan : public SuperHero, public Human, public Good, public Flight {
public:
    IronMan() : IronMan("Iron Man") {}

    IronMan(string name) {
        SetName(name);
        SuperHeroAbility(new Flight());
        SuperHeroAbility(new SuperPower());
    }

    virtual~IronMan() {}

    void SetName(string name) {
        this->name = name;
    }

    string GetName() const {
        return name;
    }
    string GetRace() const {
        return Human::GetRace();
    }
    string GetMoralQualities() const {
        return Good::GetMoralQualities();
    }
    void Fly() const{
        cout << "Iron Man flight\n";
    }
};

class Groot : public SuperHero, public Animal, public Good {
public:
    Groot() : Groot("Groot") {}

    Groot(string name) {
        SetName(name);
        SuperHeroAbility(new SuperPower());
        SuperHeroAbility(new FireResistance());
        SuperHeroAbility(new Regeneration());
        SuperHeroAbility(new TreeManagement());
    }

    virtual~Groot() {}

    void SetName(string name) {
        this->name = name;
    }

    string GetName() const {
        return name;
    }
    string GetRace() const {
        return Animal::GetRace();
    }
    string GetMoralQualities() const {
        return Good::GetMoralQualities();
    }
};


class Hulk : public SuperHero, public Human, public Good {
public:
    Hulk() : Hulk("Hulk") {}

    Hulk(string name) {
        SetName(name);
        SuperHeroAbility(new SuperPower());
    }

    virtual~Hulk() {}

    void SetName(string name) {
        this->name = name;
    }

    string GetName() const {
        return name;
    }
    string GetRace() const {
        return Human::GetRace();
    }
    string GetMoralQualities() const {
        return Good::GetMoralQualities();
    }
};

class CaptainAmerica : public SuperHero, public Human, public Good {
public:
    CaptainAmerica() : CaptainAmerica("Captain America") {}

    CaptainAmerica(string name) {
        SetName(name);
        SuperHeroAbility(new SuperPower());
        SuperHeroAbility(new BulletProof());
    }

    virtual~CaptainAmerica() {}

    void SetName(string name) {
        this->name = name;
    }

    string GetName() const {
        return name;
    }
    string GetRace() const {
        return Human::GetRace();
    }
    string GetMoralQualities() const {
        return Good::GetMoralQualities();
    }
};

class Thor : public SuperHero, public God, public Good, public Flight {
public:
    Thor() : Thor("Thor") {}

    Thor(string name) {
        SetName(name);
        SuperHeroAbility(new Flight());
        SuperHeroAbility(new SuperPower());
    }

    virtual~Thor() {}

    void SetName(string name) {
        this->name = name;
    }

    string GetName() const {
        return name;
    }
    string GetRace() const {
        return God::GetRace();
    }
    string GetMoralQualities() const {
        return Good::GetMoralQualities();
    }

    void Fly() const {
        cout << "Thor flight\n";
    }
};

class Superman : public SuperHero, public Human, public Good, public Flight {
public:
    Superman() : Superman("Superman") {}

    Superman(string name) {
        SetName(name);
        SuperHeroAbility(new SuperPower());
        SuperHeroAbility(new BulletProof());
        SuperHeroAbility(new XRayVision());
        SuperHeroAbility(new Freeze());
        SuperHeroAbility(new Flight());
    }

    virtual~Superman() {}

    void SetName(string name) {
        this->name = name;
    }

    string GetName() const {
        return name;
    }
    string GetRace() const {
        return Human::GetRace();
    }
    string GetMoralQualities() const {
        return Good::GetMoralQualities();
    }
    void Fly() const {
        cout << "Superman flight\n";
    }
};

int main() {
    vector<SuperHero*> heroes;
    Mystique mystique;
    Wolverine wolverine;
    IronMan ironMan;
    Groot groot;
    Hulk hulk;
    CaptainAmerica captainAmerica;
    Thor thor;
    Superman superman;

    heroes.push_back(&mystique);
    heroes.push_back(&wolverine);
    heroes.push_back(&ironMan);
    heroes.push_back(&groot);
    heroes.push_back(&hulk);
    heroes.push_back(&captainAmerica);
    heroes.push_back(&thor);
    heroes.push_back(&superman);

    for (auto hero : heroes) {
        hero->Print();
    }

    for (auto hero : heroes) {
        Flight* fly = dynamic_cast<Flight*>(hero);
        if (fly != nullptr) {
            fly->Fly();
        }
    }
}



