#include <iostream>
using namespace std;
int main(){
    int jam;
    int pil;
    cout<<" Konversi waktu dari jam ke Minggu dan Hari "<<endl;
    cout<<" by.Muhammad Rafi Farhan 202131145 "<<endl;
    cout<<"  "<<endl;
    cout<<"  "<<endl;
    
    
    cout<<"pilih 1 untuk melanjutkan pilih 0 untuk keluar = ";
    cin>>pil;
    
    switch(pil){
	case 0 :
	exit(0);
	break;
	case 1 :
	cout<<"Masukkan waktu dalam jam = ";
	cin>>jam;
	cout<<endl;
	
	
    cout<<"Hasil konversi waktu anda adalah: \n";
    cout<<jam<<" Jam\n";
    cout<<jam/24<<" Hari\n";
    cout<<jam/170<<" Minggu\n";
    break;	
	}
   
    
    
return 0;
}

