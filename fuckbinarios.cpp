#include<iostream>
#include<vector>

using namespace std;

int sas(){
    int num,aux;
    vector<int> binario;
    cout<<"ingrese un numero:";
    cin>>num;

   
    system("cls");

    
    while (num > 0) {
        binario.push_back(num % 2); 
        num /= 2;
    }
    
    cout << "El numero en binario es: ";
    for (int i = binario.size() - 1; i >= 0; i--) {
        cout << binario[i];
    }
    cout << endl;

    
}

int main(){
    char va;
    while (true)
    {
    sas();
    
    cout<<"Desea continuar traduciendo numeros?(s/n)"<<endl;
    cin>>va;
    switch (va){

    case 'n':
        return 0;
        break; 
    }
    
 
}}