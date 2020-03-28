#include <iostream>
#include <cstdlib>
#include<time.h>
#include<stdio.h>
using namespace std;

int main() {
int liczba;
int wybor;
int ktory_wybor = 0;
    srand(time(NULL));
        cout<<"maszyna losujaca wylosujee liczbe z przedzialu 1-1000"<<endl;
        liczba = rand()%1000+1;

            while(wybor!=liczba){
            ktory_wybor++;
            cout<<"zgadnij jaka: ";
            cin>>wybor;
            cout<<"to twoj "<<ktory_wybor<<" wybor"<<endl;
            if  (wybor==liczba)cout<<"to ta liczba, udalo Ci sie zgadnac za"<<ktory_wybor<<" razem"<<endl;
            if  (wybor>liczba)cout<<"podana przez ciebie liczba jest za duza, probuj dalej"<<endl;
            else if  (wybor<liczba)cout<<" to za malo"<<endl;

            }
            system("pause");
	return 0;
}
