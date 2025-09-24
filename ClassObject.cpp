#include<iostream>
#include<cstring>

class BankAccount {
    int accnum;
    //char* accholdername=(char*)malloc(20*sizeof(char));
    //char* accholdername=new char[20];
    std::string accholdername;
    float balance;

    public:
    BankAccount(int accnum1,std::string accholdername1,float balance1){
        this->accnum = accnum1;
        //strcpy(accholdername,accholdername1);
        this->accholdername = accholdername1;
        this->balance = balance1;
    }

    BankAccount(BankAccount& obj){
        this->accnum = obj.accnum;
        this->accholdername = obj.accholdername;
        this->balance = obj.balance;
    }

    void deposit(float amt){
        //this->balance += amt;
        this->balance += amt;
    }

    void withdraw(float amt){
        //this->balance -= amt;
        this->balance -= amt;
    }

    void display(){
        std::cout<<"balance is :"<<balance<<std::endl;
        std::cout<<"name is :"<<accholdername<<std::endl;
        std::cout<<"number is :"<<accnum<<std::endl;
    }

    ~BankAccount(){
        std::cout<<"in destructor"<<std::endl;
        //delete[] accholdername;
    }
};

int main(){
    std::cout<<"Before"<<std::endl;
    BankAccount* b=new BankAccount(123,"abc",10000);
    b->display();
    //std::cout<<"Before2"<<std::endl;
    //std::cout<<"Before deposit"<<std::endl;
    b->deposit(5000);
    //std::cout<<"Before display"<<std::endl;
    //b->display();
    b->withdraw(2000);
    b->display();
    std::cout<<"After copy constructor"<<std::endl;
    BankAccount b1=*b;
    b1.display();
    delete b;
    return 0;
}
/*Design a BankAccount class with the following:

Private members: account number, account holder name, balance.
Public methods: deposit, withdraw, display details.
Constructor to initialize all fields.
Instructions:
Write the class definition and implement all methods.
Write a main() function to create an object, deposit, withdraw, and display details. */