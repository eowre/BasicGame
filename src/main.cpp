#include "character.h"
#include <iostream>
using namespace std;


void display_intro() {
    cout << "Welcome to the Basic Game!" << endl;
    cout << "You will control a character and face challenges." << endl;
}

void show_status(const Character& player) {
    cout << "Character: " << player.get_name() << endl;
    cout << "Health: " << player.get_health() << endl;
    cout << "Attack Power: " << player.get_attack_power() << endl;
}

void dungeon_scenario(Character& player) {
    cout << "You enter a dark dungeon." << endl;
    cout << "1. Go left (looks dark)" << endl;
    cout << "2. Go right (you hear water)" << endl;
    cout << "3. Sit and rest" << endl;
    cout << "Choose an action (1-3): ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You go left and encounter a bat!" << endl;
            player.take_damage(10);
            break;
        case 2:
            cout << "You go right and find a healing spring!" << endl;
            player.heal(15);
            break;
        case 3:
            cout << "You sit and rest." << endl;
            player.heal(5);
            break;
        default:
            cout << "Invalid choice. The monster attacks!" << endl;
            player.take_damage(20);
            break;
    }

    show_status(player);
}

int main() {
    display_intro();

    cout << "Enter your character's name: ";
    string name;
    cin >> name;
    
    Character player(name);

    while (player.get_health() > 0) {
        show_status(player);
        dungeon_scenario(player);
    }

    cout << "\n" << player.get_name() << " has fallen in the dungeon. Game over!" << endl;
    return 0;
}