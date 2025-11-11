#include "ClapTrap.hpp"

int main(void) {
    // Test Name Constructor
    ClapTrap clapA("IronMan");

    // Test Copy Constructor
    ClapTrap clapB(clapA);

    // Test Default Constructor and Assignment Operator
    ClapTrap clapC;
    clapC = clapA;

    std::cout << "--- Testing Actions ---" << std::endl;

    // Test Attack
    clapA.attack("Dr.Doom");

    // Test Take Damage
    clapA.takeDamage(5);

    // Test Repair
    clapA.beRepaired(3);

    // Test Take Lethal Damage
    clapA.takeDamage(20);

    // Test Action while defeated
    clapA.attack("Thanos");
    clapA.beRepaired(10);
    
    std::cout << "--- Testing No Energy ---" << std::endl;
    ClapTrap clapD("CopperMan");
    for (int i = 0; i < 11; i++) { // 10 energy points
        clapD.attack("the floor");
    }

    std::cout << "--- End of main ---" << std::endl;
    return 0;
}
