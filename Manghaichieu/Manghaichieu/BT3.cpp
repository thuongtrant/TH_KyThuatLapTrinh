//#include<cstdlib>
//#include <iostream>
//using namespace std;
//int main()
//{
//	int arr[100][100];
//int dong, cot, vtdmin,vtdmax,vtcmin,vtcmax;
//int tong = 0;
//
//
//	cout << "nhap so dong: ";
//	cin >> dong;
//	cout << "nhap so cot: ";
//	cin >> cot;
//
//for (int i = 0; i < dong; i++)
//{
//	for (int j = 0; j < cot; j++)
//	{
//		cin >> arr[i][j];
//	}
//}
//for (int i = 0; i < dong; i++)
//{
//	for (int j = 0; j < cot; j++)
//	{
//		cout <<  arr[i][j] << " ";
//	}
//	cout << endl;
//}
//for (int i = 0; i < dong; i++)
//{
//	for (int j = 0; j < cot; j++)
//	{
//		tong+= arr[i][j];
//	}
//}
//cout << "tong cac gia tri luu tru trong mang la: " << tong;
//int min = arr[0][0];
//for (int i = 0; i < dong; i++)
//{
//	for (int j = 0; j < cot; j++)
//	{
//		if (min > arr[i][j])
//		{
//			min = arr[i][j];
//			vtdmin = i;
//			vtcmin = j;
//		}
//	}
//}
//cout << "gia tri nho nhat trong mang la: " << min << endl;
//cout << "vi tri dong min la: " << vtdmin << endl;
//cout << "vi tri cot min la: " << vtcmin << endl;
//int max = arr[0][0];
//for (int i = 0; i < dong; i++)
//{
//	for (int j = 0; j < cot; j++)
//	{
//		if (max < arr[i][j])
//		{
//			max = arr[i][j];
//			vtdmax = i;
//			vtcmax = j;
//		}
//	}
//}
//cout << "gia tri lon nhat trong mang la: " << max << endl;
//cout << "vi tri dong max la: " << vtdmax << endl;
//cout << "vi tri cot max la: " << vtcmax << endl;
//}