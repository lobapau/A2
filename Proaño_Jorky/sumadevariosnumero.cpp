/Pone a su disposici�n los objetos cin, cout en el �mbito est�ndar (std), de tal manera que usted puede comenzar a enviar o recibir informaci�n a trav�s de los mismos sin siquiera preocuparse de su creaci�n./

#include<iostream>
 using namespace std;

/Sirve para dar acceso al espacio de nombres (namespace) std, donde se encuentra encerrada toda la librer�a est�ndar/

                                                                                                                                            //creadoporJorkyProa�o


/Sirve como punto de partida para la ejecuci�n del programa. Normalmente, controla la ejecuci�n del programa dirigiendo las llamadas a otras funciones del programa/


int main()


/Para definir datos reales se antepone la palabra reservada float al identificador de la variable. las que utilizare son CBPJ_x,CBPJ_s=0.0/


  {
float JAPP_x,JAPP_s=0.0;


/*El tipo int es el tipo entero b�sico predeterminado. Puede representar todos los n�meros enteros en un intervalo espec�fico de la implementaci�n en este tipo de ejercicio utilizaremos CBPJ_i=0,CBPJ_l */

int JAPP_i=0,JAPP_l;


/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *CBPJ_l:/
cout<<"Ingrese el valor de JAPP_l: ";                                                                                                                                            


/*cin es el flujo de entrada est�ndar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos CBPJ_l */

cin>>JAPP_l; 



/La instrucci�n do-while permite repetir una instrucci�n o una instrucci�n compuesta hasta que una expresi�n especificada sea false/
                                                     
do{


/cout nos ayude imprimir por pantalla todos lo que vamos a escribir dentro de las comillas e ingresaremos *CBPJ_x:/

cout<<"Ingrese el valor de JAPP_x: ";


/*cin es el flujo de entrada est�ndar que normalmente es el teclado,donde indicara lo que usuario debe ingresar, en este caso ingresaremos CBPJ_l */

cin>>JAPP_x;


//hacemos el proceso de la sumatoria de nuestros contadores

JAPP_i=JAPP_i+1;


//sumamos nuestro acumulador

JAPP_s=JAPP_s+JAPP_x;



/La instrucci�n do-while permite repetir una instrucci�n o una instrucci�n compuesta hasta que una expresi�n especificada sea false/

}while(JAPP_i<JAPP_l); 

//muestro resultados por pantalla
                                           
cout<<"La suma de los n�mero fue: "<<JAPP_s<<endl;   

/Finaliza la ejecuci�n de una funci�n y devuelve el control a la funci�n de llamada (o al sistema operativo si se transfiere el control de la funci�n main ). La ejecuci�n se reanuda en la funci�n de llamada, en el punto que sigue inmediatamente a la llamada/
                                                                                                               return 0;

}
