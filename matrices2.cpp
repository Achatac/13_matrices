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

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "[" << i + 1 << "] [" << j + 1 << "] "<< " : ";  cin >> matriz[i][j];
        }
    }

    cout << "La matriz es:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    


    return 0;
}