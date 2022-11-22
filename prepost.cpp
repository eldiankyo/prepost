#include <iostream>

int main()
{
    int myAge = 39;
    int yourAge = 39;

    std::cout << "I am:\t" << myAge << "\tyears old.\n";
    std::cout << "You are:\t" << yourAge << "\tyears old.\n\n";
    myAge++; //Postfix növelés: Visszaadja az értéket és aztán növeli meg.
    ++yourAge; //Prefix növelés: Megnöveli és aztán adja vissza az értéket.
    
    std::cout << "One year passes.\n";
    std::cout << "I am:\t" << myAge << "\tyears old.\n";
    std::cout << "You are:\t" << yourAge << "\tyears old.\n\n";

    std::cout << "Another year passes.\n";
    std::cout << "I am:\t" << myAge++ << "\tyears old.\n";
    std::cout << "You are:\t" << ++yourAge << "\tyears old.\n\n";

    std::cout << "Let's print it again!\n";
    std::cout << "I am:\t" << myAge << "\tyears old.\n";
    std::cout << "You are:\t" << yourAge << "\tyears old.\n";

    return 0;
}