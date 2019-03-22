#include "../headers/std_lib_facilities.h"

int main()
{
    vector<double> temps;
    double median;
    for (double temp; cin>>temp;) {
        temps.push_back(temp);
    }

    sort(temps);
    if (temps.size()%2 == 0) {
        //even
        int index1 = (temps.size() + 1) / 2;
        int index2 = index1 + 1;

        median = (temps[index1-1] + temps[index2-1]) / 2;
    } else {
        //odd
        int index = (temps.size() + 1) / 2;
        median = temps[index-1];
    }
    cout << "The median is: " << median << endl;
    return 0;
}