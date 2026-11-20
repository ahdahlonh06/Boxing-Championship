
#pragma once
#include <string>

class Fighter {
private:
    std::string name;
    int health;
    int stamina;

public:

    virtual std::string getFighterType() const = 0;

    Fighter(const std::string& fighterName);
    virtual ~Fighter() = default;

    std::string getName() const;
    int getHealth() const;
    int getStamina() const;

    void takeDamage(int damage);
    bool useStamina(int amount);
    void recoverStamina(int amount);

    void displayStats() const;
};
