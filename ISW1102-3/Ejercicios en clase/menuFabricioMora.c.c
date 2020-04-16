/******************************************************************************

1.	Para una guardería de perros,realice un programa que acepte datos para el ID
del propietario de un perro, nombre, raza, edad y peso del perro.Despliegue una
factura que contenga todos los datos de entrada al igual que la tarifa semanal
de la guardería, la cual es de $55 para perros con menos de 7 kilogramos, $75 
para perros de 7 a 14 kilogramos inclusive, $105 para perros de 14.1 a 37 
kilogramos inclusive, y $125 para perros con más de 37 kilogramos.

2.	Dados tres números, determinar si la suma de cualquier pareja de ellos es 
igual al tercer número. Si se cumple esta condición, escribir IGUALES y, en 
caso contrario, escribir DISTINTAS.  Por ejemplo en el caso que los números sean
3 9 6 la respuesta es IGUALES  , ya que 3+6 = 9. Sin embargo, si los números
fueran 2 3 4, el resultado sería DISTINTAS

Datos de entrada
entero edad,op,ID,N1,N2,N3
cadena de caracter nombre,raza
decimal peso

proceso
Escribir "Ingresar Menu Principal"
Escrbir "1. Guarderia 2. Numeros"
Leer Menu
Caso 1
Escribir "Ingresar ID" 
Leer ID
Escribir "Ingresar nombre"
Leer nombre
Escribir "Ingresar raza"
Leer raza
Escribir "Ingresar edad"
Leer edad
Escribir "Ingresar peso en kg"
Leer peso
Si (peso<7)
Imprimir ID
Imprimir nombre
Imprimir raza
Imprimir edad
Imprimir peso
Imprimir &55.00
Si (peso>=7&&peso<=14)
Imprimir ID
Imprimir nombre
Imprimir raza
Imprimir edad
Imprimir peso
Imprimir &75.00
Si (peso>=14.1&&peso<=37)
Imprimir ID
Imprimir nombre
Imprimir raza
Imprimir edad
Imprimir peso
Imprimir &105.00
Si (peso>37)
Imprimir ID
Imprimir nombre
Imprimir raza
Imprimir edad
Imprimir peso
Imprimir &125.00
Romper
Caso 2
Escribir Ingrese N1
Leer N1
Escribir Ingrese N2
Leer N2
Escribir Ingrese N3
Leer N3
Si (N1+N2==N3)
Imprimir "Iguales"
Si (N1+N3==N2)
Imprimir "Iguales"
Si (N3+N2==N1)
Imprimir "Iguales"
Caso contrario
Imprimir "Distintos"
Romper
Caso contrario
Imprimir "Opcion invalida. Intentelo Nuevamente"
Romper
*******************************************************************************/

#include <stdio.h>//Declaracion de librerias

void main()//Declaracion de funcion principal
{
    int edad,op,ID,N1,N2,N3;//Datos de Entrada(Enteros)
    char nombre[10],raza[10];//Datos de Entrada(Cadena de caracteres)
    float peso;//Datos de Entrada(Decimales)
    printf("\tMenu Principal\n");//Ingresar Menu
    printf("1. Factura Guarderia de Perros\n2. Ejercicio Numeros\n");//Ingresar opciones de menu
    printf("Escoja una opcion: ");//Ingresar dato
    scanf("%d",&op);//Leer dato
    switch(op)//Opcion de escoger
    {
        case 1://1era opcion
        
            printf("Ingrese su ID:\n");//Ingresar datos
            scanf("%i",&ID);//Leer datos
            printf("Ingrese el nombre de su mascota:\n");//Ingresar datos
            scanf("%s",nombre);//Leer datos
            printf("Ingrese la raza de su mascota:\n");//Ingresar datos
            scanf("%s",raza);//Leer datos
            printf("Ingrese la edad de su mascota:\n");//Ingresar datos
            scanf("%i",&edad);//Leer datos
            printf("Ingrese el peso de su mascota en kg:\n");//Ingresar datos
            scanf("%f",&peso);//Leer datos
            if(peso<7)//Sentencia condicional
            {
                printf("\tFactura:%i\n",ID);//Imprimir datos
                printf("Nombre de la mascota:%s\n",nombre);//Imprimir datos
                printf("Raza de la mascota:%s\n",raza);//Imprimir datos
                printf("Edad de la mascota:%i\n",edad);//Imprimir datos
                printf("Peso de la mascota:%f\n",peso);//Imprimir datos
                printf("Total a pagar: $55.00");//Imprimir datos
            }
            else if(peso>=7&&peso<=14)//Sentencia condicional
            {
                printf("\tFactura:%i\n",ID);//Imprimir datos
                printf("Nombre de la mascota:%s\n",nombre);//Imprimir datos
                printf("Raza de la mascota:%s\n",raza);//Imprimir datos
                printf("Edad de la mascota:%i\n",edad);//Imprimir datos
                printf("Peso de la mascota:%f\n",peso);//Imprimir datos
                printf("Total a pagar: $75.00");//Imprimir datos
            }
            else if(peso>=14.1&&peso<=37)//Sentencia condicional
            {
                printf("\tFactura:%i\n",ID);//Imprimir datos
                printf("Nombre de la mascota:%s\n",nombre);//Imprimir datos
                printf("Raza de la mascota:%s\n",raza);//Imprimir datos
                printf("Edad de la mascota:%i\n",edad);//Imprimir datos
                printf("Peso de la mascota:%f\n",peso);//Imprimir datos
                printf("Total a pagar: $105.00");//Imprimir datos
            }
            else if(peso>37)//Sentencia condicional
            {
                printf("\tFactura:%i\n",ID);//Imprimir datos
                printf("Nombre de la mascota:%s\n",nombre);//Imprimir datos
                printf("Raza de la mascota:%s\n",raza);//Imprimir datos
                printf("Edad de la mascota:%i\n",edad);//Imprimir datos
                printf("Peso de la mascota:%f\n",peso);//Imprimir datos
                printf("Total a pagar: $125.00");//Imprimir datos
            }
            
        break;//Romper
        case 2://2da Opcion
        
            printf("Ingresar 1er Numero:\n");//Ingresar datos
            scanf("%d",&N1);//Leer datos
            printf("Ingresar 2do Numero:\n");//Ingresar datos
            scanf("%d",&N2);//Leer datos
            printf("Ingresar 3er Numero:\n");//Ingresar datos
            scanf("%d",&N3);//Leer datos
            if(N1+N2==N3)//Sentencia condicional
            {
                printf("Iguales");//Imprimir datos
            }
            else if(N1+N3==N2)//Sentencia condicional
            {
                printf("Iguales");//Imprimir datos
            }
            else if(N2+N3==N1)//Sentencia condicional
            {
                printf("Iguales");//Imprimir datos
            }
            else//Sentencia condicional
            {
                printf("Distintos");//Imprimir datos
            }
            
        break;//Romper
        default://Caso contrario
        
            printf("Opcion inavlida. Intentelo Nuevamente");//Imprimir datos
        
        break;//Romper
    }
}






