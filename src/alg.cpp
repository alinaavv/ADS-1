// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
    if (value < 2) return false;
    for (uint64_t i = 2; i * i <= value; ++i) {
        if (value % i == 0) return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    if (n == 0) return 2;
    uint64_t count = 1;  
    uint64_t number = 1;
    
    while (count < n) {
        number += 2;  
        if (checkPrime(number)) {
            ++count;
        }
    }
    return number;
}

uint64_t nextPrime(uint64_t value) {
    if (value < 2) return 2;
    uint64_t prime = value % 2 ? value : value + 1;  
    
    while (!checkPrime(prime)) {
        prime += 2;  
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
   
