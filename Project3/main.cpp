#include <iostream>

using namespace std;

int main()
{
    for(int i{0}; i <= 50; ++i){
        if(i % 2 == 0){
            cout << i << " is an Even number" << endl;
        }else cout << i << " is odd number" << endl;
    }
    return 0;
}
