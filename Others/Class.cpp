#include<cstdio>
#include<iostream>
using namespace std;
class point
{
    public:
       void setpoint(int x,int y)
       {
           xpos = x;
           ypos = y;
       }
       void printpoint()
       {
           cout<<"x = "<<xpos<<endl;
           cout<<"y = "<<ypos<<endl;
       }

       int xpos;
       int ypos;
};
class  print:public point
{
    public:
     void posprint()
     {
         xpos=1;
         cout<<xpos<<endl;
     }
};
int main()
{
    //point m;
    print a,m;
    m.setpoint(20,30);
    m.printpoint();
    a.posprint();
    return 0;
}