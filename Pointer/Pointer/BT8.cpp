//#include <iostream>
//#include<cstdlib>
//using namespace std;
//
////void nhap(int **a, int r, int c)
////{
////	for(int i=0;i<r;i++)
////	{
////		for(int j=0;i<c;j++)
////		{
////			cin >> a[i][j];
////		}
////	}
////}
////void xuat(int** a, int r, int c)
////{
////	for (int i = 0; i < r; i++)
////	{
////		for (int j = 0; i < c; j++)
////		{
////			cout <<  a[i][j] << " ";
////		}
////		cout << endl;
////	}
////}
//
//int giaithua(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return n * giaithua(n - 1);
//}
//int tohop(int n, int k)
//{
//	return  giaithua(n) / (giaithua(k) * giaithua(n - k));
//}
//void pascal(int h)
//{
//	if (h == 0)
//		cout << " 0";
//	else
//		pascal(h - 1);
//	cout << endl;
//	for (int i = 0; i < h; i++)
//	{
//		cout << tohop(h - 1, i) << " ";
//	}
//
//}
//int main()
//{
//	int** a;
//	int r, c;
//	cin >> r >> c ;
//	a = new int* [100];
//	
//	for (size_t i = 0; i < r; i++)
//	{
//		a[i] = new int[100];
//		//*(a + i) = new int[100];
//	}
//	/*for (size_t i = 0; i < 5; i++)
//	{
//		delete[] a[i];
//	}
//	delete[] a;*/	
//	for (size_t i = 0; i < r; i++)
//	{
//		for(size_t j=0;j<c;j++)
//		{
//			a[i][j] = rand() % 10;
//			//*(*(a + i) + j) = rand() % 10;
//		}
//	}
//	for (size_t i = 0; i < r; i++)
//	{
//		for (size_t j = 0; j < c; j++)
//		{
//			cout << a[i][j] << " ";
//			//cout << *(*(a + i) + j) << " ";
//		}
//		cout << endl;
//	}
//	int h;
//	cout << "nhap chieu cao cua tam giac pascal: ";
//	cin >> h;
//	pascal(h);
//	return 0;
//}