/*
    MemoesTest.cpp

    Test program for Memoes
*/

#include "Memoes.hpp"
#include <cassert>

int main() {

    {
        Memoes Memoes;

        assert(Memoes.size() == 0);
    }

    return 0;
}
