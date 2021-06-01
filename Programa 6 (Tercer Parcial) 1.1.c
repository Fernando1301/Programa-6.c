//Parcial 3_Programa 6: Cuente el numero de veces que ahorras y nos diga un acumulado del ahorro//
#include <stdio.h>
int main()
{
    int Banco; //Acumulador//
    int Monto; //Cantidad a ahorrar//
    int Numdepositos; //Cantidad de veces que fui al banco//
    char Respuesta; //Para saber si queremos realizar algun otro deposito//

    Numdepositos = 0;
    Banco = 0;
    Monto = 0;
    Respuesta = 's';

    do
    { 
        //Vamos al banco//
        Respuesta = 's';
        printf("\n\n Monto que se depositara: ");
        scanf("%d", &Monto);
        Banco = Banco + Monto; //Acumulador//
        Numdepositos = Numdepositos + 1; //Contador//

        printf("¿Quieres realizar algun otro deposito? (s/n)");
        scanf("%s",&Respuesta);
    } while (Respuesta != 'n'); //Condicion-While = Mientras//

    printf("Dinero que tiene usted en el banco %d\n",&Banco);
    printf("Numero de depositos %d", &Numdepositos);

    return 0;
}