#include "iostream"
#include "string"
using namespace std;

void conv(string&, string, string);

int main(void)
{   
    string frase = "";
    
    /*Portada*/
    cout << "\nEJERCICIO 1\n\n";
    cout << "Introduzca la frase que desea convertir:\n";
    getline(cin, frase); //Para leer strings con espacios
    cout << endl;
    /*Encargados de buscar sus respectivas letras y cambiarlas*/
    conv(frase, "m", "0");
    conv(frase, "u", "1");
    conv(frase, "r", "2");
    conv(frase, "c", "3");
    conv(frase, "i", "4");
    conv(frase, "e", "5");
    conv(frase, "l", "6");
    conv(frase, "a", "7");
    conv(frase, "g", "8");
    conv(frase, "o", "9");

    cout << "La frase con el codigo murcielago aplicado es:\n" << frase << endl;

    cout << endl;
    return 0;
}

/*Se encarga de buscar y convertir las letras en codigo muricelago*/
void conv(string& frase, string buscar, string rempl)
{
    int pos = frase.find(buscar); //Se encarga de buscar la letra en la frase
    
    while (pos != -1)
    { 
        frase.replace(pos, buscar.size(), rempl); //Borra la letra que buscaba y la sustituye
        pos = frase.find(buscar, pos + rempl.size()); //Para buscar una letra mas de una vez

    }
    
}