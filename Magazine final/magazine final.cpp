#include<iostream>
#include <cstdlib>
#include <limits>
#include <string>

int size = 6;
int resiptsize = 1;
double cash = 30000.00;
double Cashincome = 0, cardincome = 0, totacincome = 0;

int* idArr = new int[size];
std::string* nameArr = new std::string[size];
int* countArr = new int[size];
double* priceArr = new double[size];

//������� ��� ����
std::string* nameReciptArr = new std::string[resiptsize];
int* countReciptArr = new int[resiptsize];
double* priceReciptArr = new double[resiptsize];

template < typename ArrType>
void FillArray(ArrType staticArr, ArrType dinArr, int size);
//�������� ������
void start();
void DeleteMainArrays();
void DeleteReciptArrays();
void CreateStorage();
void ShowStorage();
void Shop();
void Seling();
void AddElementToRecipt(int& reciptsize, int id, int count);
//void PriceRecipt();
void ChangePrice();
void RemoveFromStorage();
void AddToStorage();
void ChangeStorage();
void DeleteElementByIndex();
void discount();
void SecondDiscount();
void CashStatus();
void FillArray();
void PrintRecept();
void SkladManual()
{
	const int MAX_PRODUCTS = 100;

	class Product {
	public:
		int id;
		int quantity;
		float price;
	};
	Product products[MAX_PRODUCTS];
	int numProducts = 0;
	int choose;
	while (numProducts < MAX_PRODUCTS)
	{
		std::cout << "������� id ������: ";
		std::cin >> products[numProducts].id;

		std::cout << "������� ��-��: ";
		std::cin >> products[numProducts].quantity;

		std::cout << "������� ����: ";
		std::cin >> products[numProducts].price;
		std::cout << "����� �������� �� �����";
		numProducts++;
		std::cout << "�������� ��� �����? 1)�� 2)���: ";
		std::cin >> choose;
		if (choose == 1)
		{
			std::cout << "������� id ������: ";
			std::cin >> products[numProducts].id;

			std::cout << "������� ��-��: ";
			std::cin >> products[numProducts].quantity;

			std::cout << "������� ����: ";
			std::cin >> products[numProducts].price;
			std::cout << "����� �������� �� �����\n";
			numProducts++;
			std::cout << "�������� ��� �����? 1)�� 2)���: ";
			std::cin >> choose;

			std::cout << "\n";
		}
		else if (choose == 2)
		{
			break;
		}
	}
	std::cout << "\n��������� ����� :\n";
	for (int i = 0; i < numProducts; ++i)
	{
		std::cout << "�����: " << products[i].id << "  ���-��: " << products[i].quantity << "  ����: " << products[i].price;
		std::cout << "\n";

	}
	while (true)
	{
		int choose;
		do {
			std::cout << "1-�������� �����\n";
			std::cout << "2-������ �������\n";
			std::cout << "3-�������� ����\n";
			std::cout << "4-������� �����\n";
			std::cout << "5-��������� �����\n";
			std::cout << "6-��������� ������\n";
			std::cout << "7-��������� �����\n";
			std::cout << "0-��������� �����\n";
			std::cin >> choose;
			system("cls");
		} while (choose < 1 || choose > 7);
		if (choose == 1)
		{
			ShowStorage();
		}
		else if (choose == 2)
		{
			Seling();
		}
		else if (choose == 3)
		{
			ChangePrice();
		}
		else if (choose == 4)
		{
			RemoveFromStorage();
		}
		else if (choose == 5)
		{
			AddToStorage();
		}
		else if (choose == 6)
		{
			ChangeStorage();
		}
		else if (choose == 7)
		{
			CashStatus();
		}
		else if (choose == 0)
		{

			break;
		}
		else
		{
			std::cerr << "error!";
		}
	}



}





void CreateStorage()
{

	const int staticSize = 6;
	int id[staticSize]{ 1, 2, 3, 4, 5, 6 };
	std::string name[staticSize]{ "������� ����\t" " ����������� ������\t" " ������� ������\t" "������� ������\t" "����������� ������\t"  "��������\t" };
	int count[staticSize]{ 8, 5, 6, 7, 10, 3 };
	double price[staticSize]{ 1000, 2000, 3000, 4000, 5000, 6000 };
	FillArray(id, idArr, staticSize);
	FillArray(name, nameArr, staticSize);
	FillArray(price, priceArr, staticSize);
	FillArray(count, countArr, staticSize);
	for (int i = 0; i < resiptsize; i++)
	{
		std::cout << nameReciptArr[i];

	}


}

void ShowStorage()
{
	std::cout << "id\t�������� ������\t ���-��\t ����\n";


}
void CashStatus()
{
	totacincome = Cashincome + cardincome;
	std::cout << "�������� � �����\t" << cash << "������� �� �����\t\t" << Cashincome << "�������� ������� �� �����:\t" << totacincome;

}
template<typename ArrType>
void FillArray(ArrType staticArr, ArrType dinArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		dinArr[i] = staticArr[i];
	}
}
void PrintRecept()
{
	std::cout << "��������\t ���-��\t ����\t";
	std::cout << "\n";
	for (int i = 0; i < resiptsize; i++)
	{
		std::cout << nameReciptArr[i] << countReciptArr[i] << "\t\t" << priceReciptArr[i] << "\t\t";
		std::cout << "\n";
	}

	delete[] idArr;
	delete[] nameArr;
	delete[] countArr;
	delete[] priceArr;



	std::cout << "\n";
}
void Shop()
{
	while (true)
	{
		int choose;
		do {
			std::cout << "1-�������� �����\n";
			std::cout << "2-������ �������\n";
			std::cout << "3-�������� ����\n";
			std::cout << "4-������� �����\n";
			std::cout << "5-��������� �����\n";
			std::cout << "6-��������� ������\n";
			std::cout << "7-��������� �����\n";
			std::cout << "0-��������� �����\n";
			std::cin >> choose;
			system("cls");
		} while (choose < 1 || choose > 7);
		if (choose == 1)
		{
			ShowStorage();
		}
		else if (choose == 2)
		{
			Seling();
		}
		else if (choose == 3)
		{
			ChangePrice();
		}
		else if (choose == 4)
		{
			RemoveFromStorage();
		}
		else if (choose == 5)
		{
			AddToStorage();
		}
		else if (choose == 6)
		{
			ChangeStorage();
		}
		else if (choose == 7)
		{
			CashStatus();
		}
		else if (choose == 0)
		{

			break;
		}
		else
		{
			std::cerr << "error!";
		}
	}
}
void Seling()
{
	int chooseId, chooseCount, confirm;
	bool isFirst = true;
	double totalSum = 0;
	while (true)
	{
		totalSum = 0;
		do
		{
			std::cout << "����� � ��������: 1)������� ����\t" "2)����������� ������\t" "3)������� ������\t" "4)������� ������\t" "5)����������� ������\t"  "6)��������\t";
			std::cout << "������� id ������:";
			std::cin >> chooseId;
			if (chooseId<1 || chooseId>size)
			{
				std::cerr << "������� ������ ���\n";
				continue;
			}
			if (countArr[chooseId - 1] > 0)
			{
				while (true)
				{
					std::cout << "\n��������� �����:" << chooseId << nameArr[chooseId - 1];
					std::cout << "\n���-�� ������� ������ �� ������:" << countArr[chooseId - 1];
					std::cout << "\n������� ���-�� ������:";
					std::cin >> chooseCount;
					std::cout << "\n";
					if (chooseCount<1 || chooseCount>countArr[chooseId - 1])
					{
						std::cerr << "Error\n";
					}
					else
					{
						break;
					}
				}
			}

			else
			{
				std::cerr << "������ �� ������ ���\n";
				continue;
			}
			std::cout << "�����:" << chooseId << nameArr[chooseId - 1] << "\t ���-��:" << chooseCount;
			std::cout << "\n 1-�����������\n 2-������";
			std::cin >> confirm;
			if (confirm == 1)
			{
				if (isFirst)
				{
					nameReciptArr[resiptsize - 1] = nameArr[chooseId - 1];
					countReciptArr[resiptsize - 1] = chooseCount;
					priceReciptArr[resiptsize - 1] = chooseCount;
					countArr[chooseId - 1] = chooseCount;
					totalSum += priceArr[chooseId - 1] * chooseCount;
					isFirst = false;
				}
				else
				{
					AddElementToRecipt(resiptsize, chooseId, chooseCount);
					totalSum += priceArr[chooseId - 1] * chooseCount;
				}
			}
			else
			{
				continue;
			}
			std::cout << "������ ��� ���� �����?\n";
			std::cout << "1-��\n 2- ��������� �������\n";
			std::cin >> confirm;
			system("cls");
			if (confirm == 1)
			{
				continue;
			}
			break;
		} while (true);
		PrintRecept();
		int pay = 0;
		std::cout << "\t\t\t\n\n\n";
		do
		{
			std::cout << "1-��������\n2-������ ������\n";
			std::cin >> pay;
		} while (pay < 1 || pay>2);
		if (pay == 1)
		{
			cash += totalSum;
			Cashincome += totalSum;
			std::cout << "���� ����� �� �������:" << totalSum;
			std::cout << "\n";

		}
		else if (pay == 2)
		{
			cardincome += totalSum;
			std::cout << "������ ������ �������!\n";
			std::cout << "���� ����� �� �������:" << totalSum;
		}
		break;
	} std::cout << "\n";


};
void discount()
{
	int id, discount, kollichestvo = 0, price = 0;
	std::cout << "�� ������ 3 ������� ������ 30%";
	std::cout << "������� id ������ ��� �������";
	std::cin >> id;
	if (kollichestvo < 3)
	{
		std::cout << "������� ��� ������";
	}
	else if (kollichestvo >= 3)
	{
		std::cout << "������� ����� �� �������";
		discount = price * 30 / 100;
		std::cout << "������ ����������" << discount;
	}
}

void SecondDiscount()
{

	std::cout << "��� ����� ����������� ������ �� ����� 20% ";
}


void AddElementToRecipt(int& reciptsize, int id, int count)
{

	std::string* nameReciptArrTemp = new std::string[resiptsize];
	int* countReceiptArrTemp = new int[resiptsize];
	double* priceReceiptArrTemp = new double[resiptsize];
	for (int i = 0; i < resiptsize; i++)
	{
		nameReciptArrTemp[i] = nameReciptArr[i];
		countReceiptArrTemp[i] = countReciptArr[i];
		priceReceiptArrTemp[i] = priceReciptArr[i];
	}
	delete[]nameReciptArr;
	delete[]countReciptArr;
	delete[]priceReciptArr;
	resiptsize++;
	nameReciptArr = new std::string[resiptsize];
	countReciptArr = new int[resiptsize];
	priceReciptArr = new double[resiptsize];
	for (int i = 0; i < resiptsize - 1; i++)
	{
		nameReciptArr[i] = nameReciptArrTemp[i];
		countReciptArr[i] = countReceiptArrTemp[i];
		priceReciptArr[i] = priceReceiptArrTemp[i];
	}
	nameReciptArr[resiptsize - 1] = nameArr[id - 1];
	countReciptArr[resiptsize - 1] = count;
	priceReciptArr[resiptsize - 1] = priceArr[id - 1] * count;
	delete[]nameReciptArrTemp;
	delete[]countReceiptArrTemp;
	delete[]priceReceiptArrTemp;
}
void DeleteReciptArrays()
{
	int id = 0;
	int count = 0;
	nameReciptArr[resiptsize - 1] = nameArr[id - 1];
	countReciptArr[resiptsize - 1] = count;
	priceReciptArr[resiptsize - 1] = priceArr[id - 1] * count;
	countArr[id - 1] -= count;
}


void RemoveFromStorage()
{
	int id = 0;
	int count = 0;
	do {
		std::cout << "������� id ������:";
		std::cin >> id;
		std::cout << "������� ���-�� ������ ��� ��������:";
		std::cin >> count;
	} while (count < 0 || count > countArr[id - 1]);
	countArr[id - 1] -= countArr[id - 1];
	std::cout << "����� ������� �����!\n";

}


void ChangePrice()
{
	int id;
	double newprice = 0;
	do {
		std::cout << "������� id ��� ��������� ����";
		std::cin >> id;
		std::cout << "������� ����:";
		std::cin >> newprice;
	} while (newprice < 1 || newprice > 1000000);
	priceArr[id - 1] = newprice;
	std::cout << "���� ������ ������� ��������!\n\n";
}

void AddToStorage()
{
	int id, count;
	do {
		std::cout << "������� id ������ ��� ����������";
		std::cin >> id;
	} while (id < 1 || id > idArr[size - 1]);

	std::cout << "\n\n������ �����:" << nameArr[id - 1] << "=" << countArr[id - 1] << "����\n\n";
	do {
		std::cout << "\n ������� �� ������� ���������:";
		std::cin >> count;
	} while (count < 0 || count > countArr[id - 1]);
	std::cout << "����� ������� ��������!\n\n";

}

void ChangeStorage()
{
	int choose = 0, add, remove;
	do {
		std::cout << "1-�������� ����� �� �����\n";
		std::cout << "2-������ ����� �� ������\n";
		std::cout << "3-�����\n";
	} while (choose < 0 || choose > 2);
	if (choose == 1)
	{
		int* idArr = new int[size];
		std::string* nameArr = new std::string[size];
		int* countArr = new int[size];
		double* priceArr = new double[size];
		std::cin >> add;
		std::cout << "����� ������� �������� �� �����";

	}
	else if (choose == 2)
	{
		std::cout << "������� id ������ ������� ����� ������";
		std::cin >> remove;
		for (int i = 0; i < resiptsize; i++)
		{
			std::cout << nameReciptArr[i - 1];

		}

		std::cout << "����� ����� �� ������";
		std::cout << "\n";
	}
	else
	{
		std::cout << "�����";
	}
}
void DeleteMainArrays()
{
	delete[]nameReciptArr;
	delete[]countReciptArr;
	delete[]priceReciptArr;
}



void DeleteElementByIndex()
{
	idArr = new int[size];
	nameArr = new std::string[size];
	countArr = new int[size];
	priceArr = new double[size];
	int index = 0;
	do {
		std::cout << "������� id ������ ��� ��������";
		std::cin >> index;
	} while (index < 1 || index > size);
	for (int i = 0, j = 0; i < size, j < size, j++; i++)
	{
		if (i == index - 1)
		{
			i++;
			nameReciptArr[i] = idArr[j];
			nameReciptArr[i] = nameArr[j];
			priceReciptArr[i] = priceArr[j];


		}
		else
		{
			idArr[j] = idArr[i];
			nameArr[j] = nameArr[i];
			priceArr[j] = priceArr[j];
			countArr[j] = countArr[i];
		}
	}

	delete[] idArr;
	delete[] nameArr;
	delete[] priceArr;
	delete[] countArr;
}




void start()
{
	{
		std::cout << "****************************����� ���������� � ���������!******************************" << "\n";
		std::string adminLogin = "admin";
		std::string adminPassword = "admin";
		std::string login, password;
		int choose;
		bool exit = false;
		do
		{

			std::cout << "������� �����:";
			std::getline(std::cin, login);
			std::cout << "������� ������:";
			std::getline(std::cin, password);
			if (login != adminLogin || password != adminPassword)
			{
				std::cerr << "�������� ����� ��� ������\n";
				std::cout << "����������� ��� ���?\n1-��\n2-����� �� ���������\n";
				std::cin >> choose;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				if (choose == 2)
				{
					exit = true;
				}
			}
			else
			{
				exit = true;
				int chooseStorageType;
				do
				{
					std::cout << "�������� ������ ������\n 1-������� �����\n 2- ������� ����� �������\n";
					std::cin >> chooseStorageType;
				} while (chooseStorageType < 1 || chooseStorageType>2);
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				if (chooseStorageType == 1)
				{
					CreateStorage();
					Shop();
				}
				else if (chooseStorageType == 2)
				{
					SkladManual();
				}
				else
				{
					std::cerr << "Error chooseStorageType";
				}
			}
		} while (!exit);
	}
}








int main()
{
	setlocale(LC_ALL, "ru");
	start();
	return 0;
}