#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void wypisz(int tab[], int size) {
    for(int i=0;i<size;i++)
        cout << tab[i] << " ";
    cout << endl;
}

void countingsort(int tab[], int size, int max) {
    int *tmp = new int[max];

    for(int i=0;i<max;i++){
        tmp[i]=0;
    }

    for(int i=0;i<size;i++){
        tmp[tab[i]]++;
    }

    for(int i=0,j=0;i<max;i++){
        if(tmp[i]>0){
            for(int k=0;k<tmp[i];k++){
                tab[j]=i;
                j++;
            }
        }
    }
    delete [] tmp;
}



int main()
{
    srand(time(NULL));
    int t[10];
    for(int i=0;i<10;i++)
        t[i] = rand() % 10;

    cout<<"Tablica wejsciowa:"<<endl;
    wypisz(t, 10);
    countingsort(t, 10, 10);
    cout<<"\nTablica wyjsciowa:"<<endl;
    wypisz(t, 10);

    return 0;
}