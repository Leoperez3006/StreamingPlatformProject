#include "Capitulo.h"
////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////

Capitulo::Capitulo()
{
	titulo = "Titulo del video";
	temporada = 1;
}

Capitulo::Capitulo(string title, int temp)
{
	titulo = title;
	temporada = temp;
}

void Capitulo::setTitulo(string title)
{
	titulo = title;
}

void Capitulo::setTemporada(int temp)
{
	temporada = temp;
}

string Capitulo::getTitulo()
{
	return titulo;
}

int Capitulo::getTemporada()
{
	return temporada;
}

Capitulo::~Capitulo()
{
}

ostream& operator<<(ostream& salida, Capitulo& c)
{
	// TODO: insert return statement here
	return salida << "Titulo: " << c.getTitulo()<< endl<<"Temporada: "<<c.getTemporada()+1<<endl;
}
