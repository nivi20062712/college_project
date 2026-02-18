#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
    long long balance;
    long long account_number;
    string account_holder_name;
    string account_type;
    string account_status;
    string transaction_status;
    int transaction_id = 10245;
    bool isAccountCreated;
    public:
    BankAccount(){
        account_type="Savings Account";
        transaction_status="SUCCESS";
        account_status="Active";
        isAccountCreated = false;
        
    
    };
    
    void createAccount(){
     cout<<"\n"<<"============================================================"<<endl;
     cout<< " \t \t "<<"      ACCOUNT CREATION"<<endl;
     cout<<"============================================================"<<"\n \n"<<endl;
     cout<<"Enter Account Number      :";
     cin>>account_number;
     cout<<"Enter Account Holder Name :";
     cin>>account_holder_name;
     cout<<"Enter Initial Deposit     :";
     cin>>balance;
     isAccountCreated = true;
     
    cout<<"\n\n------------------------------------------------------------"<<endl;
    cout<<"Status : Account Successfully Created\n"<<"Account Reference ID : "<<account_number<<endl;
    cout<<"------------------------------------------------------------"<<"\n \n";
       
       cout << "Press Enter to return to Dashboard...";
cin.ignore();
cin.get();
    
    }
    
    void Deposit_Money(){
        int deposit;
        if(isAccountCreated == false)
{
      cout<<"No account found. Please create account first."<<endl;
    return;
}
        
  cout<<"\n \n"<<"============================================================"<<endl;
  cout<< " \t \t "<<"      DEPOSIT MODULE"<<endl;
  cout<<"============================================================"<<"\n"<<endl;
  
  cout<<"Account Number   :"<<account_number<<endl;
  cout<<"Account Holder   :"<<account_holder_name<<endl;
  cout<<"Current balance :"<<balance<<endl;
  

  
  while(true){
  
  cout<<"\nEnter Deposit Amount :";
  cin>>deposit;
  
  if(deposit <=0){
            cout<<"\n------------------------------------------------------------"<<endl;
        cout<<"Transaction Failed"<<endl;
        cout<<"Reason : Deposit amount must be greater than zero"<<endl;
        cout<<"Please try again!"<<endl;
        cout<<"------------------------------------------------------------"<<"\n ";
            continue;
            
        }
else{
    transaction_id++;
    balance+=deposit;
    cout<<"\n------------------------------------------------------------"<<endl;
  
    cout<<"Transaction Status :"<<transaction_status<<endl;
    cout<<"Updated Balance    :"<<balance<<endl;
    cout<<"Transaction ID     :"<<transaction_id<<endl;
  
    cout<<"------------------------------------------------------------"<<"\n ";
  
    cout << "Press Enter to return to Dashboard...";

  cin.ignore();
cin.get();
break;
    }
    }
    }
    
    void Withdraw_Money(){
        int withdraw_money;
        if(isAccountCreated == false)
{
        cout<<"No account found. Please create account first."<<endl;
    return;
}
        cout<<"============================================================"<<"\n";
        cout<< " \t \t  "<<"      WITHDRAWAL MODULE"<<endl;
        cout<<"============================================================"<<"\n";
        
        cout<<"\nAccount Number   :"<<account_number<<endl;
        cout<<"Account Holder   :"<<account_holder_name<<endl;
        cout<<"Current balance :"<<balance<<endl;
        
        while(true){
        cout<<"\nEnter Withdrawal Amount: ";
        cin>>withdraw_money;
        
        
        if(withdraw_money<=balance && withdraw_money>0){
            balance-=withdraw_money;
            transaction_id++;
        cout<<"\n------------------------------------------------------------"<<endl;
  
        cout<<"Transaction Status :"<<transaction_status<<endl;
        cout<<"Remaining Balance    :"<<balance<<endl;
        cout<<"Transaction ID     :"<<transaction_id<<endl;
  
        cout<<"------------------------------------------------------------"<<"\n ";
  
        cout << "\nPress Enter to return to Dashboard...";
cin.ignore();
cin.get();
break;
        }
        else if(withdraw_money<1){
         cout<<"\n------------------------------------------------------------"<<endl;
         cout<<"Transaction Failed"<<endl;
         cout<<"Reason : Negative input or zero"<<endl;
         cout<<"Please try again!"<<endl;
         cout<<"------------------------------------------------------------"<<"\n ";
  }
        else{
         cout<<"\n------------------------------------------------------------"<<endl;
         cout<<"Transaction Failed"<<endl;
         cout<<"Reason : Insufficient Balance"<<endl;
         cout<<"Available Balance    :"<<balance<<endl;
         cout<<"Please try again!"<<endl;
         cout<<"------------------------------------------------------------"<<"\n ";
    }
}
    }
    
    void Display_Account(){
        if(isAccountCreated == false)
         {
    cout<<"No account found. Please create account first."<<endl;
    return;
    }
        cout<<"============================================================"<<"\n";
        cout<< " \t \t  "<<"      ACCOUNT DETAILS"<<endl;
        cout<<"============================================================"<<"\n";
        
        cout<<"\nAccount Number       :"<<account_number<<endl;
        cout<<"Account Holder Name  :"<<account_holder_name<<endl;
        cout<<"Account Type         :"<<account_type <<endl;
        cout<<"Current balance      :"<<balance<<endl;
        cout<<"Account Status       :"<<account_status<<endl;
        cout<<"Last Transaction ID  :"<<transaction_id<<endl;
        cout<<"\n";

        cout << "\nPress Enter to return to Dashboard...";
cin.ignore();
cin.get();
        
    }
};

int main()
{
  BankAccount obj;
  
  int choice=0;
  cout<<"------------------------------------------------------------"<<"\n" <<endl;
  cout<<"\t \t"<<"BANK ACCOUNT MANAGEMENT SYSTEM" <<"\n \t \t \t" << "  Version 1.0"<<"\n"<<endl;
  cout<<"------------------------------------------------------------"<<"\n"<<"System Status :  READY."<<endl;
  cout<<"------------------------------------------------------------"<<"\n \n "<<endl;
  

  while(choice!=5){
      
  cout<<"\n"<<"============================================================"<<endl;
  cout<< " \t \t  "<<"      MAIN DASHBOARD"<<endl;
  cout<<"============================================================"<<"\n"<<endl;
  cout<<"\n \t"<<"[1]  Create New Account"<<"\n \t"<< "[2]  Deposit Money"<<"\n \t"<< "[3]  Withdraw Money"<<"\n \t"<<"[4]  Display Account Details" <<"\n \t"<< "[5]  Exit \n \n";
  
  cout<<"------------------------------------------------------------\n";
  cout<<"Enter Selection :";
  cin>>choice;
  cout<<"============================================================"<<"\n"<<endl;
  
      switch(choice){
          case 1:
          obj.createAccount();
          break;
          
          case 2:
          obj.Deposit_Money();
          break;
          
          case 3:
          obj.Withdraw_Money();
          break;
          
          case 4:
          obj.Display_Account();
          break;
          
          case 5:
           cout<<"\n------------------------------------------------------------------\n";
           cout<<"Application Closing...\n \n"<<"Session Terminated Successfully."<<endl;
           cout<<"Thank you for using the Bank Account Management System."<<endl;
           cout<<"------------------------------------------------------------------";
           break;
          
          
      }
     
  }
  
    return 0;
}
