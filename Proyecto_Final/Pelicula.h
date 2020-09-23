#pragma once
#include "Video.h"
#include <string>
using namespace std;
////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////
class Pelicula: public Video
{
public: 
	/*Constructores*/
	Pelicula();
	Pelicula(char,int,string,int,string,double);
	/*Setters*/
	void setClasif(char);
	/*Getters*/
	char getClasif();
	/*Metodos especiales*/
	void imprimeDatos();
	/*Sobrecarga*/
	friend ostream& operator << (ostream&, Pelicula&);



	~Pelicula();

private: 
	char clasif;
};

