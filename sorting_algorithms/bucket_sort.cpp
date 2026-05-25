// Bucket Sort — distributes values into per-value buckets, sorts each, collects.
// Works correctly for non-negative integers in [0, max].

#include <iostream>
#include <ctime>
using namespace std;

void print_array(int tab[], int size) {
    for(int i = 0; i < size; i++) cout << tab[i] << " ";
    cout << endl;
}

void insert_sort(int tab[], int size){
    for(int i = 1; i < size; i++){
        int tmp = tab[i];
        int j;
        for(j = i - 1; j >= 0 && tab[j] > tmp; j--)
            tab[j + 1] = tab[j];
        tab[j + 1] = tmp;
    }
}

void bucket_sort(int tab[], int size, int max_val) {
    int **buckets = new int*[max_val + 1];
    int *counts   = new int[max_val + 1]();

    for(int i = 0; i <= max_val; i++)
        buckets[i] = new int[size];

    // distribute by value
    for(int i = 0; i < size; i++){
        int b = tab[i];
        buckets[b][counts[b]++] = tab[i];
    }

    // sort each bucket and collect back
    int n = 0;
    for(int i = 0; i <= max_val; i++){
        insert_sort(buckets[i], counts[i]);
        for(int j = 0; j < counts[i]; j++) tab[n++] = buckets[i][j];
        delete [] buckets[i];
    }
    delete [] buckets;
    delete [] counts;
}

int main(){
    srand(time(NULL));
    const int N = 20, MAX_VAL = 9;
    int t[N];
    for(int i = 0; i < N; i++) t[i] = rand() % (MAX_VAL + 1);

    cout << "Input:  "; print_array(t, N);
    bucket_sort(t, N, MAX_VAL);
    cout << "Sorted: "; print_array(t, N);
    return 0;
}
