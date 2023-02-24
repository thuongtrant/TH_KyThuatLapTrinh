//#include <iostream>
//#include<cstdlib>
//using namespace std;
//void nhapmang(int arr[100][100], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << "a[" << i << "][" << j << "]= ";
//			 arr[i][j]=rand()%10;
//		}
//	}
//}
//void xuatmang(int arr[100][100], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//void tinhtong(int A[100][100], int B[100][100], int kq[100][100], int r, int c)
//{
//	
//	cout << "Tong hai ma tran: " << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			 kq[i][j] = A[i][j] + B[i][j];
//		}
//		cout << endl;
//	}
//}
//void tinhtich(int A[100][100], int B[100][100], int kq[100][100], int r1, int c1,int c2) {
//	cout << "Tich hai ma tran: " << endl;
//	for (int i = 0; i < r1; i++)
//	{
//		for (int j = 0; j < c2; j++)
//		{
//			kq[i][j] = 0;
//			for (int k = 0; k < c1; k++)
//			{
//				kq[i][j] += A[i][k] * B[k][j];
//
//			}
//		}
//	}
//	
//}
//int main()
//
//{
//	
//	int A[100][100];
//	int B[100][100];
//	int tich[100][100];
//	int tong[100][100];
//	int r1, c1, r2, c2;
//			do{
//		cout << "Nhap so dong cua ma tran A: ";
//		cin >> r1;
//		cout << "Nhap so cot cua ma tran A: ";
//		cin >> c1;
//		if (r1 > 100 || c1 > 100)
//			cout << "Nhap sai! Nhap lai!";
//		} while (r1 > 100 || c1 > 100);
//		
//		do {
//			cout << "Nhap so dong cua ma tran B: ";
//			cin >> r2;
//			cout << "Nhap so cot cua ma tran B: ";
//			cin >> c2;
//			if (r2 > 100 || c2 > 100)
//				cout << "Nhap sai! Nhap lai!";
//		} while (r2 > 100 || c2 > 100);
//		cout << "Nhap mang A: " << endl;
//		nhapmang(A, r1, c1);
//		cout << endl;
//		cout << "Xuat mang A: " << endl;
//		xuatmang(A, r1, c1);
//		cout << endl;
//		cout << "Nhap mang B: " << endl;
//		nhapmang(B, r2, c2);
//		cout << endl;
//		cout << "Xuat mang B: " << endl;
//		xuatmang(B, r2, c2);
//		cout << endl;
//		if( r1==r2 && c1==c2 )
//		{
//			tinhtong(A, B, tong, r1, c1);
//			xuatmang(tong, r1, c1);
//		}
//		if (c1 == r2)
//		{
//			tinhtich(A, B, tich, r1, c1, c2);
//			xuatmang(tich, r2, c2);
//		}
//	
//}