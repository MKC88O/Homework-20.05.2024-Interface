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
#include "SuperHero.h"
#include "Mistique.h"
#include "Wolverine.h"
#include "IronMan.h"
#include "Groot.h"
#include "Hulk.h"
#include "CaptainAmerica.h"
#include "Thor.h"
#include "Superman.h"

using namespace std;

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



