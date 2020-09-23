#pragma once
#include <iostream>
#include <string>
////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////
using namespace std;
class Video
{
public:
	Video();
	Video(int, string, int, string, double);

	/*Setters*/
	void setID(int);
	void setNombre(string);
	void setDuracion(int);
	void setGenero(string);
	void setCalificacion(double);

	/*Getters*/
	int getID();
	string getNombre();
	int getDuracion();
	string getGenero();
	double getCalificacion();

	/*Metodos especiales*/
	void imprimeVideo();
	virtual void imprimeDatos();

	//virtual imprimeDatos();

	/*Sobrecarga*/
	friend ostream& operator<< (ostream&, Video&);

	~Video(); 
protected:
	int ID;
	string nombre;
	int duracion;
	string genero;
	double calificacion;


};

