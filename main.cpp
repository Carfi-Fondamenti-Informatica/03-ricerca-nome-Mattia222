#include <iostream>
#include <cstring>
using namespace std;

int main() {
   char lista_nomi[3][5] = {"", "", ""};
    char nome[5] = {""};

    cin >> lista_nomi[0];
    cin >> lista_nomi[1];
    cin >> lista_nomi[2];
    cout << endl;

    cin >> nome;

    if((strcmp(nome,lista_nomi[0])==0)){
        cout << 0;
    } else if((strcmp(nome,lista_nomi[1])==0)){
        cout << 1;
    }else if((strcmp(nome,lista_nomi[2])==0)){
        cout <<2;
    }
   return 0;
}
