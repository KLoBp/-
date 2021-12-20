#include <iostream>
using namespace std;

class library {
public:
  string name;
	string author;
	int quantity_pages;
	int quantity_instances;
	string publisher;

	void add() {
		cout << "Введите Название: " << name << endl;
    cout << "Введите Автора: "<< author << endl;
    cout << "Введите Кол-во страниц:" << quantity_pages << endl;
    cout << "Введите Кол-во экземпляров в фонде:" << quantity_instances << endl;
    cout << "Введите Изателеля:" << publisher << endl;
	}
};

class book : public library {
public:
	  string popular_science_book;
};

class journal : public library {
public:
	string fashion_magazine;
};

class electronic_edition : public library {
public:
	string electronic_edition_fantasy;
};

int main() {
  setlocale(LC_ALL, "rus");
	library lbr;
	
	lbr.name = "Капитал" ;
	lbr.author = "Карл Генрих Маркс" ;
  lbr.quantity_pages = 1050 ;
  lbr.quantity_instances = 15 ;
  lbr.publisher = "Просвещение" ;
};