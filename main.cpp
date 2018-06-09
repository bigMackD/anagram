//
//  main.cpp
//  anagramy_nowe
//
//  Created by Maciej Drozdowicz on 09.03.2017.
//  Copyright © 2017 Maciej Drozdowicz. All rights reserved.
//

#include <iostream>
using namespace std;
string slowo1,slowo2;
int tab[265];
int ok;
int main(int argc, const char * argv[]) {
    cout << "Czy to anagramy?" << endl;;
    cout << "Podaj pierwsze slowo: ";
    cin >> slowo1;
    cout << "Podaj drugie slowo: ";
    cin >> slowo2;
   int  d=slowo1.length();
    for(int i=0;i<=d-1;i++)
    {
       // char z = slowo1[i];
       // tab[z]++;
        tab[slowo1[i]]++;
    }
    int d1=slowo2.length();
    for(int i=0;i<=d1-1;i++)
    {
        tab[slowo2[i]]--;
        
    }
    for(int i=0; i<=255;i++)
    {
        if (tab[i]==0)
        {
            ok++;
        }
    }
    if(ok==256)
    {
        cout << "tak"<<endl;
        
    }
    else
        cout << "nie" << endl;
    
    return 0;
}
