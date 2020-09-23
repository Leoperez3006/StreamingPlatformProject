#pragma once
#include "Video.h"
#include <vector>
////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////
class Platforma
{
public:
	Platforma();
	Platforma(int, int);

	void muestraPeliculas();
	void muestraSeries();
	void muestraCatalogo();
	void calificaVideo(int, double);

	void filtraCalificacion(double);
	void filtraGenero(string);
	void filtraAmbos(double,string);
	~Platforma();

private:
	int cuantasPelculas;
	int cuantasSeries;
	vector<Video*> catalogo;
};

