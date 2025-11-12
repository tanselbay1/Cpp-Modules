#include "ScavTrap.hpp"

int main(void) {
    std::cout << "--- Creating ScavTrap ---" << std::endl;
    ScavTrap scavA("SCAV-01");
    std::cout << std::endl;

    std::cout << "--- Testing ScavTrap Actions ---" << std::endl;
    scavA.attack("a raider");
    scavA.takeDamage(30);
    scavA.beRepaired(20);
    scavA.guardGate();
    std::cout << std::endl;

    std::cout << "--- Testing ClapTrap for comparison ---" << std::endl;
    ClapTrap clapA("CLAP-01");
    clapA.attack("a skag");
    std::cout << std::endl;
    
    std::cout << "--- Testing Copy ---" << std::endl;
    ScavTrap scavB = scavA;
    scavB.attack("another raider");
    std::cout << std::endl;

    std::cout << "--- End of main (Destructors will be called) ---" << std::endl;
    return 0;
}
