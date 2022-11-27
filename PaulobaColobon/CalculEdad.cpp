// Creado por Colobon Pauloba 

/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include<iostream>

/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;

/*sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa*/
int main()

{

/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable*/
	float  CBPJ_aa,CBPJ_ma,CBPJ_da,CBPJ_an,CBPJ_mn,CBPJ_dn,CBPJ_a,CBPJ_m,CBPJ_d;

/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *CBPJ_aa:*/
	cout<< " Ingrese la fecha actual: " ;


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos CBPJ_an */
	cin>>CBPJ_aa>>CBPJ_ma>>CBPJ_da;



/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *CBPJ_an:*/
	cout<< " Ingrese la fecha de nacimiento: " ;


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos CBPJ_an */
	cin>>CBPJ_an>>CBPJ_mn>>CBPJ_dn;


/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
	if (CBPJ_da>CBPJ_dn){


//decimos que la CBPJ_d va hacer igual a CBPJ_da menos CBPJ_dn, para poder calcular la edad de cualquier persona
		CBPJ_d=CBPJ_da-CBPJ_dn;


/*Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición.*/
	}  else {


//decimos que la CBPJ_d va hacer igual a CBPJ_da menos CBPJ_dn, para poder calcular la edad de cualquier persona
		CBPJ_da=CBPJ_da+ 30 ;


//decimos que la CBPJ_d va hacer igual a CBPJ_da menos CBPJ_dn, para poder calcular la edad de cualquier persona
		CBPJ_ma=CBPJ_ma- 1 ;


//decimos que la CBPJ_d va hacer igual a CBPJ_da menos CBPJ_dn, para poder calcular la edad de cualquier persona
		CBPJ_d=CBPJ_da-CBPJ_dn;



	}



/*Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples*/
	if(CBPJ_ma>CBPJ_mn){


//decimos que la CBPJ_m va hacer igual a CBPJ_ma menos CBPJ_mn, para poder calcular la edad de cualquier persona
		CBPJ_m=CBPJ_ma-CBPJ_mn;


/*Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición.*/
	} else {CBPJ_ma=CBPJ_ma+ 12 ;


//decimos que la CBPJ_aa va hacer igual a  CBPJ_aa, menos 1 para poder calcular la edad de cualquier persona
		CBPJ_aa=CBPJ_aa- 1 ;


//decimos que la CBPJ_m va hacer igual a CBPJ_ma menos CBPJ_mn, para poder calcular la edad de cualquier persona
		CBPJ_m=CBPJ_ma-CBPJ_mn;
	
	}

//decimos que la CBPJ_a va hacer igual a CBPJ_aa menos CBPJ_an, para poder calcular la edad de cualquier persona, y poder tener una ejecicion perfecta.
	CBPJ_a=CBPJ_aa-CBPJ_an;


/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comilas:*/
	cout<< " Usted tiene " <<CBPJ_a<< " años, " <<CBPJ_m<< " meses, " <<CBPJ_d<< " dias " <<endl;


/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
	return 0 ;

}

