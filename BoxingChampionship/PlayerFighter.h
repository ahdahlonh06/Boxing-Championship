#pragma once
#include "Fighter.h"

class PlayerFighter : public Fighter {
public:
    PlayerFighter(const std::string& name)
        : Fighter(name) {
    }

    void showPlayerInfo() const {
        displayStats();
    }

    std::string getFighterType() const override {
        return "Human Player";
    }

};
