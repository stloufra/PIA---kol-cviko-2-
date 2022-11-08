#include "Osoba.h"
#include <string>
#include <iostream>
#include <fstream>


Osoba::Osoba()
{
    Name="";
    Degree="";
    Surname="";
    
    Age-0;
    Height=0;
    Degree_edu_var=0;
}

void Osoba::Create()
{
    std::cout << "\n" << "  Zadejte Vaše jméno: ";
    std::cin >> Name ;
   
    std::cout << "\n" << "  Zadejte Vaše příjmení: ";
    std::cin >> Surname ;


    while ( !overeni_veku ) 
    {
        std::cout << "\n" << "  Zadejte Vaš věk [1-99]: ";
        std::cin >> Age ;
        Osoba::Overeni_veku();
    }

    while ( !overeni_vysky )
    {
        std::cout << "\n" << "  Zadejte Vaši výšku [100-250 (cm)]: ";
        std::cin >> Height ;
        Osoba::Overeni_vysky();
    }

    std::cout << "\n" << "  Vyberte stupeň vzdělání (číslo): ";
    printf
    (
        "\n\n  [1] Základní vzdělání  \n" 
    
        "  [2] Středoškolské vzdělání bez maturity\n"

        "  [3] Středoškolské vzdělání s maturitou \n"

        "  [4] Vysokoškolské vzdělání \n"
    );

    while ( !overeni_skoly )
    {
        std::cout << "\n" << "  Zadejte variantu: ";
        std::cin >> Degree_edu_var ;
        Osoba::Overeni_skoly();
    }    

    Osoba::Degree_sort();

}

void Osoba::Overeni_veku()
{
    if( Age > 0 && Age < 100 ) 
    {
        overeni_veku = 1;
    }
    else 
    {
        std::cout << "\n" << "!!! Zadaná hodnota musí být v rozashu. !!!" << "\n";
        overeni_veku = 0;
    }
        
    
}

void Osoba::Overeni_vysky()
{
    if( Osoba::Height >= 100 && Height<= 250 ) 
    {
        overeni_vysky = 1;
    }
    else 
    {
        overeni_vysky = 0;
        std::cout << "\n" << "!!! Zadaná hodnota musí být v rozashu. !!!" << "\n";
    }   
}

void Osoba::Overeni_skoly()
{
    if( Degree_edu_var >= 1  && Degree_edu_var <= 4 ) 
    {
        overeni_skoly = 1 ;
    }
    else
    {
        overeni_skoly = 0;
        std::cout << "\n" << "!!! Zadaná hodnota musí být v seznamu !!!" << "\n";
    }
}

void Osoba::Vypis_obrazovka()
{
    std::cout << "\n" << "Uživatel " << Name << " " << Surname << " ve věku " << Age << " let a výšce " << Height << " cm, při dosaženém vzdělání: " << Degree<< " ." <<"\n" ;
    std::cout << "\n" ;    
}

void Osoba::Vypis_soubor()
{
    std::ofstream out_file(Name+ "_"+ Surname + ".txt");
    out_file << Name <<"\n"<< Surname<<"\n"<< Age<<"\n" << Height<<"\n" << Degree ;
    out_file.close();
}

void Osoba::Degree_sort()
{
    if(Degree_edu_var==1) 
    {
        Degree="Základní vzdělání";
    }
    else if(Degree_edu_var==2)    
    {
        Degree="Středoškolské vzdělání bez maturity";
    }
    else if(Degree_edu_var==3)    
    {
        Degree="Sředoškolské vzdělání s maturitou";
    }
    else if(Degree_edu_var==4)    
    {
        Degree="Vysokoškolské vzdělání";
    }

}

bool operator < (const Osoba& u1, const Osoba& u2)
{
    return u1.Surname < u2.Surname;
}

Osoba::~Osoba()
{

}