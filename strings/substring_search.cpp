#include <iostream>
#include <fstream>
#include<string>

using namespace std;

int main(){
    fstream plik;
    string nazwapliku, ciag;
    int licznik=0;    
            
    cout << "Podaj nazwe pliku: ";
    cin >> nazwapliku;    

    while(nazwapliku.compare("n") != 0){
        plik.open( nazwapliku, ios::in );
        
        if( !plik.good() ){
            cout << "Nie udalo sie otworzyc pliku!\nSprobuj jeszcze raz lub przerwij.(n)\n";
            cin >> nazwapliku;
        }else{
            while(!plik.eof()){
                getline(plik,ciag);                
                for(int i=0;i<=ciag.length()-2;i++){
                    if(ciag.substr(i,2).compare("ab")==0){
                        licznik++; 
                        
                    }
                }
            }   
            plik.close();
            printf("W pliku %s znajduje sie %d ciagow 'ab'.", nazwapliku.c_str(), licznik);
            break;
        }
    }
    return 0;
}