using namespace std;

// Función que muestra los creditos del proyecto:
void creditos() {
	string miembros[] = { "Jose Enrique Pineda Rivera", "Katherine Suseli Mejia Urquia", "David Alejandro Madrid Hernandez", "Adolfo Carranza Pereira", "Maria Marlyn Godines Garcia", "Luis Andre Pineda", "Angie Figueroa", "Jose Andres Meonez Viana" };
	system ("cls");
	cout << "\n--------Bienvenido al menu de depositos--------";
	cout << "\n|           **     *******   **      **       |";
	cout << "\n|          ****    *** ***   * **  ** *       |";
	cout << "\n|         **__**     * *     * * ** * *       |";
	cout << "\n|        ***  ***    * *     * *    * *       |";
	cout << "\n-----------------------------------------------";
	cout <<	"\nUniversidad Tecnologica de Honduras";
	cout << "\n-----------------------------------------------";
	cout << "\nClase: Analisis y diseno de algoritmos";
	cout << "\nCatedratico (a): Jair Hernandez";
	cout << "\n-----------------------------------------------";
	cout << "\nMiembros del proyecto (Grupo #3):";

	// Imprimiendo cada miembro
	for (int i = 0; i < 8; i++) {
	  cout << "\n" << miembros[i];
	}
}
