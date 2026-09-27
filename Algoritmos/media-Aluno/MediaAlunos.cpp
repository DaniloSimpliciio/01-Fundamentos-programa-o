//Media da sala simples.
#include <iostream>
#include <iomanip>
using namespace std;
	
int main (void){
	
	cout<<fixed<<setprecision(2);
    string aluno;
    double nota,media,somaMedia=0;
    int alunos = 0;
    
    cout << "Entrada do aluno: "<<endl;
    for(int i=0; i<3; i++){
        cout << "aluno: "<< i + 1 << " ";
        cin >> aluno;
        alunos += i;
    }

    cout << "Entrada das notas: "<<endl;
    for(int i=0; i<3; i++){
        cout << "notas: "<< i + 1 << " ";
        cin >> nota;
        somaMedia += nota;
    }

    media = somaMedia/ alunos;

    cout << "media: "<< media<<setw(2);
}
