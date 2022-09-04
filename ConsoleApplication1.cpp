#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{


    int N, A, B;
    cin >> N >> A >> B;
    int sum = 0;
    for (int i = A; i <= N; i++) {
        if (i >= 10) {

            int sumR = 0;
            int r = 0;
            int refI = i;
            while (refI != 0) {
                r = refI % 10;
                refI = refI / 10;

                sumR += r;
            }

            if (sumR >= A && sumR <= B) {
                sum += i;
            }
        }

        else {

            if (i >= A && i <= B) {
                sum += i;
            }
        }
    }

    cout << sum;


    return 0;

}
