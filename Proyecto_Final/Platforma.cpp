#include "Platforma.h"
#include "Pelicula.h"
#include "Serie.h"
#include "Video.h"
////////////////////////////////////////////
//  Eduardo Palencia Rodriguez A01424069  //
//   Juan Luis Soto Martinez A01751038	  //
//  J. Leonardo Perez Gonzalez A01424133  //
//         11 de Junio del 2020           //
////////////////////////////////////////////

Platforma::Platforma()
{
	cuantasPelculas = 2;
	cuantasSeries = 2;

	Pelicula *unVideo;
	for (int i = 0; i < cuantasPelculas; i++) {
		unVideo = new Pelicula('E', i, "Titulo", 120, "Accion", 5);
		catalogo.push_back(unVideo);
	}

	Serie* unaSerie;
	for (int i = 0; i < cuantasSeries; i++) {
		unaSerie = new Serie(2,cuantasPelculas+i,"Titulo",9,"Drama",4);
		catalogo.push_back(unaSerie);
	}
	
}

Platforma::Platforma(int p, int s)
{
	cuantasPelculas = p;
	cuantasSeries = s;

	Pelicula* unVideo;
	for (int i = 0; i < cuantasPelculas; i++) {
		unVideo = new Pelicula('E', i, "Una Pelicula", 120, "Accion", 5);
		catalogo.push_back(unVideo);
	}

	Serie* unaSerie;
	for (int i = 0; i < cuantasSeries; i++) {
		unaSerie = new Serie(2, cuantasPelculas + i, "Titulo", 9, "Drama", 5);
		catalogo.push_back(unaSerie);
	}
}

void Platforma::muestraPeliculas()
{
	for (int i = 0; i < cuantasPelculas; i++) {
		cout << catalogo[i]->getID() + 1 <<")"<<endl;
		catalogo[i]->imprimeDatos();
		
	}
}

void Platforma::muestraSeries()
{
	for (int i = 0; i < cuantasSeries; i++) {
		cout << catalogo[i + cuantasPelculas]->getID()+1<<") ";
		cout << "Titulo: " << catalogo [i + cuantasPelculas] -> getNombre();
		cout << "	Duracion: " << catalogo[i + cuantasPelculas]->getDuracion() << " Temporadas" << endl;
		cout << "Calificacion: " << catalogo[i + cuantasPelculas]->getCalificacion()<<endl;
	}
}


void Platforma::muestraCatalogo()
{	
	cout << "Peliculas " << endl;
	muestraPeliculas();

	cout << "Series" << endl;
	muestraSeries();
}

void Platforma::calificaVideo(int  index, double calif)
{
	catalogo[index]->setCalificacion(calif);
}

void Platforma::filtraCalificacion(double _cali)
{
	int _cal = (int) _cali;
	int largo = cuantasPelculas + cuantasSeries;
	for (int i = 0; i < largo ; i++) {
		if (catalogo[i]->getCalificacion() == _cal) {
			catalogo[i]->imprimeVideo();
		}
	}
}

void Platforma::filtraGenero(string _gen)
{
	int largo = cuantasPelculas + cuantasSeries;
	for (int i = 0; i < largo; i++) {
		if (catalogo[i]->getGenero() == _gen) {
			catalogo[i]->imprimeVideo();
		}
	}
}

void Platforma::filtraAmbos(double _cali, string _gen)
{
	vector<Video*> temporal;
	int _cal = (int)_cali;
	int largo = cuantasPelculas + cuantasSeries;
	for (int i = 0; i < largo; i++) {
		if (catalogo[i]->getCalificacion() == _cal) {
			temporal.push_back(catalogo[i]);
		}
	}
	int  largo2=temporal.size();
	for (int i = 0; i < largo2; i++) {
		if (temporal[i]->getGenero() == _gen) {
			temporal[i]->imprimeVideo();
		}
	}
}





Platforma::~Platforma()
{
}
