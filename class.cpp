#include <iostream>
#include <string>
using namespace std;
class student{
public:
    //学生姓名
    string name;
    //学号
    string studentNumber;
};

class cube{
    int m_L;
    int m_W;
    int m_H;
public:
    int get_volum(){
        return m_H*m_L*m_W;
    }

    void set_cube(int L = 2, int W = 2, int H = 2){
        m_L = L;m_W = W;m_H = H;
    }
};

class Point{
public:
    void set_point(int x = 0, int y = 0){m_X = x;m_Y = y;}
    int get_X(){return m_X;}
    int get_Y(){return m_Y;}
private:
    int m_X;
    int m_Y;  
};

class Circle{
public:
    Point get_center(){return m_center;}
private:
    //半径
    int m_r;
    //圆心
    Point m_center;
};

int main(){
    Circle c1;
    Point circleCenter = c1.get_center();
    circleCenter.set_point();
    cout<<circleCenter.get_X()<<endl;

    // student st;
    // st.name = "张三";
    // st.studentNumber = "12345";
    // cout<<"该生姓名："<<st.name<<"\n"<<"该生学号: "
    // <<st.studentNumber<<endl;

    // cube c1;cube c2;
    // c1.set_cube();
    // c2.set_cube(2,4,5);
    // if(c1.get_volum() == c2.get_volum()){
    //     cout<<"两个立方体体积相等"<<endl;
    // }else{
    //     cout<<"两个立方体体积不等"<<endl;
    // }


    return 0;
}