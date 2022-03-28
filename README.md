#include <iostream>

using namespace std;

int main()
{
    int input;
    cout<<"Please enter a radius:\n"<<endl;
    cin>>input;
    if(input>=0){
            cout<<"perimeter"<<input*2*3.14<<"\narea"<<input*input*3.14<<endl;
    }
        else
            cerr<<"Error";
    return 0;
}
