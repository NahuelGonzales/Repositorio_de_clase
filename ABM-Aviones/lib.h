typedef struct
{
    char matricula[50];
    char fabricante[50];
    char modelo[50];
    int capacidad;
    int autonomia;
    int habilitado;
}eAvion;

typedef struct
{
    int idVuelo;
    int horario;
    char destino[50];
    char origen[50];
}eVuelos;


int vectorVacio(int cant);
int alta(eAvion aviones[],int indice);
int baja(eAvion aviones[],int tam);
void mostrarAvion(eAvion avion);
int BuscarIndice(eAvion aviones[], int tam, char matricula);

