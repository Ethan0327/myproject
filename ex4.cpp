#include <iostream>

using namespace std;

int main()
{
    int input;
    cout<<"Please enter a number:\n"<<endl;
    cin>>input;
    if(100>input>90){
            cout<<"A"<<endl;
    }
    else if(89>input>80){
            cout<<"B"<<endl;
    }
    else if(79>input>70){
            cout<<"C"<<endl;
    }
   else if(69>input>60){
            cout<<"D"<<endl;
    }
   else if(input>59){
            cout<<"E"<<endl;
    }
    else
        cerr<<"Error";
    return 0;
}
