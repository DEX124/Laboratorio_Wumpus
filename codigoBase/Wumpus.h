
class Wumpus {
public:

    /* CONSTRUCTORES: */
    Wumpus();
    Wumpus(const Wumpus& orig);

    /* DESTRUCTOR: */
    virtual ~Wumpus();

    // EFE: retorna la identificaci�n del cueva donde se encuentra el Wumpus.
    int obtPosicion();

    // REQ: 0 <= npw <= laberinto.
    // EFE: modifica la posici�n donde se encuentra el Wumpus a npw.
    void asgPosicion(int npw);

    // EFE: retorna true si el Wumpus est� vivo.
    bool estaVivo();

    // EFE: cambia el estado a no vivo.
    void matar();

    // EFE: retorna true si el Wumpus est� dormido.
    bool estaDormido();

    // EFE: cambia el estado a no dormido.
    void despertar();

private:
    int posicion;
    bool vivo;
    bool dormido;
};

Wumpus::Wumpus() {
}

Wumpus::Wumpus(const Wumpus& orig) {
}

Wumpus::~Wumpus() {
}

int Wumpus::obtPosicion() {
    return 0; // modifique con su c�digo
}

void Wumpus::asgPosicion(int npw) {
}

bool Wumpus::estaVivo() {
    return false; // modifique con su c�digo
}

void Wumpus::matar() {
}

bool Wumpus::estaDormido() {
    return false; // modifique con su c�digo
}

void Wumpus::despertar() {
}