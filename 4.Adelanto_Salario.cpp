using namespace std;

int anticipos(int y){
	system("cls");
	int saldo_atm=y;
	int opcretiro;
	int monto_retiro;

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


	//cout<<"el cajero tiene disponibles "<<saldo_atm;
	cout<<"*****************Seleccione el monto anticipo de Salario*******************\n";
	cout<<"                        1. 100 LEMPIRAS\n";
	cout<<"                        2. 500 LEMPIRAS\n";
	cout<<"                        3. 1000 LEMPIRAS\n";
	cout<<"                        4. Cancelar\n";
	cout<<"Ingrese el numero de su opcion de anticipo "; cin>>opcretiro;

	switch(opcretiro){
		case 1:
		if(saldo_atm<100){

			cout<<"                             no hay suficientes fondos en el cajero...";
		}

		else{

			cout<<"                            El monto a anticipar es de 100 lempiras...\n";
		    cout<<"                                   Favor tome su dinero....\n";
		    cout<<"                                Presione una tecla para continuar\n";
		    saldo_atm=saldo_atm - 100;
		}
		break;

		case 2:
		if(saldo_atm<500){

			cout<<"no hay suficientes fondos en el cajero...";
		}

		else{

			cout<<"                            El monto a anticipar es de 500 lempiras...\n";
		    cout<<"                                   Favor tome su dinero....\n";
		    cout<<"                                Presione una tecla para continuar\n";
		    saldo_atm=saldo_atm - 500;
		}


			break;
		case 3:
		if(saldo_atm<1000){

			cout<<"no hay suficientes fondos en el cajero...";
		}

		else{

			cout<<"                            El monto a anticipar es de 1000 lempiras...\n";
		    cout<<"                                     Favor tome su dinero....\n";
		    cout<<"                                Presione una tecla para continuar\n";
		    saldo_atm=saldo_atm - 1000;

	}
			break;
		case 4:
			break;
		default:
		    break;


	}

	return saldo_atm;
}
