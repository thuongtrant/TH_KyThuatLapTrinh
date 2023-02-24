//#include<cstdlib>
//#include <iostream>
//using namespace std;
//int main()
//{
//	////bài 1
//	
//	//int arr[3][4] = {
//	//	{ 8, 4, -1, 5},
//	//	{ 2, 2, 6, 9},
//	//	{ 11, 2, 5, 4}
//	//};
//	//for (int i = 0; i < 3; i++)
//	//{
//	//	for (int j = 0; j < 4; j++)
//	//	{
//	//		cout << arr[i][j];
//	//	}
//	//	cout << endl;
//	//}
//	//
//
//	////bài 2
//
//	//int cot, dong;
//	//
//	//int i = 0;
//	//int j = 0;
//	//while (dong )
//	//{
//	//	
//	//	cout << "nhap cot";
//	//	cin >> i;
//	//	
//	//	while (cot <4)
//	//	{
//	//		cin >> j;
//	//	}
//	//	dong++;
//	//	cot++;
//	//}
//
//	//bài 3
//
//	//int arr[100][100];
//	//int dong, cot, vtdmin,vtdmax,vtcmin,vtcmax;
//	//int tong = 0;
//	//
//	//do{
//	//	cout << "nhap so dong: ";
//	//	cin >> dong;
//	//	cout << "nhap so cot: ";
//	//	cin >> cot;
//	//} while (dong > 10 || cot > 15);
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		cin >> arr[i][j];
//	//	}
//	//}
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		cout <<  arr[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		tong+= arr[i][j];
//	//	}
//	//}
//	//cout << "tong cac gia tri luu tru trong mang la: " << tong;
//	//int min = arr[0][0];
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		if (min > arr[i][j])
//	//		{
//	//			min = arr[i][j];
//	//			vtdmin = i;
//	//			vtcmin = j;
//	//		}
//	//	}
//	//}
//	//cout << "gia tri nho nhat trong mang la: " << min << endl;
//	//cout << "vi tri dong min la: " << vtdmin << endl;
//	//cout << "vi tri cot min la: " << vtcmin << endl;
//	//int max = arr[0][0];
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		if (max < arr[i][j])
//	//		{
//	//			max = arr[i][j];
//	//			vtdmax = i;
//	//			vtcmax = j;
//	//		}
//	//	}
//	//}
//	//cout << "gia tri lon nhat trong mang la: " << max << endl;
//	//cout << "vi tri dong max la: " << vtdmax << endl;
//	//cout << "vi tri cot max la: " << vtcmax << endl;
//
//	//bài 4
//
//	//int arr[100][100];
//	//int dong, cot;
//	//int d;
//	//int c;
//	//int tongdong = 0;
//	//int tongcot = 0;
//	//do{
//	//	cout << "nhap so dong: ";
//	//	cin >> dong;
//	//	cout << "nhap so cot: ";
//	//	cin >> cot;
//	//} while (dong > 5 || cot > 6);
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		arr[i][j]=rand()%10;
//	//		cout << arr[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	//cout << "nhap dong muon tinh tong: "; cin >> d;
//	//
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		tongdong += arr[d][j];
//	//	}
//	//cout << " tong cac phan tu tren dong " << d << " la: " << tongdong << endl;
//	//cout << "nhap cot muon tinh tong: "; cin >> c;
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	tongcot += arr[i][c];
//	//}
//	//cout << " tong cac phan tu tren dong " << c << " la: " << tongcot;
//	//int x;
//	//int dem = 0;
//	//cout << "nhap gia tri muon tim: "; cin >> x;
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		if (x == arr[i][j])
//	//		{
//	//			dem++;
//	//		}
//	//	}
//	//	
//	//}
//	//if (dem == 0)
//	//{
//	//	cout << "khong co gia tri " << x << " xuat hien";
//	//}
//	//else
//	//	cout << x << " xuat hien " << dem << " lan";
//	//
//	
//
//	//bài 5
//
//	//int arr[100][100];
//	//int dong, cot;
//	//int tongchinh = 0;
//	//int tongphu = 0;
//	//do{
//	//	cout << "nhap so dong: ";
//	//	cin >> dong;
//	//	cout << "nhap so cot: ";
//	//	cin >> cot;
//	//	
//	//} while (dong > 5 || cot > 6);
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		arr[i][j]=rand()%10;
//	//		cout << arr[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	//	for (int i = 0; i < cot; i++)
//	//	{
//	//		tongchinh += arr[i][i];
//	//	}
//	//cout << "tong cac phan tu tren duong cheo chinh la: " << tongchinh;
//	//for (int i = 0; i < cot; i++)
//	//{
//	//	tongphu += arr[i][cot - i - 1];
//	//}
//	//cout << "tong cac phan tu tren duong cheo chinh la: " << tongphu;
//
//	
//	//bài 6
//
//	//int a[100][100];
//	//int b[100][100];
//	//int tong[100][100];
//	//int tich[100][100];
//	//int dong, cot;
//	//do{
//	//	cout << "nhap so dong: ";
//	//	cin >> dong;
//	//	cout << "nhap so cot: ";
//	//	cin >> cot;
//	//	
//	//} while (dong > 5 || cot > 6);
//	//cout << "ma tran a" << endl;
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		a[i][j]=rand()%10;
//	//		cout << a[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	//cout << "ma tran b" << endl;
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		b[i][j] = rand() % 10;
//	//		cout << b[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	//cout << "tong hai ma tran: " << endl;
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		tong[i][j] = a[i][j] + b[i][j];
//	//		cout << tong[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	//cout << "tich hai ma tran: " << endl;
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		tich[i][j] = 0;
//	//		for (int k = 0; k < cot; k++)
//	//		{
//	//			tich[i][j] += a[i][k]*b[k][j];
//	//		}
//	//	}
//	//}
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//	{
//	//		cout << tich[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	
//	//bài 9
//
//	//nhập mảng 2 chiều theo dạng zigzag ngang
//
//	//int arr[100][100];
//	//int dong, cot;
//	//cout << "nhap so dong: "; cin >> dong;
//	//cout << "nhap so cot: "; cin >> cot;
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	if (i % 2 == 0)
//	//		for (int j = 0; j < cot; j++)
//	//			cin >> arr[i][j] ;
//	//	else
//	//		for (int j = cot - 1; j >= 0; j--)
//	//			cin >> arr[i][j];
//	//}
//	//for (int i = 0; i < dong; i++)
//	//{
//	//	for (int j = 0; j < cot; j++)
//	//		if (arr[i][j] >= 10)
//	//			cout << arr[i][j] << " ";
//	//		else
//	//			cout << " " << arr[i][j] << " ";
//	//	cout << endl << endl;
//	//}
//
//	//nhập mảng 2 chiều theo dạng zigzag dọc
//
//	//int arr[100][100];
//	//int dong, cot;
//	//cout << "nhap so dong: "; cin >> dong;
//	//cout << "nhap so cot: "; cin >> cot;
//	//for (int i = 0; i < cot; i++)
//	//{
//	//	if (i % 2 == 0)
//	//		for (int j = 0; j < dong; j++)
//	//			cin >> arr[i][j];
//	//	else
//	//		for (int j = dong - 1; j >= 0; j--)
//	//			cin >> arr[i][j];
//	//}
//	//for (int j = 0; j < dong; j++)
//	//{
//	//	for (int i = 0; i < cot; i++)
//	//		if (arr[i][j] >= 10)
//	//			cout << arr[i][j] << " ";
//	//		else
//	//			cout << " " << arr[i][j] << " ";
//	//	cout << endl << endl;
//	//}
//	
//
//	//bài 10
//	//nhập mảng hai chiều theo dạng xoắn ốc
//
////int arr[100][100];
////int r, c;
////int minr, minc, maxr, maxc;
////
//////cout << "Nhap so cot: "; cin >> c;
////int dem = 1;
////cout << "Nhap so dong: "; cin >> r;
////cout << "Nhap so cot: "; cin >> c;
////minr = minc = 0;
////maxr = r - 1;
////maxc = c - 1;
////
////while (dem <= r * c)
////{
////	for (int i = minc; i <= maxc; i++)
////	{
////		arr[minr][i] = dem;
////		dem++;
////	}
////	minr++;
////	for (int i = minr; i <= maxr; i++)
////	{
////		arr[i][maxc] = dem;
////		dem++;
////	}
////	maxc--;
////	for (int i = maxc; i >= minc; i--)
////	{
////		arr[maxr][i] = dem;
////		dem++;
////	}
////	maxr--;
////	for (int i = maxr; i >= minr; i--)
////	{
////		arr[i][minc] = dem;
////		dem++;
////	}
////	minc++;
////}
////cout << "Mang hai chieu theo hinh xoan oc  la: " << endl;
////for (int i = 0; i < r; i++)
////{
////	for (int j = 0; j < c; j++)
////	{
////		cout << arr[i][j] << " ";
////	}
////	cout << endl;
////}
////return 0;
////}
//
//void tinhtich(int a[100][100], int b[100][100], int tich[100][100], int dong1, int cot1, int cot2)
//{
//	for (int i = 0; i < dong1; i++)
//	{
//		for (int j = 0; j < cot2; j++)
//		{
//			tich[i][j] = 0;
//			for (int k = 0; k < cot1; k++)
//			{
//				tich[i][j] += a[i][k] * b[k][j];
//			}
//		}
//	}
//}
//
//void xuatziczac(int a[][20], int n, int m)
//{
//	int k = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (k % 2 != 0) cout << "\n";
//		else cout << "\n ";
//		for (int j = 0; j < m; j++)
//			cout << a[i][j] << " "; k++;
//	}
//}