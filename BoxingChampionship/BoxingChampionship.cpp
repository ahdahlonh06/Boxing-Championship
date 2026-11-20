#include <iostream>
#include "PlayerFighter.h"

int main() {
    PlayerFighter player("Champion");
    int choice = 0;

    std::cout << "BOXING CHAMPIONSHIP\n";

    do {
        std::cout << "\n===== TRAINING MENU =====\n";
        std::cout << "1. View Fighter Stats\n";
        std::cout << "2. Take Damage (20 HP)\n";
        std::cout << "3. Use Stamina (15)\n";
        std::cout << "4. Recover Stamina (10)\n";
        std::cout << "5. Exit Training\n";
        std::cout << "Enter your choice: ";

        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input!\n";
            continue;
        }

        switch (choice) {
        case 1:
            player.showPlayerInfo();
            break;

        case 2:
            player.takeDamage(20);
            std::cout << "You took 20 damage!\n";
            break;

        case 3:
            if (player.useStamina(15)) {
                std::cout << "Used 15 stamina!\n";
            }
            else {
                std::cout << "Not enough stamina!\n";
            }
            break;

        case 4:
            player.recoverStamina(10);
            std::cout << "Recovered stamina!\n";
            break;

        case 5:
            std::cout << "Training complete!\n";
            break;

        default:
            std::cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}