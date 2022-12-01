//Creado por Wilson Said Morales
/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include <iostream>
/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;
/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/

int main ()
{
	/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
	float x,s=0;
	/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación*/
	int i=0,l;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *CBPJ_l:*/
	cout<<"Ingrese cantidad de egresos (l): ";cin>>l;
	cout<<"Ingrese saldo inicial (s): ";cin>>s;
	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/

	do{
	cout<<"Ingrese egreso(x): ";cin>>x;
	i=i+1;
	s=s+x;
/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/

	}while(i<l);
	//Muestro resultados por pantalla
	cout<<"El saldo final es: "<<s<<endl;
	return 0;
	/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/

}
