#include "iostream"
using namespace std;

float promedio(float&);
void comp(float [] , float);

int main(void)
{
    float suma = 0, prom = 0, altura[25];  
    int alumn = 1, pos = 0;

    /*Portada*/
    cout << "\nEJERCICIO 2\n\n";

    for ( alumn = 1; alumn <= 25; alumn++)
    {
        /*Para introducir elementos a los array*/
        cout << "Ingrese la altura del estudiante " << alumn << "  en metros: ";
        cin >> altura[pos];

        suma += altura[pos]; // Hace la suma para sacar media
        pos++; //Numero de elemento del array

    }

    /*Saca el promedio de las alturas*/
    prom = promedio(suma); 
    /*Comprueba las alturas mayores o menores a la media*/
    comp(altura, prom);


    return 0;
}

/*Se encarga de sacar el promedio de las alturas*/
float promedio(float& suma) 
{ 
    float media; 
    media = (suma)/25; 
    return media;

} 

/*Se encarga de identificar los que son mayores o menores a la media*/
void comp(float altura[] ,float prom)
{
    float encima = 0, debajo = 0;
    int i;

    for (i = 0; i < 25; i++)
    {
        if(altura[i] < prom) //Busca del array de alturas los mayores o menores al promedio
        {
            debajo++;
            
        } else {

            encima++;
            
        }

    }

    /*Imprime el resultado*/
    cout << "\nLa cantidad de alturas mayores a la media es de: " << encima;
    cout << "\n";

    cout << "La cantidad de alturas menores a la media es de: " << debajo;
    cout << "\n\n";

}