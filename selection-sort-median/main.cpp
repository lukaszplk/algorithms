#include <iostream>
using namespace std;

template<typename T> void swap(T *a, T *b)
{
    T tmp = *a;
    *a = *b;
    *b = tmp;
}

template<typename T> void selectionSort(T tab[], int n)
{
    int min;
 
    for (int i = 0; i < n - 1; i++){
        min = i;
        for (int j = i + 1; j < n; j++){
            if (tab[j] < tab[min]){
                min = j;
            }    
        }       
 
        swap(&tab[min], &tab[i]);
    }
    
}

template<typename T> T median(T tab[], int n){
    T tmp;
    if(n%2==0){
        tmp = (tab[n/2-1] + tab[n/2])/2;
    }else{
        tmp = tab[n/2];
    }
    
    return tmp;
}

int main(){

    char type;
    int n;

    cin>>type;

    if(type=='i'){
        int tmp, suma;
        int *tab;
        cin>>n;
        tab = new int[n];
        for(int i=0;i<n;i++){
            cin>>tmp;
            tab[i]=tmp;
        }

        selectionSort(tab, n);

        suma = median(tab, n);

        cout<<suma;

        delete [] tab;

    }else if(type=='d'){
        double tmp, suma;
        double *tab;
        cin>>n;
        tab = new double[n];
        for(int i=0;i<n;i++){
            cin>>tmp;
            tab[i]=tmp;
        }

        selectionSort(tab, n);

        suma = median(tab, n);

        cout<<suma;

        delete [] tab;

    }

    return 0;
}