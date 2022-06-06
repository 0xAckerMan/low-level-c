#include <stdio.h>
#include <math.h>
#include "armstrong_numbers.h"
#define MAX_DIGITS                15
#define CHAR_TO_INT(character)    (character - 48)
bool is_armstrong_number(int candidate){
    char buffer[MAX_DIGITS];
    size_t len = sprintf(buffer, "%d", candidate);
    int result = 0;
    for(size_t i = 0; i < len; i++){
        result += pow(CHAR_TO_INT(buffer[i]), len);
    }
    
    return (result == candidate);
}

