using namespace std;

void Dolares_Euros()
{
	int op, monto, confirm;
	double usd, eur, lps;
	
	system ("cls");
	cout << "\n----------- Bienvenido (a) de nuevo -----------";
	cout << "\n|           **     *******   **      **       |";
	cout << "\n|          ****    *** ***   * **  ** *       |";
	cout << "\n|         **__**     * *     * * ** * *       |";
	cout << "\n|        ***  ***    * *     * *    * *       |";
	cout << "\n-----------------------------------------------";
	cout<<"\nSeleccione la moneda a canjear:"<<endl;
	cout<<"1. Dolar (USD)"<<endl;
	cout<<"2. Euro (EUR)";
	cout << "\n-----------------------------------------------"<<endl;
	cin>>op;

	system ("cls");

	if(op==1)
	{
		cout<<"------------- D O L A R E S ( U S D ) -------------"<<endl;
		cout<<"La tasa de cambio del dolar estadounidense esta a \nL. 24.55 favor ingrese el monto en lempiras a canjear:"<<endl;
		cin>>lps;
		
		usd = lps / 24.55;
		cout << "-------------------------------------------------"<<endl;
		cout<<"Su cambio total de L. "<<lps<<" es de $ "<<usd<<endl;
	}
	else
	{
		cout<<"--------------- E U R O S ( E U R ) ---------------"<<endl;
		cout<<"La tasa de cambio del euro esta a L. 25.01 favor \ningrese el monto en lempiras a canjear:"<<endl;
		cin>>lps;

		eur = lps / 25.01;
		cout << "-------------------------------------------------"<<endl;
		cout<<"Su cambio total de L. "<<lps<<" es de € "<<eur<<endl;
	}
}
