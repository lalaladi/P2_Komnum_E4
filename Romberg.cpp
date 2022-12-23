//	"Soal : integral 1/(1+x) "
#include<iostream>
#include<math.h>
#include<iomanip>
#include<windows.h>
using namespace  std;

double g(double x){
	return (1/(1+x));
}
int main(){
	cout.precision(4);
	cout.setf(ios::fixed);
	double bawah[100], atas,h,f[100], f0=0,f1=0,ha[100],fgb[100],z,fg,b[100],c[100],d[100];
	int n,i,a,j,k,l;
	cout<<"Metode Romberg"<<endl;
	cout<<endl;
	cout<<"Masukkan batas bawah: ";
	cin>>bawah[0];
	cout<<"Masukkan batas atas: ";
	cin>>atas;
	cout<<"Masukkan nilai k: ";
	cin>>n;
	l=pow(2,n);
	cout<<"maka jumlah pias(2^k): "<<l<<endl<<endl;
	h=(atas-bawah[0])/l;
	cout<<setw(10)<<"r"<<setw(10)<<"Xr"<<setw(10)<<"Fr"<<endl;
	
	for(i=0;i<=l;i++){
		cout<<setw(10)<<i;
		f[i]=g(bawah[i]);
		cout<<setw(10)<<bawah[i];
		cout<<setw(10)<<f[i]<<endl;
		bawah [1+i]=bawah[i]+h;
	}
	
	cout<<endl;
	for(i=0;i<=n;i++){
		ha[i]=(atas-bawah[0])/pow(2,i);
		z=0;
		fg=0;
		for(j=1;j<l;j++){
			z=z+ha[i];
			for(k=0;k<l;k++){
				if(bawah[k]==z){
					fg=fg+(2*f[k]);
				}
			}
		}
		fgb[i]=(ha[i]/2)*(fg+1.5);
		cout<<"A"<<i<<": "<<fgb[i]<<endl;
	}
	cout<<endl;
	for(i=1;i<=n;i++){
		b[i]=fgb[i]+((fgb[i]-fgb[i-1])/3);
		cout<<"B"<<i<<": "<<b[i]<<endl;
	}
	cout<<endl;
	for(i=2;i<=n;i++){
		c[i]=b[i]+((b[i]-b[i-1])/15);
		cout<<"C"<<i<<": "<<c[i]<<endl;
	}
	cout<<endl;
	for(i=3;i<=n;i++){
		d[i]=c[i]+((c[i]-c[i-1])/63);
		cout<<"D"<<i<<": "<<d[i]<<endl;
	}
	cout<<endl;
	
	cout<<setw(10)<<"k"<<setw(10)<<"O(h^2)"<<setw(10)<<"O(h^4)"<<setw(10)<<"O(h^6)"<<setw(10)<<"O(h^8)"<<endl;
	for(i=0;i<=n;i++){
	cout<<setw(10)<<i;
	cout<<setw(10)<<fgb[i];
	cout<<setw(10)<<b[i];
	cout<<setw(10)<<c[i];
	cout<<setw(10)<<d[i]<<endl;
	}
	
	cout<<endl<<endl<<"hasilnya adalah : "<<d[n];
}

