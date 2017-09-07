#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

int vectorVacio(int cant)
{
    int rta=1;
    if(cant<=0)
    {
        printf("ERROR, NO SE A INGRESADO NINGUN AVION, POR FAVOR AGREGUE UNO.\n");
    }
        else
        {
            rta=1;
        }
    return rta;
}

int alta(eAvion aviones[],int indice)
{
    int rslt=0;
    if(indice>=0)
    {
        printf("Ingrese matricula\n");
        fflush(stdin);
        scanf("%s",aviones[indice].matricula);
        printf("Ingrese fabricante\n");
        fflush(stdin);
        scanf("%s",aviones[indice].fabricante);
        printf("Ingrese modelo\n");
        fflush(stdin);
        scanf("%s",aviones[indice].modelo);
        printf("Ingrese capacidad\n");
        fflush(stdin);
        scanf("%d",&aviones[indice].capacidad);
        printf("Ingrese autonomia de vuelo\n");
        fflush(stdin);
        scanf("%d",&aviones[indice].autonomia);
        aviones[indice].habilitado=1;
        rslt=1;
    }
    return rslt;
}

int baja(eAvion aviones[],int tam)
{
    int rslt=0;
    char aux[50];
    int indice;
    printf("Ingrese la matricula del avion a dar de baja:\n");
    fflush(stdin);
    gets(aux);
    indice=BuscarIndice(&aviones,tam,aux);
    if(indice>=0)
    {
        aviones[indice].habilitado=0;
        rslt=1;
    }
    return rslt;
}

int BuscarIndice(eAvion aviones[], int tam, char matricula)
{
    int indice=-1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(strcmp(aviones[i].matricula,matricula)==0)
        {
            indice=i;
            break;
        }
    }
    return indice;
}

void mostrarAvion(eAvion avion)
{
    printf("Matricula:%s\n",avion.matricula);
    printf("Fabricante:%s\n",avion.fabricante);
    printf("Modelo:%s\n",avion.modelo);
    printf("Capacidad:%d\n",avion.capacidad);
    printf("Autonomia de vuelo%d:\n",avion.autonomia);
}
