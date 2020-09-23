#include <iostream>
#include "Video.h"
#include "Pelicula.h"
#include "Capitulo.h"
#include "Platforma.h"
#include "Serie.h"
#include <cctype>
////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////
using namespace std;

void califica(Platforma unaPlataforma)
{
	char opcion3;
	int index;
	double cal;
	cout << "Desea calificar algun titulo Y/N?";
	cin >> opcion3;
	opcion3 = tolower(opcion3);
	switch (opcion3)
	{
	case 'y':
		cout << "Ingrese el ID del video a calificar:";
		cin >> index;
		index = index - 1;
		cout << "Ingrese ka calificacion que va a asignar: ";
		cin >> cal;
		unaPlataforma.calificaVideo(index, cal);
		cout << "Se ha asignado la calificacion";
		

	case 'n':
		cout << "Decidió no calificar ningun video"<<endl;
		break;
	default:
		cout << "Valor invalido";
		break;
	}
}

int main()
{
	int peliculas, series;
	char opcion, opcion2;
	bool control;
	control = true;
	string gene;
	double _calif;

	cout << "Ingrese el numero de peliculas" << endl;
	cin >> peliculas;
	cout << "Ingrese el numero de series" << endl;
	cin >> series;

	Platforma netflix(peliculas,series);
	cout << "/////////////////////" << endl;
	cout << "//     Netflix     //" << endl;
	cout << "/////////////////////" << endl;


	while (control == true){
		cout << "Escoja que quiere ver: \n a) Catalogo completo \n b) Solo  peliculas \n c) Solo series" << endl;
		cout << " d) videos de cierto genero \n e) videos con cierta calificacion \n f) videos con cierta calificacion y cierto genero" << endl;
		cin >> opcion;

		opcion = tolower(opcion);
		switch (opcion)
		{
		case 'a':
			netflix.muestraCatalogo();
			califica(netflix);
			break;
		case 'b':
			netflix.muestraPeliculas();
			califica(netflix);
			break;
		case 'c':
			netflix.muestraSeries();
			califica(netflix);
			break;
		case 'd':
			cout << "Indique el genero a filtrar" << endl;
			cin >> gene;
			netflix.filtraGenero(gene);
			break;
		case 'e':
			cout << "indique la calificacion a filtrar" << endl;
			cin >> _calif;
			netflix.filtraCalificacion(_calif);
			break;
		case 'f':
			cout << "Indique el genero a filtrar" << endl;
			cin >> gene;
			cout << "indique la calificacion a filtrar" << endl;
			cin >> _calif;
			netflix.filtraAmbos(_calif, gene);
			break;
		default:
			cout << "opcion invaldia" << endl;
			break;
		}


		cout << "Desea continuar Y/N ?";
		cin >> opcion2;
		opcion2 = tolower(opcion2);
		switch (opcion2)
		{
		case 'y':
			control = true;
			break;
		case 'n':
			control = false;
			break;

		default:
			cout << "Entradad invalida" << endl;
		
		}
	}
	return 0;
}
