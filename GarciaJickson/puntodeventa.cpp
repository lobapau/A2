//creado por Garcia Jickson

#include<iostream>
/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
using namespace std;
//sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar
int main() 
//sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa
{
	float JMGV_x,JMGV_s=0,JMGV_vb,JMGV_piva=12,JMGV_viva,JMGV_pdesc=10,JMGV_vdesc,JMGV_vn;
	//Para definir datos reales se antepone la palabra reservada float al identificador de la variable
	int JMGV_i=0,JMGV_l;
	//El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación
	cout<<"Ingrese l: ";
	/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JMGV_l:*/
	cin>>JMGV_l;
	/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos JMGV_l */
	do{ 
//La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false
		cout<<"Ingrese x: ";
		/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JMGV_x:*/
		cin>>JMGV_x;
/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos JMGV_x */
		JMGV_i=JMGV_i+1;
		//Hacemos el proceso de la sumatoria de nuestros contadores
		JMGV_s=JMGV_s+JMGV_x;
		//Sumamos en el acumulador
	}while(JMGV_i<JMGV_l);
	//La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false
	JMGV_vb=JMGV_s;
	//Luego hacemos, el proceso de JMGV_vb que va hacer igual a JMGV_s, en esta linea estamos igualando dos Cantidad
	JMGV_viva=JMGV_vb*JMGV_piva/100;
	// Aqui vamos a sacar el % de JMGV_viva que va a hacer igual a JMGV_vb*JMGV_piva/100
	JMGV_vdesc=JMGV_vb*JMGV_pdesc/100;
// procedemos a calcular el JMGV_vdesc que va a hacer igual a JMGV_vdesc=JMGV_vb*JMGV_pdesc/100, asi podemos sacar su %
	JMGV_vn=JMGV_vb+JMGV_viva-JMGV_vdesc;
	// décimos que JMGV_vn es igual a JMGV_vb+JMGV_viva-JMGV_vdesc, para poder calcular JMGV_vn
	cout<<"El valor a pagar es de: "<<JMGV_vn<<endl;
	//Cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas, Antes de terminar con nuestro ejercicio debemosbmostrar por pantalla, lo que el usuario solicita.
	return 0;
	//Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada
}
