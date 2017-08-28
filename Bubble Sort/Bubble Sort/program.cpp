#include <iostream>
#include <conio.h>
#include <ctime>
#define MAX 100
using namespace std;

void NhapTuDongMang(int n, int a[MAX]){     //tự động nhập các phần tử trong mảng
	srand(time(NULL));
	for (int i = 0; i < n; i++){
		a[i] = rand() % 20 + 1;
	}
}

void XuatMang(int n, int a[MAX]){          //xuất các phần tử của mảng
	for (int i = 0; i < n; i++){
		cout << a[i] << "\t";
	}
	cout << endl;
}

void HoanVi(int &a,int &b){
	int tam = a;
	a = b;
	b = tam;
}

void SapXep(int n, int a[MAX]){
	for (int i = 0; i < n; i++){
		for (int j = n - 1; j>i; j--){
			if ((a[j-1]%2==0 && a[j]%2!=0)||
				(a[j-1]%2!=0 && a[j]%2!=0 && a[j-1]>a[j])||
				(a[j-1]%2==0 && a[j]%2==0 && a[j-1]<a[j])

				){
				HoanVi(a[j], a[j - 1]);
				
			}
		}
	}
}

int main(){
	int n;
	int a[MAX];
	cout << endl << "Nhap vao so phan tu cua mang: ";
	cin >> n;
	NhapTuDongMang(n, a);
	cout << endl << "Xuat mang: ";
	XuatMang(n, a);
	SapXep(n, a);
	cout << endl << "ket qua sau khi sap xep: " << endl;
	XuatMang(n, a);
	system("pause");
}

