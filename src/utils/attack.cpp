#include "attack.h"

// Constructors
Attack::Attack(const std::string& name)
    : name(name), damage(0), type(Attack::AttackType::neutral), previous_type(Attack::AttackType::neutral) {}

Attack::Attack(const std::string& name, int damage, Attack::AttackType type, Attack::AttackType previous_type)
    : name(name), damage(damage), type(type), previous_type(previous_type) {}

// Getters
std::string Attack::get_name() const { return name; }

int Attack::get_damage() const { return damage; }

Attack::AttackType Attack::get_type() const { return type; }

Attack::AttackType Attack::get_previous_type() const { return previous_type; }

// Setters
void Attack::set_name(const std::string& new_name) { name = new_name; }

void Attack::set_damage(int new_damage) { damage = new_damage; }

void Attack::set_type(Attack::AttackType new_type) { type = new_type; }

void Attack::set_previous_type(Attack::AttackType new_previous_type) { previous_type = new_previous_type; }

// Other member functions

// This function decides the phase change of the attack based on the previous type
void Attack::phase_attack(Attack::AttackType type) const
{
    set_previous_type(get_type());
    set_type(type);
    

}