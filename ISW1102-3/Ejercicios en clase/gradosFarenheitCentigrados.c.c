/******************************************************************************

Realizar un programa que permita convertir grados centigrados a farenheits y viceversa

Datos de Entrada
Reales gradosC, gradosF, centigrados=0, farenheits=0
 Proceso
 Esrcibir "Ingrese los grados centigrados: "
 Leer gradosC
 Esrcibir "Ingrese los grados farenheit: "
 Leer gradosF
 centigrados=(gradosF-32)*(5/9)
 farenheit=(gradosC*9/5)+32
 Salida
 Imprimir "La conversion de grados farenheit a centigrados es: ",centigrados
 Imprimir "La conversion de grados centigrados a farenheit es: ",farenheit
*******************************************************************************/




#include <stdio.h>

void main()
{
    float gradosC,gradosF,centigrados=0,farenheit=0;
    int op;
    printf("1. centigrados a farenheit\n2.farenheit a centigrados\n");
    printf("Escoja una opcion: ");
    scanf("%d",&op);
    if(op==1)
    {
       printf("Ingrese los grados centigrados:");
       scanf("%f",&gradosC);
       farenheit=(gradosC*9/5)+32;
         printf("La conversion de grados centigrados a farenheit es:%.2f\n",farenheit);
    }
    else if(op==2)
    {
        printf("Ingrese los grados farenheit:");
       scanf("%f",&gradosF);
       centigrados=(gradosF-32)*5/9;
       printf("La conversion de grados farenheit a centigrados es:%.2f",centigrados);
    }
}


