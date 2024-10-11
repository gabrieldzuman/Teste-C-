#include <iostream>
#include <limits> 
using namespace std;

float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b == 0) {
        cout << "Erro: Divisão por zero!" << endl;
        return 0;
    }
    return a / b;
}

float lerNumero() {
    float numero;
    while (true) {
        cin >> numero;
        if (cin.fail()) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Entrada inválida. Por favor, insira um número válido: ";
        } else {
            return numero;
        }
    }
}

int main() {
    int opcao;
    float valor1, valor2, resultado;
    
    do {
        cout << "\n--- Calculadora ---" << endl;
        cout << "1. Soma" << endl;
        cout << "2. Subtracao" << endl;
        cout << "3. Multiplicacao" << endl;
        cout << "4. Divisao" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao < 1 || opcao > 5) {
            cout << "Opcao invalida. Tente novamente." << endl;
            continue;
        }

        if (opcao == 5) {
            cout << "Saindo..." << endl;
            break;
        }

        cout << "Digite o primeiro numero: ";
        valor1 = lerNumero();
        cout << "Digite o segundo numero: ";
        valor2 = lerNumero();

        switch (opcao) {
            case 1:
                resultado = soma(valor1, valor2);
                cout << "Resultado da soma: " << resultado << endl;
                break;
            case 2:
                resultado = subtracao(valor1, valor2);
                cout << "Resultado da subtracao: " << resultado << endl;
                break;
            case 3:
                resultado = multiplicacao(valor1, valor2);
                cout << "Resultado da multiplicacao: " << resultado << endl;
                break;
            case 4:
                resultado = divisao(valor1, valor2);
                if (valor2 != 0) {
                    cout << "Resultado da divisao: " << resultado << endl;
                }
                break;
        }

    } while (true);

    return 0;
}
