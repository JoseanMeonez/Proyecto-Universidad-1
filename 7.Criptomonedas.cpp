using namespace std;

void conversioncriptomonedas() {
	float cambio;
	float cant;
	int decision;
	int moneda;
	
	system("cls");
	// elejir la moneda
	cout<<"\n";
	cout<<"\n";
    cout<<"                 *****Bienvenido al cambio de criptomonedas***** \n";
	cout<<"\n";
	cout<<"                         ***      ************     ***        ***\n";
    cout<<"                       *** **     ************     *** *    * ***\n";
    cout<<"                      ***   **        ***          ***   * *  ***\n";
    cout<<"                     **********       ***          ***    *   ***\n";
    cout<<"                   ***        **      ***          ***        ***\n";
    cout<<"                   ***        **      ***          ***        ***\n";
	cout<<"                 ************************************************\n";
	cout<<"                 ************************************************\n";
	cout <<"                 Seleccione Criptomoneda a cambiar"<< endl;
	cout <<"                 1:Bitcoin"<<endl;
	cout <<"                 2:Ethereum"<<endl; cin>>moneda;
    cout<<"                 *********************************************\n";
	cout<<"\n";
	cout<<"\n";
	// esto es para que te muestre el nombre de la moneda que selecciono
	if (moneda==1) {
		cout <<"                 *************************" << endl;
		cout <<"                 Usted selecciono Bitcoin" << endl;
		cout <<"                 *************************" << endl;
	} else {
		if (moneda==2) {
			cout <<"              *************************" << endl;
			cout <<"              Usted selecciono Ethereum" << endl;
			cout <<"              *************************" << endl;
		} else {
		cout <<"                ************************************************" << endl;
		cout <<"                La moneda elegida es invalida, Escoja una correcta"<<endl;
		cout <<"                ************************************************" << endl;
		return conversioncriptomonedas();
		}

	}
	cout <<"                                                          " << endl;
	cout <<"                 *****************************************" << endl;
	cout <<"                 Ingrese cantidad en Lempiras para cambiar" << endl;
	cout <<"                 *****************************************" << endl;cin >> cant;

	switch (moneda) {
	case 1:
		// esto equivale a bitcoin
		cambio = cant*0.0000018;
		break;
	case 2:
		// esto equivale a ethereum
		cambio = cant*0.000025;
		break;
	default:
		cout <<"              ***************************" << endl;
		cout <<"              La moneda elegida es invalida"<<endl;
		cout <<"              ***************************" << endl;
	}
	cout <<"                                                                          " << endl;
	cout <<"                 ********************************************************" << endl;
	cout <<"                 El cambio en la Criptomoneda seleccionada es: " << cambio << endl;
	cout <<"                 ********************************************************" << endl;
	cout <<"                                                                      " << endl;
	cout <<"                        **************************" << endl;
	cout <<"                        ¿Desea realizar el cambio?" << endl;
	cout <<"                              1 = SI / 2 = NO" << endl;
	cout <<"                        **************************" << endl;cin>> decision;

	switch (decision) {
	case 1:
		cout <<"                 *****************************************************" << endl;
		cout <<"                 Su intercambio fue exitoso, Revise su cartera virtual" << endl;
		cout <<"                 *****************************************************" << endl;
		break;
	case 2:
		cout <<"                       *****************************" << endl;
		cout <<"                       Su intercambio fue declinado" << endl;
		cout <<"                       *****************************" << endl;
		break;
	default:
		cout <<"                       La opcion elegida es invalida" << endl;
	}
}

