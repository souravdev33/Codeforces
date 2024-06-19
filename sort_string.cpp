#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    char S[N];
    cin >> S;

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (S[j] > S[j + 1])
            {

                char temp = S[j];
                S[j] = S[j + 1];
                S[j + 1] = temp;
            }
        }
    }


    cout << S << endl;

return 0;
}
