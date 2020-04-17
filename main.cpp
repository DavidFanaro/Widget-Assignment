#include <iostream>

using namespace std;

class Widget
{
public:
    // Constructor with default values
    Widget(int numShifts = 2, int perHr = 10, int numHrs = 8)
    {
        shiftsPerDay = numShifts;
        widgetsPerHour = perHr;
        shiftLength = numHrs;
    }

    
    double daysToProduce(int);

private:

int shiftsPerDay, widgetsPerHour, shiftLength;

};

double Widget::daysToProduce(int widgets)
{

    double result;

    int fullWorkDay = shiftsPerDay * shiftLength;
    int widgetPerDay = fullWorkDay * widgetsPerHour;

    result = (double)widgets / (double)widgetPerDay;

    return result;
}


int main(int argc, char const *argv[])
{
    Widget wMaker;
    int pWidgets;

    cout << "This program will calculate widget production time." << endl;

    cout << "How many widgets are on order? ";
    cin >> pWidgets;

    cout << "It will take " << wMaker.daysToProduce(pWidgets) << " days to produce " << pWidgets << " widgets." << endl;
    
    return 0;
}
