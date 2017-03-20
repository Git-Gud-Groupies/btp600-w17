#include <iostream>
#include <string>
using namespace std;
class Data{
	string str_;
	int number_;
public:
	Data(){
		str_="";
		number_=0;
	}
	void print() const{
		cout << number_  << " - " << str_ << endl;
	}
	void setString(string s){
		str_=s;
	}
	void setNumber(int n){
		number_=n;
	}
};

class Memento{

};
class CareTaker{

};

int main(void){
	Data D;
	int choice;
	string inputString;
	int inputNumber;
	do{
		cout << "*********************************" << endl;
		cout << "what would you like to do: " << endl;
		cout << "1) Modify string" << endl;
		cout << "2) Modify number" << endl;
		cout << "3) undo"	<< endl;
		cout << "4) exit"  << endl;
		cin >> choice;
		switch(choice){
			case 1:
				cout << "enter a new string" << endl;
				cin >> inputString;
				D.setString(inputString);
				cin.clear();
				cin.ignore(1000,'\n');
				break;
			case 2:
				cout << "enter a new number" << endl;
				cin >> inputNumber;
				if(cin){
					D.setNumber(inputNumber);
				}
				else{
					cin.clear();
					cin.ignore(1000,'\n');
				}
				break;
			case 3: 
				//your code to do undo goes here
				break;

		}
		cout << "the object: " << endl;
		D.print();
	}while(choice != 4);
}
