#include "Pelicula.h"

////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////
Pelicula::Pelicula()
{
	clasif = 'E';
}

Pelicula::Pelicula(char clas, int id, string name, int dur, string gen, double cal) : Video (id,name,dur,gen,cal)
{
	clasif = clas;
}

void Pelicula::setClasif(char clas)
{
	clasif = clas;
}

char Pelicula::getClasif()
{
	return clasif;
}

void Pelicula::imprimeDatos()
{	
	//cout << "ID: " << ID << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Duracion: " << duracion << " min"<<endl;
	cout << "Genero: " << genero << endl;
	cout << "Clasifiacion: " << clasif << endl;
	cout << "Calificacion: " << calificacion << endl;
	cout << endl;
}

Pelicula::~Pelicula()
{
}

ostream& operator<<(ostream& salida, Pelicula& unaPelicula)
{
	return salida << "ID: " << unaPelicula.getID() << endl << "Nombre: " << unaPelicula.getNombre() << endl << "Duarcion: " << unaPelicula.getDuracion() << endl << "Genero: "<<unaPelicula.getGenero()<<endl<<"Clasificacion: "<<unaPelicula.getClasif()<<endl<<"Calificacion: "<<unaPelicula.getCalificacion()<<endl;

}
