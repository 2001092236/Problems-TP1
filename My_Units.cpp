#ifndef MY_UNITS_CPP
#define MY_UNITS_CPP
#include "My_Units.h"

Attacker::Attacker(int x, int y) : Unit(x, y, 10,\
                    5, Constants::UnitType::Attacker) {}

int Attacker::get_unit_resource() const {
    return 0;
}


Safer::Safer(int x, int y): Unit(x, y, 15,\
                2, Constants::UnitType::Safer) {}
int Safer::get_unit_resource() const {
    return 0;
}



Producer::Producer(int x, int y): \
        Unit(x, y, 6, 0,\
            Constants::UnitType::Producer), produce(2) {}
int Producer::get_unit_resource() const {
    return produce;
}


int Producer::step() {
    Constants::Actions lst = last_action;
    last_action = Constants::Actions::No;
    if (lst == Constants::Actions::Attack)
        return 0;
    return get_unit_resource();
}
#endif