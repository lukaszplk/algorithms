// Heap Sort implementation
// Builds a max-heap then repeatedly extracts the maximum.

#include <iostream>
#include <ctime>
using namespace std;

void swap(int *a, int *b){
    int tmp = *a; *a = *b; *b = tmp;
}

void heapify(int i, int size, int tab[]){
    int l = 2*i + 1;
    int r = 2*i + 2;
    int largest = i;
    if(l < size && tab[l] > tab[largest]) largest = l;
    if(r < size && tab[r] > tab[largest]) largest = r;
    if(largest != i){
        swap(&tab[i], &tab[largest]);
        heapify(largest, size, tab);
    }
}

void buildheap(int size, int tab[]){
    for(int i = size/2 - 1; i >= 0; i--) heapify(i, size, tab);
}

void heap_sort(int tab[], int size){
    buildheap(size, tab);
    for(int i = size - 1; i > 0; i--){
        swap(&tab[0], &tab[i]);   // move current max to end
        heapify(0, i, tab);        // restore heap on reduced range
    }
}

int main(){
    srand(time(NULL));
    const int N = 10;
    int t[N];
    for(int i = 0; i < N; i++) t[i] = rand() % 100;

    cout << "Input:  ";
    for(int i = 0; i < N; i++) cout << t[i] << ' ';

    heap_sort(t, N);

    cout << "\nSorted: ";
    for(int i = 0; i < N; i++) cout << t[i] << ' ';
    cout << endl;
    return 0;
}
