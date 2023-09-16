#include <iostream>
#include <vector>
#include <cmath>
using namespace std ; 
vector <int> decimalToBinary1(int n)                        //using vector
{
    vector <int> ans;
    while(n > 0)
    {
        ans.push_back(n%2);
        n /= 2;
    }
    return ans;
}

int decimalToBinary2(int n)                                  //using bitwise and
{
    int i = 0, binaryNumber = 0;
    while(n > 0)
    {
        int bit = n&1;
        binaryNumber = binaryNumber + (bit * pow(10, i++));
        n = n >> 1;
    }
    return binaryNumber;
}

int decimalToBinary3(int n)                                  //by normally reversing the number
{
    int i = 0, binaryNumber = 0;
    while(n > 0)
    {
        int bit = n%2;
        binaryNumber = binaryNumber + (bit * pow(10, i++));
        n = n/2;
    }
    return binaryNumber;
}
int main() {
    int num;
    cout << "Enter the decimal number : ";
    cin >> num;
    cout << "Binary representation of " << num << " is: \n";
    //method 1
    vector <int> binary = decimalToBinary1(num);
    for(int i = binary.size()-1 ; i >= 0 ; i--)
        cout << binary[i];
    cout << endl;
    //method 2
    cout << decimalToBinary2(num) << endl;
    //method 3
    cout << decimalToBinary3(num) << endl;
    return 0;
}
