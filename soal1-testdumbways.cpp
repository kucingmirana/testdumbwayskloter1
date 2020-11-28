// Example program
#include <iostream>
#include <string>
using namespace std;

void tentukanOlahraga(int kalori){
    cout<< "jumlah kalori:" << kalori <<"\n";
    cout<< "jenis olahraga: ";
    if(kalori > 750){
        cout<<"lari";
    }
    else if(kalori> 500){
        cout<<"badminton";
    }
    else{
        cout<<"renang";
    }
    
    cout<<"\n";
    
    int waktuOlahraga = kalori / 10;
    
    cout<<"waktu olahraga: " << waktuOlahraga<< " menit";
    
}

int main()
{
  int kalori;
  cout << "masukan total kalori andi: ";
  cin>>kalori;
  tentukanOlahraga(kalori);
}
