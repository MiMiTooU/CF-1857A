#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    bool chk = 0;
    int state=0;
    int t;
    cin >> t;
    int length = 0;
    if (t >= 1 && t <= 1000)
    {
        for (int a = 0; a < t; a++)
        {
            state = 0;
            length = 0;
            cin >> length;
            if (length >= 2 && length <= 50)
            {
                vector <int> array(length, 0);
                for (int b = 0; b < length; b++)
                {
                    cin >> array[b];
                    if (array[b] < 1 || array[b]>50)
                    {
                        chk = 1;
                        break;
                    }
                    if (array[b] % 2 != 0)
                    {
                        state++;
                    }
                }
                if (chk)
                {
                    break;
                }
                if (state % 2 == 0)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    else
    {
        chk = 1;
    }
    return 0;
}