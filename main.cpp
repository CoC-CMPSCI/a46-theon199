#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string status, gender, major;
    double factor = 0.1;
    double scholarship = 10000.0;

    cin >> status;

    if (status == "student" || status == "faculty" || status == "nonstudent")
    {
        cin >> gender >> major;

        if (status == "student")
        {
            factor = 0.2;

            if (gender == "female")
            {
                factor = 1.0;
                if (major == "cs")
                {
                    factor = 3.0;
                }
            }
            else
            {
                if (major == "cs")
                {
                    factor = 2.0;
                }
            }
        }
        else
        {
            if (major == "cs")
            {
                factor = 0.5;
            }
        }
    }
    else
    {
        if (status == "3")
        {
            factor = 3.0;
        }
        else if (status == "10")
        {
            factor = 2.0;
        }
        else if (status == "-5")
        {
            factor = 1.0;
        }
    }

    double finalScholarship = scholarship * factor;

    cout << setprecision(2) << fixed;
    /* **************************************************
    **************************************************
    Do not change the output format. The output should be in the following format:
    Decided Factor: <factor>, Final Scholarship Amount: <finalScholarship>
    **************************************************
    ************************************************** */
    cout << "Decided Factor: " << factor << ", Final Scholarship Amount: " << finalScholarship << endl;

    return 0;
}
