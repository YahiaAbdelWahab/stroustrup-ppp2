#include "../headers/std_lib_facilities.h"

int main()
{
    vector<double> distances;
    double largest, smallest, total;
    bool isInit = true;
    cout << "Enter distances between cities: ";
    for (double distance; cin>>distance;) {
        distances.push_back(distance);
    }

    if (isInit) {
        largest = distances[0];
        smallest = distances[0];
        total = 0;
        isInit = false;
    }

    for (double distance : distances) {
        total += distance;
        if (distance > largest)
            largest = distance;
        else if (distance < smallest)
            smallest = distance;
    }

    cout << "The largest distance is: " << largest << endl;
    cout << "The smallest distance is: " << smallest << endl;
    cout << "The mean is: " << total / distances.size() << endl;
    return 0;
}