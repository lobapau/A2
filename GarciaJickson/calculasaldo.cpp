// Creador por Garcia Jickson

#include<iostream>
/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
using namespace std;
/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
int main()
	/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/

{
	float GVJM_x,GVJM_s= 0 ;
	/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
	int GVJM_i= 0 ,GVJM_l;
	/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación*/
	cout<< " Ingrese cantidad de egrasos (1) : " ;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_l:*/
	cin>>GVJM_l;
	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos GVJM_l */
	cout<< " Ingrese el saldo inicial (s) : " ;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_s:*/
	cin>>GVJM_s;
	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos GVJM_s */
	do{
		/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
		cout<< " Ingreso egreso (x) : " ;
		/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_x:*/
		cin>>GVJM_x;
		/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicar
a lo que usuario debe ingresar, en este caso ingresaremos GVJM_x*/
		GVJM_i=GVJM_i+ 1 ;
		//Hacemos el proceso de la sumatoria de nuestros contadores
		GVJM_s=GVJM_s+GVJM_x;
		//Sumamos en el acumulador
	}while(GVJM_i<GVJM_l);
	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
	cout<< " El saldo final es: " <<GVJM_s<<endl;
	//Muestro resultados por pantalla
	return  0 ;
/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
}
