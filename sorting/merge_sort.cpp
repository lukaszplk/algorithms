#include <iostream>
#include<time.h>
using namespace std;

void wypisz(int tab[], int size) {
    for(int i=0;i<size;i++)
        cout << tab[i] << " ";
    cout << endl;
}

void  merge(int tab[], int start, int middle, int stop){
    int total = stop - start + 1;
    int * tmp = new int [total];

    int left = start;
    int right = middle +1;
    int merge = 0;

    while(left<=middle && right<=stop){
        if(tab[left]<=tab[right]){
            tmp[merge] = tab[left];
            ++left;
        }else{
            tmp[merge]=tab[right];
            ++right;
        }
        ++merge;
    }

    while(left<=middle){
        tmp[merge]=tab[left];
        ++left;
        ++merge;
    }

    while(right<=stop){
        tmp[merge]=tab[right];
        ++right;
        ++merge;
    }

    for(int i=0;i<total;i++){
        tab[start + i] = tmp[i];
    }

    delete [] tmp;
}

void merge_sort(int tab[], int start, int stop){
    if(start<stop){
        int middle = (start + stop) / 2;
        merge_sort(tab, start, middle);
        merge_sort(tab, middle + 1, stop);
        merge(tab, start, middle, stop);
    }
}


int main() {
	
	
	srand(time(NULL));
    int t[20];
    for(int i=0;i<20;i++){
        t[i] = rand() % 10;
    }
    cout<<"Tablica wejsciowa:"<<endl;
    wypisz(t, 20);
    merge_sort(t, 0, 19);
    cout<<"\nTablica wyjsciowa:"<<endl;
    wypisz(t, 20);

    return 0;
}