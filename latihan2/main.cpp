
#include <iostream>

using namespace std;

int main()
{
   int i,n,max,min,nilai;

   cout<<"=====Mencari Bilangan Terbesar & Terkecil==== \n";
   cout<<"Masukan Banyak data :";
   cin>> n;
   cout<< "Masukan Nilai :";
   cin>> nilai;

   max=nilai;
   min=nilai;

   for(i=2;i<=n;i++){
    cout<<"Masukan Nilai :";
    cin>>nilai;
    if (nilai>max) max=nilai;
    if (nilai<min) min=nilai;
   }
    cout << "Nilai Terbesar adalah:" <<max<< "\nNilai Terkecil adalah:"<<min<< endl;
    return 0;
}
