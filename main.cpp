#include <iostream>

double pow(double base, double exponent){
    int answer = base;
    if (exponent >= 0){
        if (exponent == 0){
            answer = 1;
            std::cout << "Answer: " + std::to_string(answer) << std::endl;
            return 0;
        }
        for (int i = 0; i < exponent-1; i++){
            answer*=base;
        }
        std::cout << "Answer: " + std::to_string(answer) << std::endl;
        return answer;
    } else {
        std::cout << "Error, exponent is negative" << std::endl;
        return 0;
    }
}



int main() {
    using namespace std;
    double base{};
    double power{};
    cout << "What is the base?" << endl;
    cin >> base;
    cout <<"What is the exponent?" << endl;
    cin >> power;
    pow(base, power);

    return 0;
}