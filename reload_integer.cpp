#include <iostream>
using namespace std;

class Myinteger{
    friend ostream & operator<<(ostream & out, const Myinteger & a);
public:
    Myinteger() : m_Num(0) {}

    //前置--运算符,需引用自身
    Myinteger & operator--(){
        m_Num--;
        return *this;
    }

    //后置--运算符，返回时不能返回引用。且使用int占位参数区分--重载函数
    Myinteger operator--(int){  
        Myinteger temp = *this;
        m_Num-=1;
        return temp;
    }
private:
    int m_Num;
};

ostream & operator<<(ostream & out, const Myinteger & a){
    out<< a.m_Num;
    return out;
}

void test01(){
    Myinteger ans;

    cout<<ans--<<--ans<<endl;
    
}

int main(){
    test01();
    return 0;
}