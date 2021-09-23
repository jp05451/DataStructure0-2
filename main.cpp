#include <iostream>

using namespace std;

struct Bread
{
    int flourPerBread;
    int piece = 1;
};

int main()
{
    int flour;
    int breadLimit;
    struct Bread Waki;

    while (cin >> breadLimit >> flour)
    {

        Waki.flourPerBread = flour;
        Waki.piece = 2;
        for (int i = max(flour / 2, breadLimit); i <= flour; i++) //每個麵包麵粉用量
        {
            if (flour % i > flour-Waki.flourPerBread * Waki.piece)
            {
                Waki.flourPerBread = i;
                Waki.piece = flour / i;
            }
            else
            {
                break;
            }
        }
        cout << flour - Waki.piece * Waki.flourPerBread << endl;
    }
}