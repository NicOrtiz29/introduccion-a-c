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
/*
int main() {
    float calificaciones[5];  //no entiendo porque le pone el 5.. si despues repercute en algo o no. ==> RTA: Es el tamaño del array. Solo puede tener 5 elementos. A los array hay que definirlos con un tamaño si o si.
    float promedio = 0;  //aca esta diciendo que arranca en 0,..

    printf("programa que calucla promedio de 5 califiaciones..... \n");

    for (int i = 0; i < 5; i++) {    // aca declara la variable "i" como numero entero para que arranque en "0"... no entiendo lo que sigue.. que "i" tiene que ser menor que "5"?? despues a i le suma un numero????
        // RTA: Sí. El for tiene 3 partes. 1. La variable con la que vas a laburar; 2. Una condición (i<5), y mientras esto de true el for va a seguir repitiendose eternamente; 3. El incremento de la variable de control (o sea i) que es la que define cuando hay que salir del for.

        printf("dame las calificaciones %d:", i + 1); // Al ponerlo asi pido la calificacion 1, luego la 2 y asi hasta 5..

        scanf("%f", &calificaciones[i]); // guarda la variable numerica en calificaciones y no entiendo que es lo que hace la "i" entre corchetes.
        // RTA: La entre corchetes es para acceder al elemento en la posición "i" del arrray.

        promedio += calificaciones[i]; // no entiendo porque pone el += ademas de la [i]
        // RTA: += es lo mismo que decir:
        // promedio = promedio + calificaciones[i] (es como un atajo)
        // y por otro lado calificaciones[i] como te puse arriba es para acceder al valor que hay en la posición "i" del array "calificaciones".

        printf("\n");
    }


    printf("el promedio de las calificaciones es: %.2f\n\n", promedio / 5);  // Esto seria que el numero que le dio el promedio lo divda x5? ==> RTA: Sí.
    return 0;
}
*/

int main(){
    int n1,n2,n3,min,max;

    printf("digite los 3 valores:  \n");
    scanf("%i %i %i", &n1,&n2,&n3);

    if(n1>n2){
        if(n1>n3){
            max=n1;
        }
        else{
            max=n3;
            }
    }
    else{
        if(n2>n3){
            max=n2;
            }
        else{
            max=n3;
        }
    }
    if(n1<n2){
        if(n1<n3){
            min=n1;
        }

        else{
            min=n3;
            }
        }
    else{
     if(n2<n3){
            min=n2;
                }

    else{
        min=n3;
    }

    }


    printf("el mayor de los valores es %i  \n", max);
    printf("el menor de los valores es %i   \n", min);


}


