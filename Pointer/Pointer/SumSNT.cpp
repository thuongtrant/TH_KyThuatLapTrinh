//#include <iostream>
//#include <cstdlib>
//using namespace std;
//bool CheckSNT(int n)
//{
//	if (n < 2)
//	{
//		return false;
//	}
//	else 
//		for (int i = 2; i < sqrt(n); i++)
//		{
//			if (n % i == 0)
//				return false;
//		}
//	return true;
//}
//int main()
//{
//	int** a, r, c, dem = 0;
//	a = new int* [r];
//	for (int i = 0; i < r; i++)
//	{
//		a[i] = new int[r];
//	}
//	cout << " Xuat mang: " << endl;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; i < c; j++)
//		{
//			*(*(a + i) + j) == rand() % 20;
//			cout << *(*(a + i) + j) << " ";
//			if (CheckSNT(a[i][j]))
//				dem++;
//		}
//		cout << endl;
//	}
//
//	cout << "So chu so nguyen to trong mang: " << dem << endl;
//	/*for (int i = 0; i < r; i++)
//
//		delete[]a[i];
//	delete[]a;*/
////a = 0;
//	return 0;
//}