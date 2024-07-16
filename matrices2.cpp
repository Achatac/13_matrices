//Suma de elementos de la diagonal secundaria de una matriz cuadrada
#include <iostream>
using namespace std;
int main (){

    int suma (int n, int matriz[n][100]);

    int suma (int n, int matriz[n][100]){
        int sumatoria = 0;
        for (int i = 0; i < n; i++){
            sumatoria += matriz[i][n - i - 1];
        }
        return sumatoria;
    }


    int n;
    cout << "Ingrese el tamanio de la matriz cuadrada: "; cin >> n;
    int matriz[n][100];




    return 0;
}