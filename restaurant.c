//
// Created by Nahuel Barrios on 2019-06-15.
//

#include "stdio.h"
#include "restaurant.h"


#define CANTIDAD 4

void runRestaurantExercise() {
    printf("Running function runRestaurantExercise\n");

    char platos[CANTIDAD][50];
    float precios[CANTIDAD];


    for (int i = 0; i < CANTIDAD; i++) {
        printf("ingrese el nombre del plato %d: \n", i + 1);
        gets(platos[i]);
        fflush(stdin);

        printf("ingrese el valor del plato %d: \n", i + 1);
        scanf("%f", &precios[i]);

    }
}

