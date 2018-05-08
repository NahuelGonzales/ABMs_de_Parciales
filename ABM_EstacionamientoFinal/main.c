#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "lib.h"
#define TAMCLIENTES 3
#define TAMINGRESOS 3

#define ALPHA_ROMEO 1
#define FERRARI 2
#define AUDI 3
#define OTRO 4
int main()
{
    int valido = 1;
    eDuenio clientes[TAMCLIENTES];
    eAutomovil ingresos[TAMINGRESOS];
    inicializarClientes(clientes,TAMCLIENTES);
    inicializarIngresos(ingresos,TAMINGRESOS);
    int salir = 1;

    cargarClientes(clientes,TAMCLIENTES);
    cargarIngresos(ingresos,TAMINGRESOS);

    do{
        switch(menu()){

    case 1:
        system("cls");
        /*valido =*/ altaDuenio(clientes, TAMCLIENTES);
        break;

    case 2:
         system("cls");
         if (valido == 1)
         {
             modificarDuenio(clientes,TAMCLIENTES);
         }
         else
         {
             printf("\nPorfavor Ingrese un dueño primero.\n");
             system("pause");
         }

        break;

    case 3:
         system("cls");
         if (valido == 1)
         {
             altaIngreso(ingresos,TAMINGRESOS,clientes,TAMCLIENTES);
         }
         else
         {
             printf("\nPorfavor Ingrese un dueño primero.\n");
             system("pause");
         }


        break;

    case 4:
         system("cls");
         if (valido == 1)
         {
             egreso(ingresos,TAMINGRESOS,clientes,TAMCLIENTES);
         }
         else
         {
             printf("\nPorfavor Ingrese un dueño primero.\n");
             system("pause");
         }

        break;
    case 5:
         system("cls");
         if (valido == 1)
         {
             switch(menuInformar())
            {

            case 1:
                system("cls");
                mostrarIngresosOrdenados(ingresos,TAMINGRESOS,clientes,TAMCLIENTES);
                //mostrarVariosIngresos(ingresos,TAMINGRESOS,clientes,TAMCLIENTES);
                system("pause");
                break;

            case 2:
                system("cls");
                mostrarDueniosPorMarca(clientes,TAMCLIENTES,ingresos,TAMINGRESOS,AUDI);
                system("pause");
                break;
            case 3:
                system("cls");
                recaudacionTotalPorMarca();
                system("pause");
                break;

            case 4:
                system("cls");
                recaudacionEstacionamiento();
                system("pause");
                break;
            case 5:
                /*system("cls");
                menu();
                system("pause");*/
                break;
            default:
                system("cls");
                printf("Ingrese una de las opciones.\n");
                system("pause");
            }
         }
         else
         {
             printf("\nPorfavor Ingrese un dueño primero.\n");
             system("pause");
         }



        break;
    case 6:
        salir = 0;
        break;

        }

    }while(salir);


    return 0;
}
