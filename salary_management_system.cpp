#include <iostream>
using namespace std;

class Employee{
  public:
  int employee_no;
  string name;
  int type;
  int month_salary;
  int per_day_salary;
  int days_worked;
  int total_working_days = 26;
  int deduction , daily_salary , absent;
  int full_final_salary , part_final_salary;
 
  void Read_Data(){
      cout<<"Enter Employee No : ";
      cin>>employee_no;
      cout<<"Enter Name : ";
      cin>>name;
      
      if(type == 1){
          cout<<"Enter Monthly Salary : ";
          cin>>month_salary;
      }
      else{
          cout<<"Enter Per Day Salary : ";
          cin>>per_day_salary;
      }
      cout<<"Enter Number of Days Worked : ";
      cin>>days_worked;
      
      
  }
  
  void Calculate(){
    absent = total_working_days - days_worked;
    if(type == 1){
    daily_salary = month_salary / 26;
    deduction = daily_salary * absent; 
    full_final_salary = month_salary - deduction;
    }
    else{
    part_final_salary = per_day_salary * days_worked;
    }
  }
  
  void Display(){
      cout<<"--------------------"<<endl;
      cout<<"Employee No : "<< employee_no<<endl;
      cout<<"Name : "<< name<<endl;
      cout<<"Days Worked : "<<days_worked<<endl;
      cout<<"Absent days :"<<absent<<endl;
      
      if(type == 1){
          cout<<"\nMontly Salary : "<<month_salary<<endl;
          cout<<"Deduction : "<<deduction<<endl;
          cout<<"Final Salary : "<<full_final_salary<<endl;
      }
      else{
          cout<<"Per day Salary : "<<per_day_salary<<endl;
          cout<<"Final Salary : " <<part_final_salary<<endl;
      }
      cout<<"--------------------"<<endl;
      
  }
  
    
};

int main(){
    Employee emp[100];
    int choice = 0;
    int total_employees = 0;
    int new_employees = 0;
    int option=0;
    bool found= false;
    
    cout<<"=== STAFF SALARY MANAGEMENT SYSTEM ==="<<endl;
    
    while(choice!=3){
     
     cout<<"\t MENU"<<endl;
     cout<<"[1] Enter The Data "<<endl;
     cout<<"[2] Check Salary "<<endl;
     cout<<"[3] Exit"<<endl;
     
     cout<<"Enter your choice : ";
     cin>>choice;
    switch(choice){
        
        case 1:
        
        
        cout<<"\nEnter Employee Type"<<endl;
        cout<<"1. Full Time Staff"<<endl;
        cout<<"2. Part Time Staff"<<endl;
        
        cout<<"Enter your option : ";
        cin>>option;
        
        cout<<"\nEnter No of Employees to Add : ";
        cin>>new_employees;
        
        
            for(int i=0 ; i<new_employees ; i++){
                cout<<"\nEmployee Detail "<< i+1<<endl;
                emp[total_employees].type = option;
                emp[total_employees].Read_Data();
                total_employees++;
                
            }
        
        
        break;
        
          case 2:
          found = false; 
          int no;
          cout << "\nEnter Employee No : ";
          cin >> no;

    for(int i = 0; i < total_employees; i++){
        if(no == emp[i].employee_no){
            emp[i].Calculate();
            cout << "Employee Details" << endl;
            emp[i].Display();
            found = true;
            break; 
        }
    }

    if(!found){
        cout << "Not found" << endl;
    }
    break;
        
        
        
    }    
    }

    return 0;
}