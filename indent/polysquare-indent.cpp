/*
 * polysquare-indent.cpp
 *
 * A program which reads from stdin and indents by
 * four spaces every time it hits a newline character.
 *
 * See LICENCE.md for Copyright information
 */

#include <iostream>
#include <string>

int main (void)
{
    char b;
    while (std::cin.get(b))
    {
        std::cerr << b;
        if (b == '\n')
            std::cerr << "    ";
    }
}
