#include<iostream>
#include<time.h>
using namespace std;
 
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selectionSort(int tab[], int n)
{
    int min, counter=0;
 
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
    for (int j = i + 1; j < n; j++){
        if (tab[j] < tab[min]){
            min = j;
        }
        counter++;
    }
 
        swap(&tab[min], &tab[i]);
    }
    cout<<"liczba porownan to "<<counter<<endl<<endl;
}
 
 
int main()
{
 
    int tab[10]={15, 2, 11, 3, 9, 4, 9, 6, 8, 7};

    cout << "Tablica przed sortowaniem: " << endl;
    for (int i = 0; i < 10; i++)
        cout <<tab[i] << endl;
    cout << endl;
 
    selectionSort(tab, 10);

    cout << "Posortowana tablica: " << endl;
    for (int i = 0; i < 10; i++)
        cout <<tab[i] << endl;
    
 
    return 0;
}