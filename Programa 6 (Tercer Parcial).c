//Parcial 3_Programa 6: Cuente el numero de veces que ahorras y nos diga un acumulado del ahorro//
#include <stidio.h>
int main()
{
    int Banco; //Acumulador//
    int Monto; //Cantidad a ahorrar//
    int Num.depositos; //Cantidad de veces hidas al banco//
    char Letra;
    Num.depositos = 0;
    Banco = 0;
    Monto = 0;
    Respuesta = 's';
    do
    {
        //Vamos al banco//
        Letra = 's';
        printf("\n\n Monto que se depositara: ");
        scanf("%d" , &Monto);
        Banco = Banco + Monto; //Acumulador//
        Num.depositos = Num.depositos + 1;
        printf("¿Quieres realizar algun otro deposito (s/n)?");
        scanf("%c" , &Letra);
    } while (Letra ! = 'n'); //Condicion//

    printf("Dinero que tiene usted en el banco %d", Banco);
    printf("Numero de depositos %d" , Num.depositos);
    return 0;
}