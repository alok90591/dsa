#include <iostream>
using namespace std;


class Solution {
public:
    int reverse(int n) {
        
        int rev = 0;
        int digit;
        int sign = 1;

        
        if(n < 0){
            sign = -1;
            n = -n;   
        }

        while(n != 0){
            digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }

        return sign * rev;
    }
};
int main(){
    Solution obj;
    int num;

    cout << "Enter number: ";
    cin >> num;

    cout << "Reverse number is: " << obj.reverse(num);

    return 0;
}
