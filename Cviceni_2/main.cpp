#include <iostream>
#include <cmath>
#include <fstream>

using namespace std ;

 int main () {
    
    cout << "Vítá Vás program pro zjištění všeho možného i nemožného." << "\n" ;
   
    cout << "\n" << "  Zadejte Vaše jméno: ";
    string Name ;
    cin >> Name ;
   
    cout << "\n" << "  Zadejte Vaše příjmení: ";
    string Surname ;
    cin >> Surname ;


    int Age ;
    int i = 0;
    while ( i < 1 ) {
    cout << "\n" << "  Zadejte Vaš věk [1-99]: ";
  
    cin >> Age ;
    if( Age > 0 && Age < 100 ) {
    i += 1 ;
    }
    else {
    cout << "\n" << "!!! Zadaná hodnota musí být v rozashu. !!!" << "\n";
    }
    }

    float Height ;
    i = 0;
    while ( i < 1) {
    cout << "\n" << "  Zadejte Vaši výšku [100-250 (cm)]: ";
    cin >> Height ;
    if( Height > 100 && Height<= 250 ) {
    i += 1 ;
    }
    else {
    cout << "\n" << "!!! Zadaná hodnota musí být v rozashu. !!!" << "\n";
    }   
    }

    cout << "\n" << "  Vyberte stupeň vzdělání (číslo): ";
    printf
    (
        "\n\n  [1] Základní vzdělání  \n" 
    
        "  [2] Středoškolské vzdělání bez maturity\n"

        "  [3] Středoškolské vzdělání s maturitou \n"

        "  [4] Vysokoškolské vzdělání \n"
    );

    int Degree_edu_var ;
    i = 0;
    
    while ( i < 1) 
    {
    cout << "\n" << "  Zadejte variantu: ";
    cin >> Degree_edu_var ;

    if( Degree_edu_var >= 1  && Degree_edu_var <= 4 ) 
    {
    i += 1 ;
    }
    else
    {
    cout << "\n" << "!!! Zadaná hodnota musí být v seznamu !!!" << "\n";
    }   
    }
    
    string Deegre ;

    if(Degree_edu_var==1) 
    {
        Deegre="Základní vzdělání";
    }
    else if(Degree_edu_var==2)    
    {
        Deegre="Středoškolské vzdělání bez maturity";
    }
    else if(Degree_edu_var==3)    
    {
        Deegre="Sředoškolské vzdělání s maturitou";
    }
    else if(Degree_edu_var==3)    
    {
        Deegre="Vysokoškolské vzdělání";
    }
  
   cout << "\n" << "Uživatel " << Name << " " << Surname << " ve věku " << Age << " let a výšce " << Height << " cm, při dosaženém vzdělání: " << Deegre << "." <<"\n" ;
   cout << "\n" ;

   ofstream out_file("Uzivatel.txt");
    out_file << Name <<"\n"<< Surname<<"\n"<< Age<<"\n" << Height<<"\n" << Deegre ;
    out_file.close();

   return 0 ;
   }