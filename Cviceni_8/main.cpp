#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <algorithm>

#include  "Osoba.h"

bool dalsi_uziv();
void output_txt(std::vector<Osoba> vector_osob);
void output_screen(std::vector<Osoba> vector_osob);

int main ()
{
    //zadavánín uživatelů
    bool dalsi_uzivatel=1;
    std::vector<Osoba> vector_osob;
    
    while(dalsi_uzivatel)
    {
        Osoba Iterace_Osoby;
        Iterace_Osoby.Create();

        vector_osob.push_back (Iterace_Osoby);
        Iterace_Osoby.Vypis_obrazovka();

        dalsi_uzivatel = dalsi_uziv(); 

    }

    //sorting abecedně dle příjmení 
    std::sort(vector_osob.begin(), vector_osob.end());

    //výpis do souboru
    output_txt(vector_osob);
    output_screen(vector_osob);

return 0; 
}


bool dalsi_uziv()
{
    bool out;
    std::cout<<"Chcete zadat dalšího uživatele (Y/n)? ";
    std::string dalsi_uzivatel_pom;
        
    while (1)
    {
        std::cin>> dalsi_uzivatel_pom;
        std::cout<<"\n";

        if (dalsi_uzivatel_pom=="Y" | dalsi_uzivatel_pom=="y")
        {
            out=1;
            break;
        }
        else if (dalsi_uzivatel_pom=="N" | dalsi_uzivatel_pom=="n")
        {
            out=0;
            break;

        }
        else
        {
            std::cout<<"Nerozumím zkus to znovu! \n";
        }
    }
    return out;
}

void output_txt(std::vector<Osoba> vector_osob)
{

    std::ofstream out_file("Uzivatele.txt");
    out_file <<"Přijmení, Jméno, Věk, Výška, Vzdělání \n";

    for(Osoba Uzivatel : vector_osob)
    {
    out_file << Uzivatel.Surname << ", " << Uzivatel.Name  << ", " << Uzivatel.Age << ", " << Uzivatel.Height << ", " << Uzivatel.Degree << "\n";
    }
    out_file.close();



}

void output_screen(std::vector<Osoba> vector_osob)
{
    std::cout <<"Přijmení, Jméno, Věk, Výška, Vzdělání \n";
    
    for(Osoba Uzivatel : vector_osob)
    {
    std::cout << Uzivatel.Surname << ", " << Uzivatel.Name  << ", " << Uzivatel.Age << ", " << Uzivatel.Height << ", " << Uzivatel.Degree << "\n";
    }
}
