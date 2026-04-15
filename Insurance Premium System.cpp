#include <iostream>

using namespace std;

class Insurance{

public:

string name;

int life, health, vehicle;

int age;

int amount;

int base_premium, rate, age_charge, discount, final_premium;

Insurance(){

life = 5;

health = 3;

vehicle = 4;

}

void Read_Details(){cout<<"Enter Customer Name : " ;

cin>>name;

cout<<"Enter Age : ";

cin>>age;

cout<<"Enter Insurance Amount : ";

cin>>amount;

}

void Display_Details(){

cout<<"\n----- PREMIUM DETAILS -----"<<endl;

cout<<"Customer Name : "<<name<<endl;

cout<<"Age : "<<age<<endl;

cout<<"Insurance Amount : "<<amount<<endl;

}

void Calculate(int choice){

if(choice == 1){

rate = life;

}

else if(choice == 2 ){

rate = health;

}

else{

rate = vehicle;

}

base_premium = amount * rate / 100;

if(age > 50){

age_charge = 2000;

}

else{

age_charge = 0;

}if(amount > 200000){

discount = base_premium * 10 / 100;

}

else{

discount = 0;

}

final_premium = base_premium + age_charge - discount;

}

void Display_Calculations(){

cout<<"\nBase Premium : "<<base_premium<<endl;

cout<<"Age Charge : "<<age_charge<<endl;

cout<<"Discount Applied : "<<discount<<endl;

cout<<"\n----- FINAL PREMIUM -----"<<endl;

cout<<"\nFinal Premium : "<<final_premium<<endl;

}

};

int main() {

Insurance inc;

int choice;

string life = "Life Insurance";

string health = "Health Insurance";

string vehicle = "Vehicle Insurance";

cout<<"----- INSURANCE PREMIUM SYSTEM -----"<<endl;

cout<<"\n";

inc.Read_Details();

cout<<"\nSelect Policy Type : "<<endl;

cout<<"1. Life\n2. Health\n3. Vehicle"<<endl;

cout<<"\nEnter Choice : ";

cin>>choice;switch(choice){

case 1:

inc.Display_Details();

cout<<"Policy Type : "<<life<<endl;

inc.Calculate(choice);

inc.Display_Calculations();

break;

case 2:

inc.Display_Details();

cout<<"Policy Type : "<<health<<endl;

inc.Calculate(choice);

inc.Display_Calculations();

break;

case 3:

inc.Display_Details();

cout<<"Policy Type : "<<vehicle<<endl;

inc.Calculate(choice);

inc.Display_Calculations();

break;

default:

cout<<"Invalid choice";

}

return 0;

}

