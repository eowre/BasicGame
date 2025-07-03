#pragma once
#include <string>

class Character {
    private:
        std::string name;
        int health;
        int attackPower;
    
    public:
        Character( const std::string& name);

        void take_damage(int damage);
        void heal(int amount);
        int get_health() const;
        int get_attack_power() const;
        std::string get_name() const;
};