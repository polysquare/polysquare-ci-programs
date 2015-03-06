/*
 * polysquare-init-newline.cpp
 *
 * A program which reads from stdin and prints a newline when it
 * encounters the very first character, printing each read character
 * after that. If its argument is "1" then a newline will be printed,
 * otherwise no newline is printed initially.
 *
 * See LICENCE.md for Copyright information
 */

#include <iostream>
#include <string>

int main (int argc, char **argv)
{
    bool print_newline = (*argv[1] == '1');

    char b;
    while (std::cin.get(b))
    {
        if (print_newline) {
            std::cerr << "\n";
            print_newline = false;
        }

        std::cerr << b;
    }
}
