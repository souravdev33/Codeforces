#include <iostream>
#include <cctype>

int main() {
    std::string S;
    std::cin >> S;


    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == ',') S[i] = ' ';

    }


    for (int i = 0; i < S.length(); i++) {
        if (isupper(S[i]))
        {
            S[i] = tolower(S[i]);
        } else if (islower(S[i]))
        {
            S[i] = toupper(S[i]);
        }
    }

    std::cout << S << std::endl;

    return 0;
}





