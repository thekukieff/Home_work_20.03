#include <iostream>
#include <cmath>//pow - �������, ������� ������� ����� � ������� pow (21,3) = 9261
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	//������� 1
	int nomber, sum = 0, start;
	cout << "������� ����� (����� 500): ";
	cin >> nomber;
	start = nomber;
	while (nomber != 501) {//500 ������������
		sum += nomber;
		nomber++;
	}
	cout << "\n����� ���� ����� �� " << start << " �� 500 ����� " << sum;


	//������� 2
	int pokaz, osnov, itog = 1;//osnov - ��������� �������, pokaz - ���������� �������
	cout << "\n������� ��������� �������: ";
	cin >> osnov;

	cout << "������� ���������� �������: ";
	cin >> pokaz;


	for (int i = 0; i < pokaz; i++)
	{
		itog *= osnov;
	}
	cout << osnov << "^" << pokaz << " = " << itog << endl;
	//cout << endl << pow(osnov,pokaz)<<endl;

	//������� 3
	float sr_arifm, sum_nom = 0;
	for (int i = 0; i < 1001; i++)
	{
		sum_nom += i;

	}
	sr_arifm = sum_nom / 1000;
	cout << "������� �������������� ����� �� 1 �� 1000 ����� " << sr_arifm;

	//������� 4
	float nom, proiz = 1;
	cout << "\n������� ����� (����� 20): ";
	cin >> nom;
	start = nom;
	while (nom != 21) {//20 ������������
		proiz *= nom;
		nom++;
	}
	cout << "\n������������ ���� ����� �� " << start << " �� 20 ����� " << proiz;


	//������� 5
	int tabl;
	cout << "\n������� �����: ";
	cin >> tabl;
	for (int i = 1; i < 11; i++)
	{
		cout << tabl << "*" << i << " = " << tabl * i << endl;
	}
}