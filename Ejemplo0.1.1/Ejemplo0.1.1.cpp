#include <iostream>
using namespace std;

int main()
{
    int select=0;

    cout << "\t---------------------" << endl;
    cout << "\tEJEMPLO v1.0 | MOANSO" << endl;
    cout << "\t---------------------" << endl;

    do {
        system("cls");

        cout << "===================" << endl;
        cout << "\tIntegrantes" << endl;
        cout << "\n1. Melissa";
        cout << "\n2. Camila";
        cout << "\n3. Dicarlo";
        cout << "\n4. Joyce";
        cout << "\n5. Saul";
        cout << "\n\n6. Salir";
        cout << "===================" << endl;


        switch (select) {
        case 1:
            system("cls");
            cout << "'CAPTURA! CAPTURA! CAPTURA! CAPTURA! CAPTURA!'" << endl;
            break;

        case 2:
            system("cls");
            cout << "La jefa del grupo." << endl;
            break;
        case 3:
            system("cls");
            cout << "El que pone el 0" << endl;
            break;
        case 4:
            system("cls");
            cout << "El depresivo" << endl;
            break;
        case 5:
            system("cls");
            cout << "El fantasma" << endl;
            break;
        case 6:
            exit;
        }


    } while (select == 6);
}
