//creado por Colobon Pauloba

/*pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación.*/
#include<iostream>

/*sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar*/
using namespace std;

/*Es la función principal y dentro de ella podemos escribir las operaciones*/
int main()

{

/*Para definir datos reales se antepone la palabra reservada float al identificador de la variable, en este caso utilizaremos las siguientesCBPJ_x,CBPJ_s=0,CBPJ_vb,CBPJ_piva=12,CBPJ_viva,CBPJ_pdesc=10,CBPJ_vdesc,CBPJ_vn*/
float CBPJ_x,CBPJ_s=0,CBPJ_vb,CBPJ_piva=12,CBPJ_viva,CBPJ_pdesc=10,CBPJ_vdesc,CBPJ_vn;

/*El tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación, estaremos utilizando CBPJ_i=0,CBPJ_l*/
int CBPJ_i=0,CBPJ_l;

/*Cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas,ingrese l*/
	cout<<"Ingrese l: ";

/*cin es el flujo de entrada estándar que normalmente es el teclado, que el usuario debera ingresar*/
	cin>>CBPJ_l;

/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
	do{

/*cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *CBPJ_x:*/
		cout<<"Ingrese x: ";

/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos CBPJ_x */
                cin>>CBPJ_x;

//Hacemos el proceso de la sumatoria de nuestros contadores
		CBPJ_i=CBPJ_i+1;

//Sumamos en el acumulador
		CBPJ_s=CBPJ_s+CBPJ_x; 

/*La instrucción do-while permite repetir una instrucción o una instrucción compuesta hasta que una expresión especificada sea false*/
	}while(CBPJ_i<CBPJ_l);

//Luego hacemos, el proceso de CBPJ_vb que va hacer igual a CBPJ_s, en esta linea estamos igualando dos Cantidades
	CBPJ_vb=CBPJ_s;

//Aqui vamos a sacar el % de CBPJ_viva que va hacer igual a CBPJ_vb*CBPJ_piva/100
	CBPJ_viva=CBPJ_vb*CBPJ_piva/100;

//procedemos a calcular el CBPJ_vdesc que va hacer igual a CBPJ_vdesc=CBPJ_vb*CBPJ_pdesc/100, asi podemos sacar su %
	CBPJ_vdesc=CBPJ_vb*CBPJ_pdesc/100;

//decimos que CBPJ_vn es igual a CBPJ_vb+CBPJ_viva-CBPJ_vdesc, para poder calcular CBPJ_vn
	CBPJ_vn=CBPJ_vb+CBPJ_viva-CBPJ_vdesc;

//Antes de terminar con nuestro ejercicio debemosbmostrar por pantalla, lo que el usuario solicito.
	cout<<"El valor a pagar es de: "<<CBPJ_vn<<endl;

/*Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada*/
	return 0;
	
}

