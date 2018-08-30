#include <iostream>

using namespace std;

int main()
{
    int inputnum;
    bool numprime = true;

    cout << "Hello welcome to my program" << endl;
    cout<<endl;

    cout<<"This program accepts a positive integer and determines if it is prime or not"<<endl;
    cout<<endl;

    cout<<"Kindly enter the number"<<endl;
    cin>>inputnum;
    cout<<endl;

    for (int s = 2; s<=inputnum/2; ++s){
        if (inputnum%s == 0){

            numprime = false;
            break;

        }
    }
        if (numprime){
            cout<<"The number "<<inputnum<<" is prime"<<endl;

        }
        else{

            cout<<"The number "<<inputnum<<" is not prime"<<endl;

        }



    return 0;
}
