
class Wumpus {
public:

    /* CONSTRUCTORES: */
    Wumpus();
    Wumpus(const Wumpus& orig);

    /* DESTRUCTOR: */
    virtual ~Wumpus();

    // EFE: retorna la identificación del cueva donde se encuentra el Wumpus.
    int obtPosicion();

    // REQ: 0 <= npw <= laberinto.
    // EFE: modifica la posición donde se encuentra el Wumpus a npw.
    void asgPosicion(int npw);

    // EFE: retorna true si el Wumpus está vivo.
    bool estaVivo();

    // EFE: cambia el estado a no vivo.
    void matar();

    // EFE: retorna true si el Wumpus está dormido.
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
    return 0; // modifique con su código
}

void Wumpus::asgPosicion(int npw) {
}

bool Wumpus::estaVivo() {
    return false; // modifique con su código
}

void Wumpus::matar() {
}

bool Wumpus::estaDormido() {
    return false; // modifique con su código
}

void Wumpus::despertar() {
}