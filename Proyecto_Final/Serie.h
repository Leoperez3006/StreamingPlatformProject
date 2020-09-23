#pragma once
#include "Temporada.h"
#include "Video.h"
#include <vector>
#include <string>
////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////

using namespace std;

class Serie:public Video
{
public:
	Serie();
	Serie(int,int,string,int,string,double);

	void imprimeDatos();

	~Serie();
private:
	int cuantas;
	vector<Temporada*> temporadas;
};

