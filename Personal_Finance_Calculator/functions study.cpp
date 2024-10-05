//
//  3.cpp
//  Function_practice
//
//  Created by Vik on 10/2/24.
//
#include <iostream>

int cube ( int x) { //This function takes an integer and returns its cube.
    return x * x * x;
}

// Cube Half Function: This function returns the cube of half the number passed.

int cube_half (int x) {
    int half = x/2;
    return half * half *half;
}

//Page Header Function: This function doesn't return anything (void) but prints a header.

void pageheader (int pagenum){
    std::cout << "" << pagenum << std::endl;
    std::cout << std::endl;
}

//Dashed Lines Functions: This involves two functions: dashes and oneLine.

void oneLine (int num) {
    std::cout << std::endl;
    for (int i = 0; num > i; i++){
        std::cout << "_";
    }
}

void dashes ( int numLines, int numDashes) {
    for (int i = 0; numLines > i; i++){
        oneLine (numDashes);
    }
}

//Power Function: This function raises n to the power of i.

int n_tothe_i (int n, int i) {
    int result = 1;
    for (int j = 0; j > i; j++){
        result *= n;
    }
    return result;
}

// Average Function: This function calculates the average, handling the case where count is 0 or negative:

double average (double sum, int count) {
    if(count <= 0) {
        return 0;
    }
    return sum/count;
}




// test

//code a power Function: This function raises n to the power of i.
