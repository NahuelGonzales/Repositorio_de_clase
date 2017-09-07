#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include "ArrayList.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int contAviones=0;
    eAvion Aviones[1000];
    while(seguir=='s')
    {
        printf("1- Agregar avion\n");
        printf("2- Modificar avion\n");
        printf("3- Borrar avion\n");
        printf("4- Nuevo vuelo\n");
        printf("5- Suspender Vuelo\n");
        printf("6- Informar\n");
        printf("7- Listar\n");
        printf("8- Salir\n\n\n");
        fflush(stdin);
        scanf("%d",&opcion);


        switch(opcion)
        {
            case 1:
                if(alta(Aviones,contAviones))
                {
                    contAviones++;
                }
                break;
            case 2:
                if(vectorVacio(contAviones)==1)
                {
                    baja(Aviones,contAviones);
                }
                break;
            case 3:
                if(vectorVacio(contAviones)==1)
                {

                }
                break;
            case 4:
                if(vectorVacio(contAviones)==1)
                {

                }
                break;
            case 5:
                if(vectorVacio(contAviones)==1)
                {

                }
                break;
            case 6:
                if(vectorVacio(contAviones)==1)
                {

                }
                break;
            case 7:
                if(vectorVacio(contAviones)==1)
                {

                }
                break;
            case 8:
                seguir = 'n';
                break;
        }
    }
    return 0;
}
