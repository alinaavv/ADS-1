// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <iostream>

bool checkPrime(uint64_t value) {
    if (value < 2) return false;
    for (uint64_t i = 2; i * i <= value; ++i) {
        if (value % i == 0) return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t count = 0;
    uint64_t number = 1;
    
    while (count < n) {
        ++number;
        if (checkPrime(number)) {
            ++count;
        }
    }
    return number;
}

uint64_t nextPrime(uint64_t value) {
    uint64_t prime = value;
    bool found = false;
    
    while (!found) {
        ++prime;
        if (checkPrime(prime)) {
            found = true;
        }
    }
    return prime;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; ++i) {
        if (checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

    }
    return sum;
}
