#include <iostream>
#include<time.h>
using namespace std;

void InsertionSort(int tab[], int size){
    int counter=0;
    for(int i=0;i<size;i++){
        int tmp=tab[i];
        int j;
        for(j=i-1;j>=0;j--){
            counter++;
            if(tab[j]>tmp){
                tab[j+1]= tab[j];
            }else{
                break;
            }
        }
        tab[j+1]=tmp;
    }
    cout<<"liczba porownan to "<<counter<<endl<<endl;
}
int main() {
	
	
	int tab[10]={15, 2, 11, 3, 9, 4, 9, 6, 8, 7};

    cout << "Tablica przed sortowaniem: " << endl;
    for (int i = 0; i < 10; i++)
        cout <<tab[i] << endl;
    cout << endl;
	
	InsertionSort(tab,10);
	
    cout<<"Tablica posortowana."<<endl;
	for(int i=0; i<10; i++) {
		cout<<tab[i]<<endl;
	}
	
	return 0;
}