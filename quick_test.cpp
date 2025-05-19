#include <iostream>
#include <string>
using namespace std;

class Person{
    friend ostream & operator<<(ostream &cout,Person & p);
public:
    Person(int a, int b){
        m_A = a; m_B = b;
    }
private:
    int m_A;
    int m_B;
};

ostream & operator<<(ostream &out,Person & p){
    out<<"Person p.m_A = "<<p.m_A<<" "<<"Person p.m_B = "<<p.m_B;
    return out;
}

void test01(){
    Person p(13,12);
    cout<<p<<endl;
}

int main(){
    test01();
    return 0;
}