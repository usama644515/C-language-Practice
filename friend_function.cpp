#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        friend complex sumValue(complex o1,complex o2);
        void setData(int x, int y){
            a=x;
            b=y;
        }

        void printValue(){
            cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
// ---------------Friend Function--------------
complex sumValue(complex o1, complex o2){
    complex o3;
    o3.setData((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    complex v1,v2,vsum;
    v1.setData(2,4);
    v1.printValue();

    v2.setData(8,2);
    v2.printValue();
    vsum=sumValue(v1,v2);
    vsum.printValue();
    return 0;
}