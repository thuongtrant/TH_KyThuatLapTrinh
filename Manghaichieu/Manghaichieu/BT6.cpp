//#include<cstdlib>
//#include <iostream>
//using namespace std;
//int main()
//{
//
//	int a[100][100];
//	int b[100][100];
//	int tong[100][100];
//	int tich[100][100];
//	int dong, cot;
//	do{
//		cout << "nhap so dong: ";
//		cin >> dong;
//		cout << "nhap so cot: ";
//		cin >> cot;
//		
//	} while (dong > 5 || cot > 6);
//	cout << "ma tran a" << endl;
//	for (int i = 0; i < dong; i++)
//	{
//		for (int j = 0; j < cot; j++)
//		{
//			a[i][j]=rand()%10;
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "ma tran b" << endl;
//	for (int i = 0; i < dong; i++)
//	{
//		for (int j = 0; j < cot; j++)
//		{
//			b[i][j] = rand() % 10;
//			cout << b[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "tong hai ma tran: " << endl;
//	for (int i = 0; i < dong; i++)
//	{
//		for (int j = 0; j < cot; j++)
//		{
//			tong[i][j] = a[i][j] + b[i][j];
//			cout << tong[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "tich hai ma tran: " << endl;
//	for (int i = 0; i < dong; i++)
//	{
//		for (int j = 0; j < cot; j++)
//		{
//			tich[i][j] = 0;
//			for (int k = 0; k < cot; k++)
//			{
//				tich[i][j] += a[i][k]*b[k][j];
//			}
//		}
//	}
//	for (int i = 0; i < dong; i++)
//	{
//		for (int j = 0; j < cot; j++)
//		{
//			cout << tich[i][j] << " ";
//		}
//		cout << endl;
//	}
//}