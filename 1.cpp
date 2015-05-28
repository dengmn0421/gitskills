/*************************************************************************
	> File Name: 1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2015年05月28日 星期四 10时16分57秒
 ************************************************************************/

#include<iostream>
using namespace std;
class A{
public:
    bool fun(char i){
        cout<<"just for test."<<" "<<i<<endl;
    }
};

int main (int argc,char** argv)
{
    if(argc<2){
        cout<<"useage:./a.out num"<<endl;
        return 0;
    }
    A a;
    a.fun(*argv[1]);
    return 1;
}
