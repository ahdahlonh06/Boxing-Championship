
#include "Fighter.h"
#include <iostream>

Fighter::Fighter(const std::string& fighterName) {
    name = fighterName;
    health = 100;
    stamina = 100;
}

std::string Fighter::getName() const {
    return name;
}

int Fighter::getHealth() const {
    return health;
}

int Fighter::getStamina() const {
    return stamina;
}

void Fighter::takeDamage(int damage) {
    if (damage > 0) {
        health -= damage;

        if (health < 0) {
            health = 0;
        }
    }
}

bool Fighter::useStamina(int amount) {
    if (amount < 0 || amount > stamina) {
        return false;
    }

    stamina -= amount;
    return true;
}

void Fighter::recoverStamina(int amount) {
    if (amount > 0) {
        stamina += amount;

        if (stamina > 100) {
            stamina = 100;
        }
    }
}

void Fighter::displayStats() const {
    std::cout << "Fighter: " << name << "\n";
    std::cout << "Health: " << health << "/100\n";
    std::cout << "Stamina: " << stamina << "/100\n";
}
