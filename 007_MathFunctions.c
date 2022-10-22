/**
 *  Usa la libreria matematica
 */

#include <math.h>
#include <stdio.h>

#define EXIT_SUCCESS 0

int main() {
    double a = sqrt(9);      //   radice quadrata
    double b = pow(2, 4);    //   potenza
    int c = round(3.50);     //   approssima il numero alla parte intera più vicina
    int d = ceil(3.11);      //   approssimazione per eccesso
    int e = floor(3.99);     //   approssimazione per difetto
    double f = fabs(-50.0);  //   valore assoluto, di un numero decimale!
    double g = log(3);       //   logaritmo
    double h = sin(45);      //   seno
    double i = cos(45);      //   coseno
    double j = tan(45);      //   tangente

    printf("%lf\n", j);

    return EXIT_SUCCESS;
}