#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    for(int i=0;i<11;i++){                          //Creating 10X10 field.
        for(int j=0;j<11;j++){
            if(j>1&&j<i+2&&i<9){cout<<" ";}         //If this conditions(triangle) are met, It prints " "(space).
            else{cout<<"*";}                        //Else prints "*" on the field...
            }
        cout<<endl;
        }
system("PAUSE");}                                   //Pauses the system in order to make the artwork visible. :P
