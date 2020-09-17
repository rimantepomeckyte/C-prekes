#include <iostream>

using namespace std;

int main()
{
    int a=574, b=20, c=4;
    cout<<"Dideliu deziu reikia: "<<a/b <<endl;
    cout << "Mazu deziu reikia: " << (a-(b*(a/b)))/c<<endl;
    cout<<"Lik prekiu: "<<(a-(b*(a/b)))%c<< endl;
    return 0;
}
