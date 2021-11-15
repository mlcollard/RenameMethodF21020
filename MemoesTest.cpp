/*
    MemoesTest.cpp

    Test program for Memoes
*/

#include "Memoes.hpp"
#include <cassert>

int main() {

    {
        Memoes Memoes;

        assert(Memoes.length() == 0);
    }

    return 0;
}
