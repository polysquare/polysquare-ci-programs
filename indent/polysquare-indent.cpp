/*
 * polysquare-indent.cpp
 *
 * A program which reads from stdin and indents by
 * four spaces every time it hits a newline character
 * or the POLYSQUARE_INITIAL_INDENT environment
 * variable is set.
 *
 * See LICENCE.md for Copyright information
 */

#include <iostream>
#include <string>

#include <cstdlib>

int main (void)
{
    char b;

    if (std::getenv ("POLYSQUARE_INITIAL_INDENT"))
        std::cerr << "    ";

    while (std::cin.get(b))
    {
        std::cerr << b;
        if (b == '\n')
            std::cerr << "    ";
    }
}
