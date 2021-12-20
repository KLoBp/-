#include<iostream>
#include <fstream>
//не забыть табуляцию
using namespace std;
int main() {
ofstream foutw;
foutw.open ("worker.txt",ofstream::app);
ifstream finw;
finw.open("worker.txt");
ofstream foutwh;
foutwh.open ("warehouse.txt",ofstream::app);
ifstream finwh;
finwh.open("warehouse.txt");
ofstream foutbp;
foutbp.open ("bonusProgram.txt",ofstream::app);
ifstream finbp;
finbp.open("bonusProgram.txt");
ofstream fouts;
fouts.open ("suppliers.txt",ofstream::app);
ifstream fins;
fins.open("suppliers.txt");
ofstream fouto;
fouto.open ("order.txt",ofstream::app);
ifstream fino;
fino.open("order.txt");
ofstream foutr;
foutr.open ("receipt.txt",ofstream::app);
ifstream finr;
fino.open("receipt.txt");
ofstream foutcw;
foutcw.open ("cash_withdrawal.txt",ofstream::app);
ifstream fincw;
fincw.open("cash_withdrawal.txt");

class worker {
public:
string name;
string post;
int wages;
int experience;
string phnumber;
string address;
int serviceNumber;
public:
void see() {}


void set_name() {
cout << "Введите ФИО сотрудника: ";
cin >> name;}
string get_name() {
return name;
}

void set_post() {
cout << "Введите должность сотрудника: ";
cin >> post;}
string get_post() {
return post;}

void set_wages() {
cout << "Введите оклад сотрудника: ";
cin >> wages;}
int get_wages() {
return wages;}

void set_experience() {
cout << "Введите стаж сотрудника: ";
cin >> experience;}
int get_experience() {
return experience;}

void set_phnumber() {
cout << "Введите номер телефона сотрудника: ";
cin >> phnumber;}
string get_phnumber() {
return phnumber;}

void set_address() {
cout << "Введите домашний адрес сотрудника: ";
cin >> address;}
string get_address() {
return address;}

void set_serviceNumber() {
cout << "Введите табельный номер сотрудника: ";
cin >> serviceNumber;}
int get_serviceNumber() {
return serviceNumber;}
};

class processWr:public worker {
public:
    worker arr_of_worker[99];
    int number_of_worker = 0;
public:
    void add() {
            number_of_worker++;
            cout << "Введите данные работника\n\n";
            cout << "ФИО: ";
            string name;
            cin >> name;
            ofstream foutw;
            foutw.open ("worker.txt",ofstream::app);
            foutw << name;
            foutw << ",\t";
            cout << endl;
            cout << "Должность: ";
            string post;
            cin >> post;
            foutw.open ("worker.txt",ofstream::app);
            foutw << post;
            foutw << ",\t";
            cout << endl;
            cout << "ЗП: ";
            string wages;
            cin >> wages;
            foutw.open ("worker.txt",ofstream::app);
            foutw << wages;
            foutw << ",\t";
            cout << endl;
            cout << "Стаж: ";
            string experience;
            cin >> experience;
            foutw.open ("worker.txt",ofstream::app);
            foutw << experience;
            foutw << ",\t";
            cout << endl;
            cout << "Номер телефона: ";
            string phnumber;
            cin >> phnumber;
            foutw.open ("worker.txt",ofstream::app);
            foutw << phnumber;
            foutw << ",\t";
            cout << endl;
            cout << "Адрес: ";
            string address;
            cin >> address;
            foutw.open ("worker.txt",ofstream::app);
            foutw << address;
            foutw << ",\t";
            cout << endl;
            cout << "Табельный номер сотрудника: ";
            string serviceNumber;
            cin >> serviceNumber;
            foutw.open ("worker.txt",ofstream::app);
            foutw << serviceNumber;
            foutw << "\n";
            foutw.close();
            cout << endl;
            cout << "Успешно" << endl;
    }
    void see() {
      ifstream finw;
      finw.open ("worker.txt");
      string str;
      cout <<" —------------------------------------------------------"<<endl;
      cout <<"ФИО, Должность, ЗП, Стаж, Номер Телефона, Адрес"<<endl;
        while(!finw.eof()){
          str = "";
          getline(finw,str);
          cout<<str<<endl;
        }
      finw.close();  
    }
};

class warehouse {
public:
string title;
int article;
int price;
int quantityOnSale;
int quantityUnderTheOrder;
public:
void see() {
}
void set_title() {
cout << "Введите название товара: ";
cin >> title;}
string get_title() {
return title;}

void set_article() {
cout << "Введите артикул: ";
cin >> article;}
int get_article() {
return article;}

void set_price() {
cout << "Введите цену: ";
cin >> price;}
int get_price() {
return price;}

void set_quantityOnSale() {
cout << "Введите количество для продажи: ";
cin >> quantityOnSale;}
int get_quantityOnSale() {
return quantityOnSale;}

void set_quantityUnderTheOrder() {
cout << "Введите количество под заказ: ";
cin >> quantityUnderTheOrder;}
int get_quantityUnderTheOrder() {
return quantityUnderTheOrder;};
};

class processWh:public warehouse {
public:
    warehouse arr_of_warehouse[99];
    int number_of_warehouse = 0;
public:
    void add() {
            number_of_warehouse++;
            cout << "Введите данные товара\n\n";
            cout << "Название: ";
            string title;
            cin >> title;
            ofstream foutwh;
            foutwh.open ("warehouse.txt",ofstream::app);
            foutwh << title;
            foutwh << ",\t";
            cout << endl;
            cout << "Артикул: ";
            int article;
            cin >> article;
            foutwh.open ("warehouse.txt",ofstream::app);
            foutwh << article;
            foutwh << ",\t";
            cout << endl;
            cout << "Цена: ";
            int price;
            cin >> price;
            foutwh.open ("warehouse.txt",ofstream::app);
            foutwh << price;
            foutwh << ",\t";
            cout << endl;
            cout << "Количество на складе: ";
            int quantityOnSale;
            cin >> quantityOnSale;
            foutwh.open ("warehouse.txt",ofstream::app);
            foutwh << quantityOnSale;
            foutwh << ",\t";
            cout << endl;
            cout << "Количество под заказ: ";
            int quantityUnderTheOrder;
            cin >> quantityUnderTheOrder;
            foutwh.open ("warehouse.txt",ofstream::app);
            foutwh << quantityUnderTheOrder;
            foutwh << "\n";
            foutwh.close();
            cout << "Успешно" << endl;
    }
    void see() {
        ifstream finwh;
      finwh.open ("warehouse.txt");
      string str;
        while(!finwh.eof()){
          str = "";
          getline(finwh,str);
          cout<<str<<endl;
        }
      finwh.close();
    }
}; 

class bonusProgram {
public:
  string clientName;
  string customerPhnum;
  string cardNumber;
  int discount;
public:
void see() {
}
void set_clientName() {
cout << "Введите ФИО клиена: ";
cin >> clientName;}
string get_clientName() {
return clientName;}

void set_customerPhnum() {
cout << "Введите номер телефона клиента: ";
cin >> customerPhnum;}
string get_customerPhnum() {
return customerPhnum;}

void set_cardNumber() {
cout << "Введите номер бонусной карты: ";
cin >> cardNumber;}
string get_cardNumber() {
return cardNumber;}

void set_discount() {
cout << "Введите размер скидок: ";
cin >> discount;}
int get_discount() {
return discount;}
};

class processCl:public bonusProgram {
public:
    bonusProgram arr_of_bonusProgram[99];
    int number_of_bonusProgram = 0;
public:
    void add() {
            number_of_bonusProgram++;
            cout << "Введите данные участника бонусной программы\n\n";
            cout << "Введите имя: ";
            string clientName;
            cin >> clientName;
            ofstream foutbp;
            foutbp.open ("bonusProgram.txt",ofstream::app);
            foutbp << clientName;
            foutbp << ",\t";
            cout << endl;
            cout << "Введите номер телефона: ";
            string customerPhnum;
            cin >> customerPhnum;
            foutbp.open ("bonusProgram.txt",ofstream::app);
            foutbp << customerPhnum;
            foutbp << ",\t";
            cout << endl;
            cout << "Введите номер бонусной карты: ";
            string cardNumber;
            cin >> cardNumber;
            foutbp.open ("bonusProgram.txt",ofstream::app);
            foutbp << cardNumber;
            foutbp << ",\t";
            cout << endl;
            cout << "Введите размер скидок: ";
            int discount;
            cin >> discount;
            foutbp.open ("bonusProgram.txt",ofstream::app);
            foutbp << discount;
            foutbp << "\n";    
            foutbp.close();        
            cout << "Успешно" << endl;
    }
    void see() {
        ifstream finbp;
      finbp.open ("bonusProgram.txt");
      string str;
        while(!finbp.eof()){
          str = "";
          getline(finbp,str);
          cout<<str<<endl;
        }
      finbp.close();
    }
}; 

class suppliers  {
public:
string NameOfTheOrganization;
string article;
int purchasePrice;
int quantity;

public:
void see() {
}
void set_NameOfTheOrganization() {
cout << "Введите название организации: ";
cin >> NameOfTheOrganization;}
string get_NameOfTheOrganization() {
return NameOfTheOrganization;}

void set_article() {
cout << "Введите артикул: ";
cin >> article;}
string get_article() {
return article;}

void set_purchasePrice() {
cout << "Введите закупочную цену: ";
cin >> purchasePrice;}
int get_purchasePrice() {
return purchasePrice;}

void set_quantity() {
cout << "Введите количество: ";
cin >> quantity;}
int get_quantity() {
return quantity;}
};

class processSup :public suppliers {
public:
    suppliers arr_of_suppliers[99];
    int number_of_suppliers = 0;
public:
    void add() {
            number_of_suppliers++;
            cout << "Введите данные поставщика\n\n";
            cout << "Название организации: ";
            string NameOfTheOrganization;
            cin >> NameOfTheOrganization;
            ofstream fouts;
            fouts.open ("bonusProgram.txt",ofstream::app);
            fouts << NameOfTheOrganization;
            fouts << ",\t";
            cout << endl;
            cout << "Артикул: ";
            string article;
            cin >> article;
            fouts.open ("bonusProgram.txt",ofstream::app);
            fouts << article;
            fouts << ",\t";
            cout << endl;
            cout << "Цена закупки: ";
            int purchasePrice;
            cin >> purchasePrice;
            fouts.open ("bonusProgram.txt",ofstream::app);
            fouts << purchasePrice;
            fouts << ",\t";
            cout << endl;
            cout << "Количество: ";
            int quantity;
            cin >> quantity;
            fouts.open ("bonusProgram.txt",ofstream::app);
            fouts << quantity;
            fouts << "\n";
            cout << endl;
            fouts.close();
            cout << "Успешно" << endl;
    }
    void see() {
        ifstream fins;
      fins.open ("suppliers.txt");
      string str;
        while(!fins.eof()){
          str = "";
          getline(fins,str);
          cout<<str<<endl;
        }
      fins.close();
    }
}; 

class order {
public:
string title;
int article;
int price;
int quantityUnderTheOrder;
public:
void see() {}

void set_title() {
cout << "Введите название: ";
cin >> title;}
string get_title() {
return title;}

void set_article() {
cout << "Введите артикул: ";
cin >> article;}
int get_article() {
return article;}

void set_price() {
cout << "Введите цену: ";
cin >> price;}
int get_price() {
return price;}

void set_quantityUnderTheOrder() {
cout << "Введите количество заказанных единиц: ";
cin >> quantityUnderTheOrder;}
int get_quantityUnderTheOrder() {
return quantityUnderTheOrder;}
};

class 
processOrd:public order {
public:
    order arr_of_order[99];
    int number_of_order = 0;
public:
    void add() {
            number_of_order++;
            cout << "Введите данные заказа\n\n";
            cout << "Введите название товара: ";
            string title;   
            cin >> title;
            ofstream fouto;
            fouto.open ("order.txt",ofstream::app);
            fouto << title;
            fouto << ",\t";
            cout << endl;
            cout << "Введите артикул: ";
            int article;
            cin >> article;
            fouto.open ("order.txt",ofstream::app);
            fouto << article;
            fouto << ",\t";
            cout << endl;
            cout << "Введите цену: ";
            int price;
            cin >> price;
            fouto.open ("order.txt",ofstream::app);
            fouto << price;
            fouto << ",\t";
            cout << endl;
            cout << "Введите количество заказанных единиц: ";
            int quantityUnderTheOrder;
            cin >> quantityUnderTheOrder;
            fouto.open ("order.txt",ofstream::app);
            fouto << quantityUnderTheOrder;
            fouto << "\n";
            fouto.close();
            cout << endl;
            cout << "Успешно" << endl;
    }
    void see() {
        ifstream fino;
      fino.open ("order.txt");
      string str;
        while(!fino.eof()){
          str = "";
          getline(fino,str);
          cout<<str<<endl;
        }
      fino.close();
    }
};

class receipt {
public:
string title;
int amount_to_be_paid;
public:
void see() {}

void set_title() {
cout << "Введите название квитанции: ";
cin >> title;}
string get_title() {
return title;}

void set_amount_to_be_paid() {
cout << "Введите сумму к оплате: ";
cin >> amount_to_be_paid;}
int get_amount_to_be_paid() {
return amount_to_be_paid;}
};

class 
processRcpt:public receipt {
public:
    receipt arr_of_receipt[99];
    int number_of_receipt = 0;
public:
    void add() {
            number_of_receipt++;
            cout << "Введите данные платежек\n\n";
            cout << "Введите название квитанции: ";
            string title;   
            cin >> title;
            ofstream foutr;
            foutr.open ("receipt.txt",ofstream::app);
            foutr << title;
            foutr << ",\t";
            cout << endl;
            cout << "Введите сумму к оплате ";
            int amount_to_be_paid;
            cin >> amount_to_be_paid;           
            foutr.open ("receipt.txt",ofstream::app);
            foutr << amount_to_be_paid;
            foutr << "\n";
            foutr.close();
            cout << endl;
            cout << "Успешно" << endl;
    }
    void see() {
        ifstream finr;
      finr.open ("receipt.txt");
      string str;
        while(!finr.eof()){
          str = "";
          getline(finr,str);
          cout<<str<<endl;
        }
      finr.close();
    }
};

class cash_withdrawal {
public:
string date;
int cash_amount;
int cash_noncash;
public:
void see() {}

void set_date() {
cout << "Введите дату: ";
string title;   
cin >> date;}
string get_date() {
return date;}

void set_cash_amount() {
cout << "Введите количество снятых с кассы наличных: ";
cin >> cash_amount;}
int get_cash_amount() {
return cash_amount;}

void swt_cash_noncash() {
cout << "Введите количество полученных безналичных средств: ";
cin >> cash_noncash;}
int get_cash_noncash() {
return cash_noncash;}
};

class 
processWCash:public cash_withdrawal {
public:
    cash_withdrawal arr_of_cash_withdrawal[99];
    int number_of_cash_withdrawal = 0;
public:
    void add() {
            number_of_cash_withdrawal++;
            cout << "Введите данные съёма с кассы\n\n";
            cout << "Введите дату: ";
            string date;   
            cin >> date;
            ofstream foutcw;
            foutcw.open ("cash_withdrawal.txt",ofstream::app);
            foutcw << date;
            foutcw << ",\t";
            cout << "Введите количество снятых с кассы наличных за смену: ";
            int cash_amount;  
            cin >> cash_amount;
            foutcw.open ("cash_withdrawal.txt",ofstream::app);
            foutcw << cash_amount;
            foutcw << ",\t";
            cout << "Введите количество полученных безналичных средств за смену: ";
            int cash_noncash;   
            cin >> cash_noncash;
            foutcw.open ("cash_withdrawal.txt",ofstream::app);
            foutcw << cash_noncash;
            foutcw << "\n";
            foutcw.close();
            cout << endl;
            cout << "Успешно" << endl;
    }
    void see() {
        ifstream fincw;
      fincw.open ("cash_withdrawal.txt");
      string str;
        while(!fincw.eof()){
          str = "";
          getline(fincw,str);
          cout<<str<<endl;
        }
      fincw.close();
    }
};

setlocale(LC_ALL, "rus");
setlocale(LC_ALL, "Russian");
setlocale(LC_ALL, "ru");

int kod;
processWr wr;
processWh wh;
processCl cl;
processOrd ord;
processRcpt rcpt;
processWCash wcash;
do {
cout << "1. Просмотр товара в наличии" << endl;
cout << "2. Сделать заказ" << endl;
cout << "3. Просмотр заказов" << endl;
cout << "4. Просмотр списка сотудников" << endl;
cout << "5. Добавить сотрудника" << endl;
cout << "6. Просмотр бонсуной программы" << endl;
cout << "7. Добавить участника бонусной программы" << endl;
//cout << "8. Просмотр финансов" << endl;
cout << "9. Просмотр платежек" << endl;
cout << "10. Добавить платежку" << endl;
cout << "11. Просмотр съёма с кассы" << endl;
cout << "12. Добавить съёма с кассы" << endl;
cout << "13. Вывести финансовый отчет" << endl;
cout << "14. Добавить товар на склад" << endl;

cout << "0. Выход" << endl;
cout << endl;
cin >> kod;
switch (kod) {
case 1: wh.see(); break;
case 2: ord.add(); break;
case 3: ord.see(); break;
case 4: wr.see(); break;
case 5: wr.add(); break;
case 6: cl.see(); break;
case 7: cl.add(); break;
//case 8: n.see(); break;
case 9: rcpt.see(); break;
case 10: rcpt.add(); break;
case 11: wcash.see(); break;
case 12: wcash.add(); break;
//case 13: n.see(); break;
case 14: wh.add(); break;
}
cout << "-------------------------------------------------------------------------------------------------------------" << endl;
cout << endl;
} while (kod != 0);
return 0;
};