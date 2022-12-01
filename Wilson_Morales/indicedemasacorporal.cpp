//Creado por Wilson Said Morales
#ifdef __MSDOS__
    #include <iostream.h>
    #include <stdlib.h>
#else
    /*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include <iostream>
    #include <cstdlib>
    /*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;
#endif

/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación*/
/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
int main (void)
{
    /*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
float IMC, altura_en_m, peso_en_kg;
   /*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos */
 cout << "Ingresa el valor de altura en m: ";
    cin >> altura_en_m;
    cin.get();
    //Calcular IMC
	cout << "Ingresa el valor de peso en kg: ";
    cin >> peso_en_kg;
    cin.get();
    IMC=peso_en_kg/altura_en_m/altura_en_m;
    if(IMC<16)
        cout << "Peso muy bajo." << endl;
    if(IMC>=16&&IMC<17)
        cout << "Infrapeso." << endl;
    if(IMC>=17&&IMC<18)
        cout << "Bajo peso." << endl;
    if(IMC>=18&&IMC<25)
        cout << "Peso normal (saludable)." << endl;
    if(IMC>=5&&IMC<30)
        cout << "Sobrepeso (obesidad de grado I)." << endl;
    if(IMC>=30&&IMC<35)
        cout << "Sobrepeso (obesidad de grado II)." << endl;
    if(IMC>=35&&IMC<40)
        cout << "Obesidad (obesidad de grado III)." << endl;
    if(IMC>=40)
        cout << "Obesidad (obesidad de grado IV)." << endl;
    //Muestro resultados por pantalla
cout << "Valor de IMC: " << IMC << endl;
    //Muestro resultados por pantalla
cout << endl;
    system ("pause");
    /*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
return EXIT_SUCCESS;
}

