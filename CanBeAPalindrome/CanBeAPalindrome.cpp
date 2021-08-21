#include <iostream>
#define ASCII_VALUES 256

int main()
{
    const char* cuvant = "abab";
    //Initializam cu 0
    int count[ASCII_VALUES] = { 0 };

    for (int i = 0; cuvant[i]; i++)
    {
        count[cuvant[i]]++;
    }
    //Stocam numerele impare 
    int odd_count = 0;
    for (int i = 0; i < ASCII_VALUES; i++)
    {
        if (count[i] & 1)
        {
            odd_count++;
        }
    }
    if (odd_count > 1)//Daca avem mai mult de 1 cifra impara returnam false
    {
        std::cout << "Cuvantul nu poate fi permutat pentru a forma un palindrom!";
    }
    else//Returnam true daca count < 1
    {
        std::cout << "Cuvantul poate forma un palindrom.";
    }
}


