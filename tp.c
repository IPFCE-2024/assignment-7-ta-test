#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "taylor_sine.h"

#define M_PI       3.14159265358979323846   // Define pi for comparison

void main() {
    double pi = M_PI;
    double test1 = taylor_sine(pi, 8);
    if(test1 == sin(pi)) {
        printf("Test 1 passed\n");
    } else {
        printf("Test 1 failed\n");
        printf("Expected: %f\n", sin(pi));
        printf("Actual: %f\n", test1);
    }

    double test2 = taylor_sine(pi / 2.0, 10);
    if(test2 == sin(pi / 2.0)) {
        printf("Test 2 passed\n");
    } else {
        printf("Test 2 failed\n");
        printf("Expected: %f\n", sin(pi/2.0));
        printf("Actual: %f\n", test2);
    }

    double test3 = taylor_sine(0, 1);
    if(test3 == sin(0)) {
        printf("Test 3 passed\n");
    } else {
        printf("Test 3 failed\n");
        printf("Expected: %f\n", sin(0));
        printf("Actual: %f\n", test3);
    }

    double test4 = taylor_sine(pi / 4.0, 6);
    if(test4 == sin(pi / 4.0)) {
        printf("Test 4 passed\n");
    } else {
        printf("Test 4 failed\n");
        printf("Expected: %f\n", sin(pi/4.0));
        printf("Actual: %f\n", test4);
    }

    double test5 = taylor_sine(0.005, 3);
    if(test5 == sin(0.005)) {
        printf("Test 5 passed\n");
    } else {
        printf("Test 5 failed\n");
        printf("Expected: %f\n", sin(0.005));
        printf("Actual: %f\n", test5);
    }
}