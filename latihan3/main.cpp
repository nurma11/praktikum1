
#include <iostream>

using namespace std;

int main()
{
 int x,nilai, bil, total=0;
 cout<< "Masukan Jumlah Nilai Yang Akan Di input =";
 cin>> nilai;
 for (x=1;x<=nilai;x++)
 {
     cout<<"Masukan Nilai ke " <<x<<"=";
     cin>>bil;
     total=total+bil;
     cout<<"\ntotal="<<total;
 }
    return 0;
}
