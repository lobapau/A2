/pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación./


/sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar/
#include <iostream>
using namespace std;


/sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa/
int main  ()
{

/Para definir datos reales se antepone la palabra reservada float al identificador de la variable/
	float JAPP_x,JAPP_s= 0 ;


/El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un 	intervalo específico de la implementación/
	int JAPP_i= 0 ,JAPP_l;


/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos */
	cout<< " Ingrese cantidad de egrasos (1) : " ;


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe 	ingresar, en este caso ingresaremos JAPP_l */
	cin>>JAPP_l;


/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos */
	cout<< " Ingrese el saldo inicial (s) : " ;


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe 	ingresar, en este caso ingresaremos JAPP_s */
	cin>>JAPP_s;


/La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false/



/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos 	*JAPP_x:/
	do {
		cout<< " Ingreso egreso (x) : " ;


/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos 	*JAPP_x:/
		cin>>JAPP_x;


//Hacemos el proceso de la sumatoria de nuestros contadores
		JAPP_i=JAPP_i+ 1 ;
	
	//Sumamos en el acumulador	
	JAPP_s=JAPP_s+JAPP_x;


/La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una 	expresión especificada sea false/
	} while (JAPP_i<JAPP_l);


	//Muestro resultados por pantalla
	cout<< " El saldo final es: " <<JAPP_s<<endl;


/Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada/
	return  0 ;

}
