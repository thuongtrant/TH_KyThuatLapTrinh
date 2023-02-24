//#include<cstdlib>
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100];
//int dong, cot;
//int d;
//int c;
//int tongdong = 0;
//int tongcot = 0;
//do{
//	cout << "nhap so dong: ";
//	cin >> dong;
//	cout << "nhap so cot: ";
//	cin >> cot;
//} while (dong > 5 || cot > 6);
//for (int i = 0; i < dong; i++)
//{
//	for (int j = 0; j < cot; j++)
//	{
//		arr[i][j]=rand()%10;
//		cout << arr[i][j] << " ";
//	}
//	cout << endl;
//}
//cout << "nhap dong muon tinh tong: "; cin >> d;
//
//	for (int j = 0; j < cot; j++)
//	{
//		tongdong += arr[d][j];
//	}
//cout << " tong cac phan tu tren dong " << d << " la: " << tongdong << endl;
//cout << "nhap cot muon tinh tong: "; cin >> c;
//for (int i = 0; i < dong; i++)
//{
//	tongcot += arr[i][c];
//}
//cout << " tong cac phan tu tren dong " << c << " la: " << tongcot;
//int x;
//int dem = 0;
//cout << "nhap gia tri muon tim: "; cin >> x;
//for (int i = 0; i < dong; i++)
//{
//	for (int j = 0; j < cot; j++)
//	{
//		if (x == arr[i][j])
//		{
//			dem++;
//		}
//	}
//	
//}
//if (dem == 0)
//{
//	cout << "khong co gia tri " << x << " xuat hien";
//}
//else
//	cout << x << " xuat hien " << dem << " lan";
//
//}