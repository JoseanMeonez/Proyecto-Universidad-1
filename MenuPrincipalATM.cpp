// Librerías de C++
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

// Incluyendo por separado cada función del proyecto:
#include "1.Deposito.cpp"
#include "2.Saldo_disponible.cpp"
#include "3.Retiros.cpp"
#include "4.Adelanto_Salario.cpp"
#include "5.Recargas.cpp"
#include "6.Dolares_Euros.cpp"
#include "7.Criptomonedas.cpp"
#include "9.Creditos.cpp"

using namespace std;

int main()
{
	// definir las variables
	int saldo_cajero=0, billete100=0, billete500=0, opcion_principal=0, monto_retiro=0,pin=0, monto_dep=0;
	double encriptacion=0, saldo_disponible=0, opc_pin=2,saldo_usr=0;
	//variables definidas
	//inicio de operacion del cajero, con cuanto dinero arranca
	cout<<"Ingrese el monto de operacion del Cajero Automatico\n";
	cout<<"Cantidad de Billetes de 100 Lempiras\n";
	cin>>billete100;
	cout<<"Cantidad de billetes de 500 Lempiras\n";
	cin>>billete500;
	saldo_cajero=(billete100*100)+(billete500*500);
	cout<<"El monto de operacion del cajero es de: "<<saldo_cajero<<" Lempiras"<<endl;
	cout<<"\n";
	cout<<"\n";
	// aqui insertar una pausa
	system("pause");
	//aqui insertar un clear screen
	system("cls");
	
	
	while(saldo_cajero>=100) {
		
		while(opc_pin==2) {
			system("cls");
		 	cout << "\n----------- Bienvenido (a) de nuevo -----------";
			cout << "\n|           **     *******   **      **       |";
			cout << "\n|          ****    *** ***   * **  ** *       |";
			cout << "\n|         **__**     * *     * * ** * *       |";
			cout << "\n|        ***  ***    * *     * *    * *       |";
			cout << "\n-----------------------------------------------"<<endl;
			cout << "Favor ingrese su clave y pulsa la tecla anotacion\n";
		  cin>>pin;
		  
			if(pin==1234) {     // si el pin es 1234 le asigna una saldo al cliente
				if(saldo_disponible != 15250 && saldo_disponible > 0) {
					saldo_disponible=saldo_disponible;
				} else {
					saldo_disponible = 15250;
				}
			} else {
				saldo_disponible = 0;
			}
			if(pin<1000 or pin>9999) {    // si el pin es de menos o mas de 4 digitos, no lo acepta
				cout<<"Ingrese su pin de 4 digitos:\n";
				system("pause");
				system("cls");
			} else {
				cout<<"1. Anotacion\n";
				cout<<"2. Cancelar\n";
				cin>>opc_pin;
			}
		}

		system("cls");
		
		//Menu principal del cajero automatico.
		cout<<"                    *******Bienvenido a su Cajero automatico****** \n";
		cout<<"\n";
		cout<<"                         ***      ************     ***        ***\n";
	  cout<<"                       *** **     ************     *** *    * ***\n";
	  cout<<"                      ***   **        ***          ***   * *  ***\n";
		cout<<"                     **********       ***          ***    *   ***\n";
	  cout<<"                   ***        **      ***          ***        ***\n";
	  cout<<"                   ***        **      ***          ***        ***\n";
		cout<<"                    ***********************************************\n";
		cout<<"\n";
		cout<<"\n";
		cout<<"                    ****MENU PRINCIPAL***\n";
		cout<<"                    1. HACER UN DEPOSITO A CUENTA      \n";	// Completo
		cout<<"                    2. HACER UNA CONSULTA DE SALDO     \n";	// Completo
		cout<<"		    3. REALIZAR UN RETIRO DE DINERO    \n";             	// Completo
		cout<<"                    4. SOLICITAR ADELANTO DE SALARIO   \n";	// Completo
		cout<<" 		    5. COMPRA DE RECARGAS DE CELULAR   \n";							// Completo
		cout<<"                    6. TIPO DE CAMBIO DOLARES Y EUROS  \n";	// Completo
		cout<<"                    7. CONVERSION DE CRIPTOMONEDAS     \n";  // Completo
		cout<<"                    8. CANCELAR                        \n";  // Completo
		cout<<"                    9. CREDITOS DEL SISTEMA            \n";  // Completo
		cout<<"                 Ingrese el numero de su opcion... "; cin>>opcion_principal;

		switch(opcion_principal) {
			// Depositos
			case 1:
				monto_dep = deposito();
				saldo_cajero = val_dep(monto_dep, saldo_cajero);
				saldo_disponible = val_dep(monto_dep, saldo_disponible);
				getch();
			break;
			
			// Consulta de saldo
			case 2:
				saldo(saldo_disponible);
				getch();
			break;
			
			// Retiros
			case 3:
				saldo_cajero=retiros(saldo_cajero);
				getch();
			break;
			
			// Adelanto de Salario
			case 4:
				saldo_cajero=anticipos(saldo_cajero);
				getch();
			break;
			
			// Recargas
			case 5:
				cout<<"Saldo actual: "<<saldo_cajero<<endl;
				recarga(saldo_cajero);
				cout<<"Saldo actual: "<<saldo_cajero<<endl;
				getch();
			break;
			
			// Cambio a Dolares y Euros
			case 6:
				Dolares_Euros();
				getch();
			break;
			
			// Cambio a Criptomonedas
			case 7:
				conversioncriptomonedas();
				getch();
			break;
			
			// Salir o cancelar
			case 8:
				cout<<"¡Gracias por preferirnos!\n";
				getch();
			break;
			
			// Mostrar creditos
			case 9:
				creditos();
				getch();
			break;
			
			// Poniendo en mantenimiento el programa
			case 10:
				cout<<"Inicializando mantenimiento interno, favor presione una tecla para apagar el dispositivo correctamente.\n";
				getch();
				return 0;
			break;
			
			// Acción por defecto
			default: cout<<"OPCION SOLICITADA NO ESTA DISPONIBLE.\n";
				getch();
			break;
		}

		opc_pin=2;
		system("cls");
	}

	cout<<"EL CAJERO ATM SE QUEDO SIN FONDOS, LO SENTIMOS";
	getch();
	
	return 0;
}

