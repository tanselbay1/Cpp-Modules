#include "Fixed.hpp"

// int main( void ) {
//     Fixed a;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;

//     std::cout << b << std::endl;

//     std::cout << Fixed::max( a, b ) << std::endl;

//     return 0;
// }

int main( void ) {
    Fixed a(10.6f);
    Fixed b(11.5f);

    std::cout << a << std::endl;
    if (a>b)
        std::cout << "a is bigger" << std::endl;
    else
        std::cout << "b is bigger" << std::endl;

    std::cout << b << std::endl;

    return 0;
}