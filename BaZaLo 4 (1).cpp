#include<iostream> 
using namespace std;

class library {
public:
string name;
string author;
int quantity_pages;
int quantity_instances;
string publisher;
protected:
virtual int id() = 0;
virtual	string department() = 0;
virtual int shelf() = 0;
virtual int rack() = 0;
virtual int point() = 0;
private:
virtual int cost() = 0;
virtual int age() = 0;
virtual	string country_of_origin() = 0;

public:
    virtual void see() {
      cout << name << " " << author << " " << quantity_pages << " " << quantity_instances << " " << quantity_instances << " " << publisher << id() << " " << department() << " " << shelf() << " " << rack() << " " << point() << " " << cost() << age() << " " << country_of_origin() << " " << endl;
}

};