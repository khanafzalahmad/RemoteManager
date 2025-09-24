#include<iostream>

class Employee{
    std::string name;
    int id;

    public:
    Employee(std::string name1,int id1){
        this->name = name1;
        this->id = id1;
    }

    virtual void calculateSalary() const{
        std::cout<<"in EMployee class"<<std::endl;
    }

    ~Employee(){
        std::cout<<"in Employee class destructor"<<std::endl;
    }

};

class Manager : public Employee{
    float bonus;

    public:
    Manager(float bonus1,std::string name1,int id1) : Employee(name1,id1){
        this->bonus = bonus1;
    }

    void calculateSalary() const override{
        std::cout<<"Manager class fun"<<bonus+40000<<std::endl;
    }
};
class Developer : public Employee{
    float projectAllowance;

    public:
    Developer(float projectAllowance1,std::string name1,int id1) : Employee(name1,id1){
        this->projectAllowance = projectAllowance1;
    }

    void calculateSalary() const override {
        std::cout<<"Developer class fun"<<projectAllowance+50000<<std::endl;
                std::cout<<"Developer class fun"<<std::endl;
    }
};

int main(){
    //Employee* emp=new Employee("afzal",123);
    Employee* emp1=new Manager(10000,"afzal",123);
    emp1->calculateSalary();
    Employee* emp2=new Developer(5000,"afzal",123);
    emp2->calculateSalary();
    delete emp2;
    delete emp1;

    Employee* emp[2];
    emp[0]=new Manager(5555,"abc",909);
    emp[1]=new Developer(1111,"efg",888);
    emp[0]->calculateSalary();
    emp[1]->calculateSalary();
    
    //Employee* emp4=new Employee[new Manager(5555,"abc",909),new Developer(222,"mmm",777)];

    delete emp[0];
    delete emp[1]; 
    return 0;
}
/*Create a base class Employee with:
name, id, and a virtual method calculateSalary().
Create a derived class Manager with:
bonus and overridden calculateSalary().
Create another derived class Developer with:
projectAllowance and overridden calculateSalary().
Use base class pointer to call calculateSalary() on both derived objects and demonstrate runtime polymorphism.
✅ Expected Output:
Show salary calculation for Manager and Developer.
Use Employee* to point to Manager and Developer objects.
Call calculateSalary() and ensure correct method is invoked.*/