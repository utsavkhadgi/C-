#include <iostream>
    using namespace std;

    template<class S>

    void Swap(S &a,S &b){

        S temp=a;
            a=b;
            b=temp;


    }

    int main(){
        int x=5,y=6;
        float a=4.5,b=3.5;

        cout<<"Before Swapping\n";

        cout<<"x="<<x<<" y="<<y;
         cout<<" a="<<a<<" b="<<b;
        Swap(x,y);
        Swap(a,b);

        cout<<"\n\nAfter Swapping\n";
        cout<<"x="<<x<<" y="<<y;
         cout<<" a="<<a<<"b="<<b;


        return 0;

    }
