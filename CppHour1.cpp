#include <iostream>
using namespace std;

int main(){
    int Original =30;
    int* pOriginal = &Original;
    cout<<"Original "<<hex<<&Original<<endl;
    cout<<"pOriginal "<<hex<<pOriginal<<endl;
    cout<<"&pOriginal "<<hex<<&pOriginal<<endl;

    int& Ref = Original;
    cout<<"Ref "<<hex<<&Ref<<endl;
    cout<<"Ref value"<<dec<<Ref<<endl;

    const int* pInt = NULL;
    const char* c;
    char charac1 = 't';
    c = &charac1;
    cout<<hex<<&charac1<<endl;

}