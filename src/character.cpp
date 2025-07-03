#include "character.h"

Character::Character(const std::string& name) 
    : name(name), health(100), attackPower(10) {}

void Character::take_damage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0; // Ensure health does not go below zero
    }
    // Optionally, you could add logic here to handle character death
}

void Character::heal(int amount) {
    health += amount;
    if (health > 100) health = 100;
}

int Character::get_health() const {
    return health;
}

int Character::get_attack_power() const {
    return attackPower;
}

std::string Character::get_name() const {
    return name;
}
