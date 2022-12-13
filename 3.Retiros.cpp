using namespace std;

// Función para actualizar valores
int retiros(int x){
	system("cls");
	int saldo_atm=x;
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
	cout<<"************************seleccione el monto a retirar************************\n";
	cout<<"                        1. 100 LEMPIRAS\n";
	cout<<"                        2. 500 LEMPIRAS\n";
	cout<<"                        3. 1000 LEMPIRAS\n";
	cout<<"                        4. Otra Cantidad\n";
	cout<<"                        5. Cancelar\n";
	cout<<"Ingrese el numero de su opcion de retiro "; cin>>opcretiro;

	switch(opcretiro){
		case 1:
			if(saldo_atm<100){
				cout<<"                             no hay suficientes fondos en el cajero...";
			}
			else
			{
				cout<<"                            El monto a retirar es de 100 lempiras...\n";
		    cout<<"                                   Favor tome su dinero....\n";
		    cout<<"                                Presione una tecla para continuar\n";
		    saldo_atm=saldo_atm - 100;
			}
		break;

		case 2:
			if(saldo_atm<500){

				cout<<"no hay suficientes fondos en el cajero...";
			}
			else
			{
				cout<<"                            El monto a retirar es de 500 lempiras...\n";
		    cout<<"                                   Favor tome su dinero....\n";
		    cout<<"                                Presione una tecla para continuar\n";
		    saldo_atm=saldo_atm - 500;
			}


			break;
		case 3:
			if(saldo_atm<1000){

				cout<<"no hay suficientes fondos en el cajero...";
			}
			else
			{

				cout<<"                            El monto a retirar es de 1000 lempiras...\n";
		    cout<<"                                     Favor tome su dinero....\n";
		    cout<<"                                Presione una tecla para continuar\n";
		    saldo_atm=saldo_atm - 1000;
			}
			break;
		case 4:
			cout<<"                            Ingrese el monto a retirar en multiplos de 100 Lempiras\n";
			cin>>monto_retiro;

			if(monto_retiro % 100 >0){
				cout<<"el monto ingresado no es valido";
			}
			else
			{
				if(monto_retiro>saldo_atm){
					cout<<"                              no hay suficientes fondos en el cajero...";
				}
				else
				{
					cout<<"            El monto a retirar es de :"<<monto_retiro<<" Lempiras..."<<endl;
			    cout<<"                                 Favor tome su dinero....\n";
			    saldo_atm=saldo_atm-monto_retiro;
			    cout<<"                                Presione una tecla para continuar\n";
				}
			}
			break;
		case 5:
			break;
		default:
		  break;
	}

	return saldo_atm;
}
