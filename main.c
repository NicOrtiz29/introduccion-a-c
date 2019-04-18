#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int n1,n2,n3;

    printf("ingrese 3 numeros: ");
    scanf("%i" "%i" "%i", &n1 &n2 &n3);


    while (n1>n2){


    }

}
*/

int main()
{
    float calificaciones [5];  //no entiendo porque le pone el 5.. si despues repercute en algo o no.
    float promedio =0;  //aca esta diciendo que arranca en 0,..

    printf("programa que calucla promedio de 5 califiaciones..... \n");

    for(int i = 0; i < 5; i++){    // aca declara la variable "i" como numero entero para que arranque en "0"... no entiendo lo que sigue.. que "i" tiene que ser menor que "5"?? despues a i e suma un numero????
        printf("dame las calificaciones %d:     ", i+1 ); // Al ponerlo asi pido la calificacion 1, luego la 2 y asi hasta 5..
        scanf("%f", &calificaciones [i]); // guarda la variable numerica en calificaciones y no entiendo que es lo que hace la "i" entre corchetes.
        promedio += calificaciones [i]; // no entiendo porque pone el += ademas de la [i]
        printf("\n");



    }



    printf("el promedio de las calificaciones es:     %.2f\n\n", promedio / 5);  //esto seria que el numero que le dio el promedio lo divda x5?
    return 0;
}
