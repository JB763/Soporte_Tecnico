#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
struct usuario
{
    char nombre[50];
    string usuario;
    string contrasena;
    string perfil;
};
struct ticket
{
    int id;
    string fecha;
    string hora;
    string usuario;
    string descripcion;
    string estado;
    string solucion;
};
struct empleado
{
    char nombre[50];
    string usuario;
    string contrasena;
    string perfil;
};
struct sucursales
{
    char nombre[50];
    string direccion;
    string telefono;
    string correo;
};
void gotoyx(int x, int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}
// funciones de menu declaradas
void crearUsuario(vector<usuario> &usuarios);
void loginUsuario();

int main()
{
    vector<usuario> usuarios;
    int opCuenta;

    // menu de inicio de sesion

    do
    {
        system("cls");
        gotoyx(75, 1);
        cout << "Perfil 1: Ingresos";
        gotoyx(75, 2);
        cout << "Perfil 2: Reportes";
        gotoyx(75, 3);
        cout << "Perfil 3: Administrativo";
        gotoyx(30, 6);
        cout << "===================================== ";
        gotoyx(35, 7);
        cout << "    SOPORTE TECNICO";
        gotoyx(30, 8);
        cout << "=====================================";
        gotoyx(30, 10);
        cout << "INGRESE CON SU USUARIO Y CONTRASENA---1";
        gotoyx(30, 11);
        cout << "CREAR UN USUARIO NUEVO----------------2";
        gotoyx(30, 12);
        cout << "SALIR DEL SISTEMA----------------------3";
        gotoyx(30, 14);
        cout << "Ingrese una opcion: ";
        cin >> opCuenta;

        switch (opCuenta)
        {
        case 1:
            // verifican perfil
            loginUsuario();
            break;

        case 2:
            // crear usuario
            crearUsuario(usuarios);
            break;

        case 3:
            // salir del sistema
            cout << "Gracias por usar el sistema";

            break;
        }

    } while (opCuenta != 3);
}
void crearUsuario(vector<usuario> &usuarios)
{
    // variables privadas de la funcion
    string continuousSelection;
    continuousSelection = "y";
    // Usnuevo es la variable que se va a guardar en el vector
    usuario Usnuevo;
    system("cls");
    gotoyx(30, 6);
    cout << "===================================== ";
    gotoyx(35, 7);
    cout << "    SIGN UP";
    gotoyx(30, 8);
    cout << "=====================================";
    gotoyx(30, 10);
    cout << "NOMBRE:";
    gotoyx(30, 11);
    cout << "USUARIO: ";
    gotoyx(30, 12);
    cout << "CONTRASEÑA: ";
    gotoyx(30, 13);
    cout << "PERFIL: ";
    do
    {
        // usuario nuevo ingresa sus datos
        gotoyx(45, 10);
        cin >> Usnuevo.nombre;
        gotoyx(45, 11);
        cin >> Usnuevo.usuario;
        gotoyx(45, 12);
        cin >> Usnuevo.contrasena;
        gotoyx(45, 13);
        cin >> Usnuevo.perfil;
        usuarios.push_back(Usnuevo);

        gotoyx(80, 21);
        cout << "Desea agregar otra cuenta?";
        gotoyx(107, 21);
        cin >> continuousSelection;
    } while (continuousSelection != "n");
}
void loginUsuario()
{
    string usuariobuscado;
    string contrasenabuscada;
    string perfilbuscado;
    system("cls");
    gotoyx(30, 6);
    cout << "===================================== ";
    gotoyx(35, 7);
    cout << "    LOG IN";
    gotoyx(30, 8);
    cout << "=====================================";
    gotoyx(30, 10);
    cout << "USUARIO:";
    gotoyx(30, 11);
    cout << "CONTRASEÑA: ";
    gotoyx(30, 12);
    cout << "PERFIL: ";

    do
    {
        bool cuentaEncontrada = false;
        gotoyx(45, 10);
        cin >> usuariobuscado;
        gotoyx(45, 11);
        cin >> contrasenabuscada;
        gotoyx(45, 12);
        cin >> perfilbuscado;

    } while ();
}
