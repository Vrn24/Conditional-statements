/*22070123129*/
/*Varun Pagote*/
/*Experiment 3b*/

#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int n=1, note500, note100, note200, note50, note20, note10;

    for (note500 = 0; note500 <= amount / 500; note500++)
    {
        for (note100 = 0; note100 <= amount / 100; note100++)
        {
            for (note200 = 0; note200 <= amount / 200; note200++)
            {
                for (note50 = 0; note50 <= amount / 50; note50++)
                {
                    for (note20 = 0; note20 <= amount / 20; note20++)
                    {
                        for (note10 = 0; note10 <= amount / 10; note10++)
                        {
                            int sum = note500 * 500 + note100 * 100 + note200 * 200 + note50 * 50 + note20 * 20 + note10 * 10;
                            if (sum == amount)
                            {
                                cout << "Combination "<<n<<": ";
                                if (note500 > 0) cout <<endl<< "500 rupees notes: " << note500 << " "<<endl;
                                if (note100 > 0) cout << "100 rupees notes: " << note100 << " "<<endl;
                                if (note200 > 0) cout << "200 rupees notes: " << note200 << " "<<endl;
                                if (note50 > 0) cout << "50 rupees notes: " << note50 << " "<<endl;
                                if (note20 > 0) cout << "20 rupees notes: " << note20 << " "<<endl;
                                if (note10 > 0) cout << "10 rupees notes: " << note10 << " "<<endl;
                                cout << endl;
                                n=n+1;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}