////viết chương trình dùng cấp phát động của con trỏ để viết hàm nhập, xuất 1 mảng số nguyên r hàng và c cột.sau đó viết hàm dùng con trỏ để tính tổng các phần tử nào là số nguyên tố.
//
//#include <iostream>
//#include <cstdlib>
//#include <math.h>
//using namespace std;
//
////void nhap(int** a, int r, int c)
////{
////	for (int i = 0; i < r; i++)
////	{
////		for (int j = 0; i < c; j++)
////		{
////			a[i][j] = rand() % 10;
////		}
////	}
////}
////void xuat(int** a, int r, int c)
////{
////	for (int i = 0; i < r; i++)
////	{
////		for (int j = 0; i < c; j++)
////		{
////			cout << a[i][j] << " ";
////		}
////		cout << endl;
////	}
////}
////bool checksnt(int n)
////{
////	//bool n = true;
////	if (n < 2)
////		return false;
////	for (int i = 2; i < sqrt(n); i++)
////	{
////		if (n % i == 0)
////		{
////			return false;
////		}
////	}
////	return true;
////}
//
//
//void xuatnguyento(int** a, int r, int c)
//{
//	int tong = 0;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//			if (a[i][j] >= 2) 
//			{
//				int d = 0; 
//				
//				for (int k = 2; k <= a[i][j] / 2; k++) 
//				
//					if (a[i][j] % k == 0)d++;
//					if (d == 0)
//					{
//						cout << a[i][j] << '\t';
//						tong += a[i][j];
//					}
//				
//			}
//	}
//	cout << "\n tong cac so nguyen to la: " << tong;
//}
//int main()
//{
//	int** a;
//	a = new int* [100];
//	int r, c;
//	cout << " nhap so dong: ";
//	cin >> r;
//	cout << " nhap so cot: ";
//	cin >> c;
//	for (int i = 0; i < r; i++)
//	{
//		a[i] = new int[100];
//	}
//
//
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			a[i][j] = rand() % 10;
//		}
//
//	}
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	cout << endl;
//
//	xuatnguyento(a, r, c);
//}