#include<iostream>
#include<fstream>

int main(){
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
    f3.open("complex.txt",std::ios::out | std::ios::in);
    f3.seekg(0,std::ios::end);
    f3 << " Mulund";
    //f1.open("complex.txt",std::ios_base::in | std::ios_base::out);
    //f1 << "Mulund";

    //std::cout<<c==c1<std::endl;
    //std::cout<<c2==c3<std::endl;
    return 0;
}