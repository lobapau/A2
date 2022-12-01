// Creado por Garcia Jickson 


#include<iostream>
/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
using namespace std;
/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
int main()
/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
{
	float  GVJM_aa,GVJM_ma,GVJM_da,GVJM_an,GVJM_mn,GVJM_dn,GVJM_a,GVJM_m,GVJM_d;
	/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
	cout<< " Ingrese la fecha actual: " ;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_aa:*/
	cin>>GVJM_aa>>GVJM_ma>>GVJM_da;
/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos GVJM_an */
	cout<< " Ingrese la fecha de nacimiento: " ;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *GVJM_an:*/
	cin>>GVJM_an>>GVJM_mn>>GVJM_dn;
	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos GVJM_an */
	if (GVJM_da>GVJM_dn){
		/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
		GVJM_d=GVJM_da-GVJM_dn;
		//decimos que la GVJM_d va hacer igual a GVJM_da menos GVJM_dn, para poder calcular la edad de cualquier persona
	}  else {
		/*Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición.*/
		GVJM_da=GVJM_da+ 30 ;
		//decimos que la GVJM_d va hacer igual a GVJM_da menos GVJM_dn, para poder calcular la edad de cualquier persona
		GVJM_ma=GVJM_ma- 1 ;
		//decimos que la GVJM_d va hacer igual a GVJM_da menos GVJM_dn, para poder calcular la edad de cualquier persona
		GVJM_d=GVJM_da-GVJM_dn;
		//decimos que la GVJM_d va hacer igual a GVJM_da menos GVJM_dn, para poder calcular la edad de cualquier persona
	}
	if(GVJM_ma>GVJM_mn){
		/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
		GVJM_m=GVJM_ma-GVJM_mn;
		//decimos que la GVJM_m va hacer igual a GVJM_ma menos GVJM_mn, para poder calcular la edad de cualquier persona
	} else {GVJM_ma=GVJM_ma+ 12 ;
		/*Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición.*/
		GVJM_aa=GVJM_aa- 1 ;
		//decimos que la GVJM_aa va hacer igual a  GVJM_aa, menos 1 para poder calcular la edad de cualquier persona
		GVJM_m=GVJM_ma-GVJM_mn;
		//decimos que la GVJM_m va hacer igual a GVJM_ma menos GVJM_mn, para poder calcular la edad de cualquier persona
	}
	GVJM_a=GVJM_aa-GVJM_an;
	//decimos que la GVJM_a va hacer igual a GVJM_aa menos GVJM_an, para poder calcular la edad de cualquier persona, y poder tener una ejecicion perfecta.
	cout<< " Usted tiene " <<GVJM_a<< " años, " <<GVJM_m<< " meses, " <<GVJM_d<< " dias " <<endl;
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comilas:*/
	return 0 ;
/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
}
