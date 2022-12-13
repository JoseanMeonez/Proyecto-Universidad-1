using namespace std;

//prototipo de funcion
void recarga(int& saldo_cajero);

//definicion de funcion
void recarga(int& saldo_cajero)
{
	system ("cls");
	int optel, numt, monto, confirm;
	
	cout<<"Elija su compania telefonica."<<endl;
	cout<<"----------------------------"<<endl;
	cout<<"---- 1. Tigo - 2. Claro ----"<<endl;
	cout<<"----------------------------"<<endl;
	cin>>optel;
	
	system("pause");
	system ("cls");
	
	if(optel==1)
	{
		cout<<"---------- T I G O ----------"<<endl;
	}
	else
	{
		cout<<"--------- C L A R O ---------"<<endl;		
	}
	
	cout<<"Por favor, ingrese su numero: " <<endl;
	cout<< "-----------------------------"<<endl;
	cout<< "+504: ";
	cin>>numt;
	cout<<"______________________________" <<endl;
	
	system("pause");
	system ("cls");
	
	cout<<"Por favor, ingrese el monto a recargar: " <<endl;
	cout<<"---------------------------------------" <<endl;
	cout<<"	    1. 25 lps." <<endl;
	cout<<"	    2. 50 lps." <<endl;
	cout<<"	    3. 100 lps." <<endl;
	cout<<"---------------------------------------" <<endl;
	cin>>monto;
	
	system("pause");
	system ("cls");	
	
	switch (monto)
	{
		case 1:
			cout<<"¿Recargar 25 lps. al numero: +504: "<<numt<<"?" <<endl;
			saldo_cajero= saldo_cajero-25;
		break;
		
		case 2:
			cout<<"¿Recargar 50 lps. al numero: +504: "<<numt<<"?" <<endl;
			saldo_cajero= saldo_cajero-50;
		break;
		
		case 3:
			cout<<"¿Recargar 100 lps. al numero: +504: "<<numt<<"?" <<endl;
			saldo_cajero= saldo_cajero-100;
		break;
		
		default:
			cout<<"Valor no valido."<<endl;
		break;		
	}
	

	cout<<"------------------"<<endl;
	cout<<"1. SI     2. SALIR" <<endl;
	cout<<"------------------" <<endl;
	cin>>confirm;
	
	if(confirm==1)
	{
		cout<<"LA RECARGA FUE EXITOSA!" <<endl;
	}
	else
	{
		cout<<"ANULASTE EL PROCESO" <<endl;
		
		switch (monto)
		{
		case 1:
			saldo_cajero= saldo_cajero+25;
		break;
		
		case 2:
			saldo_cajero= saldo_cajero+50;
		break;
		
		case 3:
			saldo_cajero= saldo_cajero+100;
		break;
		
		default:
			saldo_cajero= saldo_cajero;
		break;		
		}
	}
	
	system("pause");
	system ("cls");
}
