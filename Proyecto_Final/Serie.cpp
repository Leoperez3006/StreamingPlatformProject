#include "Serie.h"
////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////
Serie::Serie()
{
	cuantas = 2;
	Temporada *unaTemporada;
	for (int i = 0; i < cuantas; i++) {
		unaTemporada = new Temporada(9, i);
		temporadas.push_back(unaTemporada);
	}
	ID = 1;
	nombre = "Nombre de la serie";
	duracion = 1;
	genero = "Accion";
	calificacion = 5;

}

Serie::Serie(int c, int id, string name, int dur , string gen, double calif)
{
	cuantas = c;
	Temporada* unaTemporada;
	for (int i = 0; i < cuantas; i++) {
		unaTemporada = new Temporada(9, i);
		temporadas.push_back(unaTemporada);
	}
	ID = id;
	nombre = name;
	duracion = dur;
	genero = gen;
	calificacion = calif;

}

void Serie::imprimeDatos()
{
	for (int i = 0; i < cuantas; i++) {
		temporadas[i]->despliegaTemporada();
	}
}

Serie::~Serie()
{
}

