//Creado por Wilson Morales //Calcular el promedio mas alto
/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include <iostream>

/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;

char nom[20];
/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
float prom, cal, may = 0, aux;
/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación*/
int alumnos, x, suma = 0;

/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
int main()
{
    /*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos */
cout << "Cantidad de alumnos: ";
    cin >> alumnos;

    for(x = 0; x < alumnos; x++)
    {
        cout << "Nombre: ";
        cin >> nom;
        cout << "Calificacion: ";
        cin >> cal;     
       //Sumamos en el acumulador
 suma = suma + cal;        
        aux = cal;
        if (aux >= may)
        {
            may = aux;
        }                                         
    }
    prom = (float)suma / alumnos;
   //Muestro resultados por pantalla
 cout <<"El promedio es: " << prom << "\n";
    cout << "La mayor calificacion es: " << may;

    /*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
return 0;
}
