#pragma once

#include <string>
using namespace std;

#include "ListaCuevasAdy.h"
#include "Cueva.h"
#include "Cazador.h"
#include "Wumpus.h"

class Laberinto {
    // Representa la red de cuevas o laberinto que recorre el cazador y en alguna
    // de las cuales se encuentra el Wumpus.
public:
    /* TIPO DE ESTRUCTURAS DE LABERINTOS */
    enum TipoPoliedroRegular {
       C, // representa al cubo
       D, // representa al dodecaedro
       I, // representa al icosaedro
       O, // representa al octaedro
       T  // representa al tetraedro
    };
    
    /* CONSTRUCTORES: */
    // EFE: construye un laberinto con estructura de dodecaedro.
    Laberinto();
    
    // EFE: construye un laberinto con la misma estructura y escenario que orig.
    Laberinto(const Laberinto& orig);
    
    // EFE: construye un laberinto con la estructura del poliedro p:
    Laberinto(TipoPoliedroRegular p);
    
    // EFE: construye un laberinto con la estructura representada en el archivo
    //      cuyo nombre es nombreArchivo.
    Laberinto(string nombreArchivo);
    
    /* DESTRUCTOR: */
    virtual ~Laberinto();
    
    /* MÉTODOS OBSERVADORES: */

    // REQ: que idCueva exista como identificación de alguna cueva en *this.
    // EFE: retorna el estado de la cueva con identificación idCueva.
    Cueva::Estado obtEstado(int idCueva) const;
    
    // EFE: retorna la cantidad de cuevas del laberinto.
    int obtCantidadCuevas() const;
    
    // REQ: que idCueva exista como identificación de alguna cueva en *this.
    // EFE: retorna un puntero a un arreglo de enteros con las identificaciones
    //      de las cuevas adyacentes a idCueva.
    // NOTA: el contexto invocador es responsable de aplicar delete[] al arreglo.
    int* obtCuevasAdy(int idCueva) const;

    // REQ: que idCueva exista como identificación de alguna cueva en *this.
    // EFE: retorna la cantidad de cuevas adyacentes a idCueva.
    int obtCantidadCuevasAdy(int idCueva) const;

    
    // REQ: que idCuevaOrigen y idCuevaObjetivo existan como identificaciones de
    //      de cueva en *this.
    // EFE: retorna -1 si el flechazo mata al cazador, 1 si el flechazo mata al
    //      Wumpus y 0 si no sucede nada con el flechazo.
    // NOTA: durante el juego idCuevaOrigen será la cueva en que se encuentra
    //       el cazador, mientras que idCuevaObjetivo es la dirección que 
    //       selecciona el jugador para la flecha, la cueva por donde sale.
    int obtResultadoFlechazo(int idCuevaOrigen, int idCuevaObjetivo) const;
    
    /* MÉTODOS MODIFICADORES: */
    
    // EFE: asigna un escenario al azar a *this.
    // NOTA: Por escenario se debe entender el estado de cada una de las cuevas 
    // incluyendo la ubicación del Wumpus y la posición inicial del cazador. 
    // La posición inicial del cazador siempre será en una cueva cuyo estado es Vacía.
    void asgEscenario();
    
    // REQ: !laberinto.wumpus.estaDormido() && laberinto.wumpus.estaVivo().
    // MOD: puede cambiar la posición del Wumpus.
    // EFE: aplica regla de movimiento al azar del Wumpus.
    void moverWumpusAzar();
    
    // REQ: laberinto.cazador.estaVivo().
    // MOD: la posición del cazador.
    // EFE: traslada al cazador a otra cueva seleccionada al azar.
    //      aplica la regla de traslado del cazador por los murciélagos.
    void moverCazadorAzar();

public:
    
    /* Se hacen públicas porque ambos están en el laberinto pero son visibles 
     * desde el controlador del juego (el main).
     */
    
    Cazador cazador;
    Wumpus wumpus;
    
private:
    
    /* Estructura de datos del Laberinto */
    struct NodoLaberinto{
        Cueva cueva; // cueva en el laberinto
        ListaCuevasAdy listaCuevasAdy; // lista de idCueva de cuevas adyacentes
        NodoLaberinto(){}; // sólo constructor estándar
    };

    int cantidadCuevas; // representa la cantidad de cuevas en el laberinto
    
    // puntero al arreglo de cuevas numeradas de 1 a N. No puede ser un 
    // shared_ptr porque estos no permiten el manejo de arreglos.
    NodoLaberinto* arregloCuevas;    
};

Laberinto::Laberinto(){
}

Laberinto::Laberinto(const Laberinto& orig){
}

Laberinto::~Laberinto() {
}

Laberinto::Laberinto(TipoPoliedroRegular p) {
}

Laberinto::Laberinto(string nombreArchivo) {
}

Cueva::Estado Laberinto::obtEstado(int idCueva) const {
    return Cueva::V;  // sustituya con su propio codigo
}

int Laberinto::obtCantidadCuevas() const {
    return 0;  // sustituya con su propio codigo
}

int* Laberinto::obtCuevasAdy(int idCueva) const {
    int* arreglo;
    return arreglo = 0;  // sustituya con su propio codigo
}

int Laberinto::obtCantidadCuevasAdy(int idCueva) const{
    return 0;  // sustituya con su propio codigo
}

int Laberinto::obtResultadoFlechazo(int idCuevaOrigen, int idCuevaObjetivo) const {
    return 0;  // sustituya con su propio codigo
}

void Laberinto::asgEscenario() {
}

void Laberinto::moverWumpusAzar() {
}

void Laberinto::moverCazadorAzar() {
}