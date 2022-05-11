#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
<<<<<<< HEAD
    std::cout << "Hello Mundo!\n";
=======
    int select=0;

    cout << "\t---------------------" << endl;
    cout << "\tEJEMPLO v1.0 | MOANSO|" << endl;
    cout << "\t---------------------" << endl;

    do {
        system("cls");

        cout << "===================" << endl;
        cout << "\tINTGRANTES      ||" << endl;
        cout << "\n1. Melissa";
        cout << "\n2. Camila";
        cout << "\n3. Dicarlo";
        cout << "\n4. Joyce";
        cout << "\n5. Saul";
        cout << "\n6. Axel";
        cout << "\n\n7. Salir";
        cout << "===================" << endl;
        cout << "\nSelecciona una opción: ";
        cin >> select;


        switch (select) {
        case 1:
            cout << "\n\n'CAPTURA! CAPTURA! CAPTURA! CAPTURA! CAPTURA!'" << endl;
            this_thread::sleep_for(chrono::seconds(5));
            break;

        case 2:
            cout << "\n\nLa jefa del grupo." << endl;
            this_thread::sleep_for(chrono::seconds(5));
            break;
        case 3:
            cout << "\n\nEl que pone el 0 a los inactivos" << endl;
            this_thread::sleep_for(chrono::seconds(5));
            break;
        case 4:
            cout << "\n\nEl depresivo del grupo" << endl;
            this_thread::sleep_for(chrono::seconds(5));
            break;
        case 5:
            cout << "\n\nEl fantasma del grupo" << endl;
            this_thread::sleep_for(chrono::seconds(5));
            break;
        case 6:
            cout << "\n\nEl fantasma del grupo x2 XDDDDDD" << endl;
            this_thread::sleep_for(chrono::seconds(5));
            break;
        default:
            cout << "\n\nElige una opcion valida." << endl;
            this_thread::sleep_for(chrono::seconds(5));
            break;
        }


    } while (select != 7);
>>>>>>> origin/Joyce
}
