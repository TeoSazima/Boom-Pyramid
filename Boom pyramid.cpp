#include <iostream>
#include <ctime>

using std::cin;
using std::cout;

void vypsaniPole() {
    int z = 8;
    for (int i = 2; i < 11; i++)
    {
        for (int i = z; i > 0; i--)
        {
            cout << " ";
        }
        z--;
        for (int x = 1; x < i + 1; x++)
        {
            cout << x << " ";
        }

        cout << std::endl;
    }
    
}

int main()
{
    
    srand(time(NULL));

    int nahodneCislo = 0;
    int bomby[9] = {};
    int vstup = 0;
    int preziti = 0;
    int index = 8;
    int kolo;
    
    bool hratelnost = true;
    bool debug = false;

    vypsaniPole();
   

    for (int i = 10; i > 1; i--)
    {
        nahodneCislo = rand() % i + 1;
        bomby[index] = nahodneCislo;
        index--;

    }

    if(debug) {

        for (int i = 0; i < 9; i++) {
        cout << bomby[i] << " ";
        cout << std::endl;

        }
    }
    cout << std::endl;
    index = 8;

    while (hratelnost) {

        cin >> vstup;

        if (vstup == bomby[index])
        {
            cout << "Bomba vybuchla" << std::endl;
            cout << "Hra skoncila. Uspesne jsi prezil: " << preziti << " kol.";
            hratelnost = false;
            return(1);

        }
        
        if (preziti >= 9)
        {
            cout << "Gratuluji vyhral jsi.";
            return(0);
        }
         
        cout << "Prezil jsi kolo" << std::endl << std::endl;
        preziti++;
        index--;


    }

    return(0);
}
