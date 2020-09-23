#pragma once
#include <vector>
#include "Capitulo.h"
using namespace std;
////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////
class Temporada
{
public:	
	Temporada();
	Temporada(int, int);

	void despliegaTemporada();

	~Temporada();

private:
	int cuantos;
	int temp;
	vector <Capitulo*> capitulos;

};

