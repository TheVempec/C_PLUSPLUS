#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Оголошення змінних
    double pi4 = 0.0;          // Акумулятор для суми ряду (π/4)
    double sign = 1.0;         // Чергування знаку (+1, -1, +1, ...)
    long n;                    // Кількість (доданків)
    double denominator = 1.0; // Змінна для відстеження непарного знаменника: 1, 3, 5, 7...
    
    cout << "Number of iterations?";
    cin >> n;

    for (long i = 0; i < n; ++i) {
        
        double term = sign / denominator;
        pi4 += term; 
        
        // Оновлення для наступної ітерації:
        sign = -sign;
        
        //Збільшення знаменника на 2: 1 -> 3 -> 5
        denominator += 2.0; 
    }
    
    double pi_value = pi4 * 4.0;

   
    cout <<fixed <<setprecision(20)//кількість знаків після коми
    
    cout << "Pi = " << pi_value << endl;

    return 0;
}

