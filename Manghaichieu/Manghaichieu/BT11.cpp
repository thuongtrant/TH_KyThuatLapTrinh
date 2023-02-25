#include <iostream>
using namespace std;
int main()
{
	char arr[100][100];
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; i < 6; j++)
		{
			arr[i][j] = '*';
		}
	}
	for (int i = 0; i < 14; i++)
	{
		if (i == 0)
		{
			for (char i = 'A'; i <= 'F'; i++)
			{
				cout << "\t";
				cout << i  ;
			}
		cout << endl;
		}
		else
		{
			cout << "Hang " << i << "\t";
			for (int j = 0; j < 6; j++)
			{
				cout << arr[i - 1][j] << "\t";
			}
			cout << endl;
		}
		
	}
	int choose;
	int n;
	comeback:
	do {
		cout << "Chon 1 neu muon dat ve thuong gia. \n" ;
		cout << "Chon 2 neu muon dat ve thuong.\n";
		cout << "Chon 3 neu muon dat ve tiet kiem.\n";
		cin >> choose;
		if (choose < 1 || choose >3)
		{
			cout << "Khong co lua chon nay! Vui long chon lai! \n";
		}
	} while (choose < 1 || choose >3);
	switch (choose)
	{
	case 1:
		cout << "Chon ghe muon ngoi: ";
		cin >> n;
		system("cls");
		for (int i = 0; i < 2; i++)
		{
			if (arr[i][n - 1] == '*')
			{
				arr[i][n - 1] = 'X';
				break;
			}
		}
		goto come;
		cout << "Ghe ban muon dat da het!";
		break;
	case 2:
		cout << "Chon ghe muon ngoi: ";
		cin >> n;
		system("cls");
		for (int i = 2; i < 7; i++)
		{
			if (arr[i][n - 1] == '*')
			{
				arr[i][n - 1] = 'X';
				break;
			}
		}
		goto come;
		cout << "Ghe ban muon dat da het!";
		break;
	case 3:
		cout << "Chon ghe muon ngoi: ";
		cin >> n;
		system("cls");
		for (int i = 7; i < 14; i++)
		{
			if (arr[i][n - 1] == '*')
			{
				arr[i][n - 1] = 'X';
				break;
			}
		}
		goto come;
		cout << "Ghe ban muon dat da het!";
		break;
	}
	
	//if (choose == 1)
	//{
	//	cout << " Chon so ghe: ";
	//	cin >> n;
	//	system("cls");
	//	for (int i = 0; i <=2; i++)
	//	{
	//			if (arr[i][n - 1] == '*')
	//		{
	//			arr[i][n - 1] = 'X';
	//			
	//		}
	//	}
	//	goto come;
	//}
	//else if(choose == 2)
	//{
	//	cout << " Chon so ghe: ";
	//	cin >> n;
	//	system("cls");
	//	for (int i = 2; i < 7; i++)
	//	{
	//		if (arr[i][n - 1] == '*')
	//		{
	//			arr[i][n - 1] = 'X';
	//		
	//		}
	//	}
	//	goto come;
	//}
	//else if (choose == 3)
	//{
	//	cout << " Chon so ghe: ";
	//	cin >> n;
	//	system("cls");
	//	for (int i = 7; i < 13; i++)
	//	{
	//		if (arr[i][n - 1] == '*')
	//		{
	//			arr[i][n - 1] = 'X';
	//			
	//		}
	//	}
	//	goto come;
	//}
come:
	for (int i = 0; i < 14; i++)
	{
		if (i == 0)
		{
			for (char i = 'A'; i <= 'F'; i++)
			{
				cout << "\t";
				cout << i;
			}
			cout << endl;
		}
		else
		{
			cout << "Hang " << i << "\t";
			for (int j = 0; j < 6; j++)
			{
				cout << arr[i - 1][j] << "\t";
			}
			cout << endl;
		}
	}
}