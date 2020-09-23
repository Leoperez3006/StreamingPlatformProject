#include "Video.h"
////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////


/*Constructores*/
Video::Video()
{
	ID = 1;
	nombre = "Nombre del video";
	duracion = 1;
	genero = "Accion";
	calificacion = 5;
}



Video::Video(int id, string name, int dur, string gen, double calif)
{
	ID = id;
	nombre = name;
	duracion = dur;
	genero = gen;
	calificacion = calif;
}
/*setters*/
void Video::setID(int id)
{
	ID = id;
}

void Video::setNombre(string name)
{
	nombre = name;
}

void Video::setDuracion(int dur)
{
	duracion = dur;
}

void Video::setGenero(string gen)
{
	genero = gen;
}
void Video::setCalificacion(double cal)
{
	calificacion = cal;
}
/*getters*/
int Video::getID()
{
	return ID;
}

string Video::getNombre()
{
	return nombre;
}

int Video::getDuracion()
{
	return duracion;
}

string Video::getGenero()
{
	return genero;
}
double Video::getCalificacion()
{
	return calificacion;
}
/*Metodos especiales*/
void Video::imprimeVideo()
{
	cout << "ID: " << ID+1<<endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Duracion: " << duracion << endl;
	cout << "Genero: " << genero << endl;
}

void Video::imprimeDatos()
{
	cout << "Prueba";
}

Video::~Video()
{
}
/*sobrecarga*/

ostream& operator<<(ostream& salida, Video& unVideo)
{
	// TODO: insert return statement here
	return salida << "ID: " << unVideo.getID() << endl << "Nombre: " << unVideo.getNombre() << endl << "Duracion: " << unVideo.getDuracion() << endl << "Genero: " << unVideo.getGenero() << endl;
}
