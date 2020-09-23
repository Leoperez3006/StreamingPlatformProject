#pragma once
#include <iostream>
////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////
using namespace std;

class Capitulo
{
public:
	/*Constructores*/
	Capitulo();
	Capitulo(string, int);
	/*Setters*/
	void setTitulo(string);
	void setTemporada(int);
	/*getters*/
	string getTitulo();
	int getTemporada();
	/*sobrecarga*/
	friend ostream& operator << (ostream&, Capitulo&);


	/*Destructor*/
	~Capitulo();

private:
	string titulo;
	int temporada;

};

