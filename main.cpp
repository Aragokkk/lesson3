#include <iostream>

int main(){
    const int a = 1;
    const int b = 4;
    const int c = 2;
    const int d = 3;
    extern const int aa;
    extern const int bb;
    extern const int cc;
    extern const int dd;
    double answer{};
    double answerr{};
    answer = (double) a * ((double) b + ((double) c / (double) d));
    answerr = (double) aa * ((double) bb + ((double) cc / (double) dd));
    
    std::cout << answer << std::endl;
    std::cout << answerr << std::endl;

    int answer2;
    int second;
    std::cin >> second;
    
    int first_option;
    int second_option;

    first_option = second - 21;
    second_option = 2 * (second - 21);

    answer2 = (21 > second) ? first_option : second_option;

    std::cout << answer2 << std::endl;

    return 0;
};