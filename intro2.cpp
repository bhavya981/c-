#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=12;
    int b=10;
    int c=a+b;
    cout<<"this is plus sign "<<c<<endl;
    int d=c-b;
    cout<< "this is minus sign "<<d<<endl;
    int e=d/2;
    cout<<"this is divide sign "<<e<<endl;
    int f=e*3;
    cout<<"this is multiply sign "<<f<<endl;
    int g=f+1;
    cout<<"this is equal sign"<<g<<endl;
     g+=10;
    cout<<"this is plus equal sign"<<g<<endl;
    g-=15;
    cout<<"this is minus equal sign"<<g<<endl;
    g*=2;
    cout<<"this is multiply equal sign"<<g<<endl;
    g/=3;
    cout<<"this is divide equal sign"<<g<<endl;

    return 0;
}
