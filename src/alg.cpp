// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i <= value / 2; i++) {
        if (!(value % i)) {
            return false;
        }
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t count = 1, num = 2;
    while (count < n) {
        num++;
        if (checkPrime(num)) {
            count++;
        }
    }
    return num;
}

uint64_t nextPrime(uint64_t value) {
    value++;
    while (!checkPrime(value)) {
        value++;
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}
