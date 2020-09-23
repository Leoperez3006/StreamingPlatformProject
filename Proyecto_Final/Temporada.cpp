#include "Temporada.h"
#include <iostream>
using namespace std;
////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////
Temporada::Temporada()
{
	cuantos = 9;
	temp = 1;

	Capitulo* capitulo;
	for (int i = 0; i < cuantos; i++) {
		capitulo = new Capitulo("Titulo", temp);
		capitulos.push_back(capitulo);
	}
}

Temporada::Temporada(int c, int t)
{
	cuantos = c;
	temp = t;
	Capitulo* capitulo;
	for (int i = 0; i < cuantos; i++) {
		capitulo = new Capitulo("Titulo", temp);
		capitulos.push_back(capitulo);
	}
}

void Temporada::despliegaTemporada()
{
	for (int i = 0; i < cuantos; i++) {
		cout << "Capitulo " << i + 1 << endl;;
		cout << *capitulos[i] << endl;
	}
}
