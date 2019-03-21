#include<iostream> 
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include <iomanip>
#include<cstring>
#include<fstream>
using namespace std;
void t(int c,int s)
{
	ofstream my1("out3.txt");
	char str[100];
	cin.ignore();
	for (size_t i = 0; i < c; i++)
	{
		for (size_t i = 0; i < s; i++)
		{
			cin.getline(str, 100);
			my1 << str << " ";
		}
		my1 << endl;
	}
}
void t1(int c, int s)
{
	ofstream my1("out.txt");
	char str[100];
	for (size_t i = 0; i < c; i++)
	{
		for (size_t i = 0; i < s; i++)
		{
			cin.getline(str, 100);
			my1 << str << " ";
		}
		my1 << endl;
	}
}
void task2()
{
	int f, e,sum,c1,s1;
	ifstream mu("out3.txt");
	ifstream my1("out.txt");
	ofstream my("out2.txt");
	int a[10];
	int g = 0;
	cin >> c1;
	cin >> s1;
	t(c1,s1);
	cout << " __________________________________ " << endl;
	t1(c1,s1);
	for (size_t i = 0; i < c1; i++)
	{
		for (size_t i = 0; i < s1; i++)
		{
			mu >> f;
			my1 >> e;
			sum = f + e;
			my << sum << " ";
		}
		my << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		
		case 2: task2(); break;

		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}