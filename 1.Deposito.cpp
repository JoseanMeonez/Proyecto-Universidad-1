using namespace std;

// Función de depositos:
int deposito() {
	int monto_dep;
	
	system ("cls");
	cout << "\n--------Bienvenido al menu de depositos--------";
	cout << "\n|           **     *******   **      **       |";
	cout << "\n|          ****    *** ***   * **  ** *       |";
	cout << "\n|         **__**     * *     * * ** * *       |";
	cout << "\n|        ***  ***    * *     * *    * *       |";
	cout << "\n-----------------------------------------------";
	
	cout << "\nFavor ingrese el cantidad de dinero que desea \ndepositar en billetes de 100 o 500 lempiras: "<<endl;
	cin>>monto_dep;
	
	if (monto_dep % 100 == 0) {
		cout << "\nDepositando " << monto_dep << " Lempiras en su cuenta bancaria..."<<endl;
	} else {
		cout << "\nLos billetes ingresados deben ser de 100 o 500 Lempiras, favor verifique de nuevo el monto de " << monto_dep << " Lempiras."<<endl;
	}
	
	return monto_dep;
}

// Función para actualizar valores
int val_dep(int monto_dep, int val) {
	int resultado = val + monto_dep;
	
	return resultado;
}
