/pone a su disposición los objetos cin, cout en el ámbito estándar (std), de tal manera que usted puede comenzar a enviar o recibir información a través de los mismos sin siquiera preocuparse de su creación./
#include<iostream>


/sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librería estándar/
using namespace std;


/sirve como punto de partida para la ejecución del programa. Normalmente, controla la ejecución del programa dirigiendo las llamadas a otras funciones del programa/
int main()

{
	

/Para definir datos reales se antepone la palabra reservada float al identificador de la variable/
	int aa,ma,da,an,mn,dn,a,m,d;


/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JAMG_aa:/
	cout<<"ingrese la fecha actual: ";


/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos JAPP_an */
	cin>>aa>>ma>>da;



/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *JAMG_an:/
	cout<<"ingrese la fecha de nacimiento:  ";



/*cin es el flujo de entrada estándar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos JAPP_an */
	cin>>an>>mn>>dn;



/Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples/



//decimos que la JAMG_d va hacer igual a JAMG_da menos JAMG_dn, para poder calcular la edad de cualquier persona


	if(da>dn){
		d=da-dn;



/Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición./
	}else{
		da=da+30;
		ma=ma-1;
		d=da-dn;

	}


/Los condicionales IF, son una estructura de control condicional, también llamadas estructuras selectivas de casos simples/
	if(ma>mn){


//decimos que la CBPJ_m va hacer igual a CBPJ_ma menos CBPJ_mn, para poder calcular la edad de cualquier persona
		m=ma-mn;


/Los condicionales IF-ELSE, son una estructura de control, que nos permiten tomar cierta decisión al interior de nuestro algoritmo, es decir, nos permiten determinar que acciones tomar dada o no cierta condición./
	}else{


//decimos que la JAPP_aa va hacer igual a  CBPJ_aa, menos 1 para poder calcular la edad de cualquier persona
		ma=ma+12;


//decimos que la JAPP_m va hacer igual a JAPP_ma menos JAPP_mn, para poder calcular la edad de cualquier persona
		aa=aa-an;


//decimos que la CBPJ_a va hacer igual a JAPP_aa menos JAPP_an, para poder calcular la edad de cualquier persona, y poder tener una ejecicion perfecta.
		m=ma-mn;
	}
	a=aa-an;


/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comilas:/
	cout<<"usted tiene:  "<<a<<"años,"<<d<<"meses,"<<d<<"dias,"<<endl;


/Finaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main ). La ejecución se reanuda en la función de llamada, en el punto que sigue inmediatamente a la llamada/
	return 0;

}
