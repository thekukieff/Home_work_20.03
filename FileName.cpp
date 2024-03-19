#include <iostream>
#include <cmath>//pow - функци€, котора€ выводит число в степени pow (21,3) = 9261
using namespace std;


int main() {
	setlocale(LC_ALL, "ru");
	//задание 1
	int nomber, sum = 0, start;
	cout << "¬ведите число (менее 500): ";
	cin >> nomber;
	start = nomber;
	while (nomber != 501) {//500 включительно
		sum += nomber;
		nomber++;
	}
	cout << "\n—умма всех чисел от " << start << " до 500 равна " << sum;


	//задание 2
	int pokaz, osnov, itog = 1;//osnov - основание степени, pokaz - показатель степени
	cout << "\n¬ведите основание степени: ";
	cin >> osnov;

	cout << "¬ведите показатель степени: ";
	cin >> pokaz;


	for (int i = 0; i < pokaz; i++)
	{
		itog *= osnov;
	}
	cout << osnov << "^" << pokaz << " = " << itog << endl;
	//cout << endl << pow(osnov,pokaz)<<endl;

	//задание 3
	float sr_arifm, sum_nom = 0;
	for (int i = 0; i < 1001; i++)
	{
		sum_nom += i;

	}
	sr_arifm = sum_nom / 1000;
	cout << "—реднее арифметическое чисел от 1 до 1000 равно " << sr_arifm;

	//задание 4
	float nom, proiz = 1;
	cout << "\n¬ведите число (менее 20): ";
	cin >> nom;
	start = nom;
	while (nom != 21) {//20 включительно
		proiz *= nom;
		nom++;
	}
	cout << "\nпроизведение всех чисел от " << start << " до 20 равно " << proiz;


	//задание 5
	int tabl;
	cout << "\n¬ведите число: ";
	cin >> tabl;
	for (int i = 1; i < 11; i++)
	{
		cout << tabl << "*" << i << " = " << tabl * i << endl;
	}
}