#include <iostream>

using namespace std;

int main()
{
    cout << "Which table do you want?  ";
    int num;
    cin >> num;
    for(int i{1}; i <= 10; i++){
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}
