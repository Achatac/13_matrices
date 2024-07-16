//matriz de dimension n x 3n
#include <iostream>
using namespace std;

void generaMatriz (int n);

void generaMatriz (int n){

    int fil = n, colum = 3 * n;
    int matriz[fil][colum];

    for (int i = 0; i < fil; i++){
        for (int j = 0; j < colum; j ++){
            matriz[i][j] = 0;
        }
    }




}

int main (){

    int n;
    cout << "Ingrese el valor de 'n' para generar una matriz de orden (n x 3n): "; cin >> n;


    return 0;
}

