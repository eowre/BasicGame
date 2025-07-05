#pragma once
#include <string>

class Attack {

    public:
        enum class AttackType {
            neutral = 0,
            fire = 1,
            water = 2,
            earth = 3,
            air = 4,
            count
        };
    private:
        std::string name;
        int damage;
        AttackType type;
        AttackType previous_type;

    public:

    // Constructors
    Attack(const std::string& name);
    Attack(const std::string& name, int damage, AttackType type, AttackType previous_type = AttackType::neutral);

    // Member functions
    // Getters
    std::string get_name() const;
    int get_damage() const;
    AttackType get_type() const;
    AttackType get_previous_type() const;

    // Setters
    void set_name(const std::string& name);
    void set_damage(int damage);
    void set_type(AttackType type);
    void set_previous_type(AttackType previous_type);

    // Other member functions
    void phase_attack(AttackType type) const;
    const int phaseTable[static_cast<int>(AttackType::count)][static_cast<int>(AttackType::count)] = {
            // N,  F,  W,  E,  A
        /*N*/ {0,  1,  2,  3,  4},
        /*F*/ {1,  5,  6,  7,  8},
        /*W*/ {2,  6,  9, 10, 11},
        /*E*/ {3,  7, 10, 12, 13},
        /*A*/ {4,  8, 11, 13, 14}
    };
};