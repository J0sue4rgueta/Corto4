#include "iostream"
using namespace std;

void DefinirArreglo(float []);
void promedio(float []); 

int main(void)
{
    float cal[5]; 
    int alumn = 1, n = 0;

    /*Portada*/
    cout << "\nEJERCICIO 3\n";
    cout << "Instrucciones: Las notas se introduciran en base 10.\n\n";
    cout << "Introduzca el numero de estudiantes: ";
    cin >> n;
    cout <<  endl;

    /*Enlista los estudiantes*/
    for ( alumn = 1; alumn <= n; alumn++)   
    {
        cout << "----- ESTUDIANTE " << alumn << " -----\n"; 
        /*Define los elementos del array*/
        DefinirArreglo(cal);
        /*Saca las notas*/
        promedio(cal);

    }

    return 0;
}

/*Se encarga de asignarle los elementos al array*/
void DefinirArreglo(float a[ ])
{   
    int i;

    cout << "\nDigite las 5 notas del estudiante:\n";
    for(i = 0; i < 5; i++)
    cin >> a[i];
        
}

/*Se encarga de sacar los promedios de los estudiantes y mostrarlo*/
void promedio(float a[]) 
{ 
    float prom; 
    prom = (a[0] + a[1] + a[2] + a[3] + a[4]) / 5; 
    
    /*Imprime los resultados*/
    if(prom < 6)
    {
        cout<< "El promedio del alumno es: " << prom;
        cout << "\nEl estudiante ha reprobado\n\n";

    } else {

        cout<< "El promedio del alumno es: " << prom;
        cout << "\nEl estudiante ha aprobado\n\n";
                       
    }

} 