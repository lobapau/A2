// creado por Garcia Jickson

#include<iostream>
/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
using namespace std;
/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
int main()
	/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/

{
	float GVJM_x, GVJM_s= 0 , GVJM_s1= 0 , GVJM_s5= 0 ;
	/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
	int GVJM_i= 0 ,GVJM_l,GVJM_i1= 0 ,GVJM_i5= 0 ;
	/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación*/
	cout<< " Ingreso l: " ;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_l:*/
	cin>>GVJM_l;
	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos GVJM_l */
	do{
		/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
		cout<< " Ingreso x: " ;
		/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_x:*/
		cin>>GVJM_x;
		/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos GVJM_x */
		GVJM_i=GVJM_i+ 1 ;
		//Hacemos el proceso de la sumatoria de nuestros contadores
		GVJM_s=GVJM_s+GVJM_x;
		//Sumamos en el acumulador
		if(GVJM_x== 1 ){
			/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
			GVJM_i1=GVJM_i1+ 1 ;
			//Volvemos hacer el proceso de la sumatoria de nuestros contadores
			GVJM_s1=GVJM_s1+GVJM_x;
			//Sumamos en el acumulador

		}else {
			/*Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición.*/
			GVJM_i5=GVJM_i5+ 1 ;
			//Hacemos nuevamente  el proceso de la sumatoria de nuestros contadores
			GVJM_s5=GVJM_s5+GVJM_x;
			//Sumamos en el acumulador
		}

	} while (GVJM_i<GVJM_l);
	/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/

	cout<< " La cantidad de monedas fue : " <<GVJM_i<<endl;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_i:*/

	cout<< " El valor fue: " <<GVJM_s<<endl;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_s:*/

	cout<< " La cantidad de monedas s1 fue : " <<GVJM_i1<<endl;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_i1:*/
	cout<< " El valor fue : " <<GVJM_s1<<endl;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_s1:*/

	cout<< " La cantidad de monedas i5 : " <<GVJM_i5<<endl;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_i5:*/

	cout<< " El valor fue : " <<GVJM_s5<<endl;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_s5:*/

	return 0;
	/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/

}
