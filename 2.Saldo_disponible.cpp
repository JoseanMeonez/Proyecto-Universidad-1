using namespace std;

int saldo(int saldo_disponible) {
	int sfinal;

	system("cls");
	cout<<"Desea saber su saldo en cuenta: ";
	cout<<"Presione 1 para si"<<endl;
	cin>>sfinal;
	
	
	if (sfinal == 1){
		cout<<"Su saldo en cuenta es: Lps. "<<saldo_disponible<<endl;
	}
	else{
		cout<<"Lo sentimos opcion no valida"<<endl;
	}

	return 0;
}
