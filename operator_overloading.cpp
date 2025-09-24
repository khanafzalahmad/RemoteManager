#include<iostream>
#include<fstream>

class Complex{
    int real;
    int image;

    public:
    Complex(int real1,int image1){
        this->real = real1;
        this->image = image1;
    }

    Complex operator+(Complex& obj){
        std::cout<<this->real+obj.real<<std::endl;
        return Complex(this->real+obj.real,this->image+obj.image);
    }

    bool operator==(Complex& obj){
        if(this->real==obj.real && this->image==obj.image)
        return true;
        else
        return false;
    }

    void display(){
        std::cout<<real<<" "<<image<<std::endl;
    }

    friend std::ostream& operator<<(std::ostream& os,const Complex& obj){
        os<<obj.real<<"+"<<obj.image<<"i"<<std::endl;
        return os;
    }
};

int main(){
    Complex c(2,3);
    c.display();
    Complex c1(8,7);
    c1.display();
    Complex c2 = c + c1;
    c2.display();
    Complex c3(c2);
    if(c==c1)
    std::cout<<"true";
    else
    std::cout<<"False";

    if(c3==c2)
    std::cout<<"true"<<std::endl;
    else
    std::cout<<"False"<<std::endl;
    
    std::cout<<c<<std::endl;

    /*
    std::fstream f1;
    f1.open("complex.txt",std::ios_base::out);

    if(!f1.is_open())
        std::cerr<<"Error while open ing file"<<std::endl;
    else
        std::cout<<"File is open"<<std::endl;

    f1 << "Hello Afzal";

    //f1.append()
    
    //std::cout<<
    f1 << "Khan";
    f1.close();
    
    std::fstream f2;
    f2.open("complex.txt",std::ios_base::app);
    
    //f1 << "Khan";
    f2 << " bhandup";

    f2.close();

    std::fstream f3;
    f3.open("complex.txt",std::ios_base::out | std::ios_base::in);
    f3.seekg(0,std::ios_base::end);
    f3 << " Mulund";
    //f1.open("complex.txt",std::ios_base::in | std::ios_base::out);
    //f1 << "Mulund";

    //std::cout<<c==c1<std::endl;
    //std::cout<<c2==c3<std::endl; 
    */
    return 0;
}