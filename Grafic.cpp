#include "sciplot/sciplot.hpp"
#include "mainHeader.h"

//#include <gnuplot-master/src>
using namespace sciplot;
using namespace std;


int graf_m(int count, vector<int> array_y) {
    //int array[8];
    vector<int> x(count);
    vector<int> y;
    Vec palka, xpalka;
    Plot plot;
    plot.size(800,800);
    plot.legend().atOutsideBottom().displayHorizontal();

    plot.xlabel("X");
    plot.ylabel("Y");
    plot.xrange(-1.0, array_y[array_y.size()-1] + 1);
    plot.yrange(0.0, 100);

    for (int i = 0; i < count; i++){
        palka = linspace(0.0, array_y[i], 100);
        xpalka = linspace(i,i,100);
        plot.drawCurve(xpalka,palka).label(to_string(i));
    }

    //plot.show();
    plot.save("plot.png");
    return 0;
}
int graf_s(int count, vector<int> array_y, int iter_gr) {
    //int array[8];
    vector<int> x(count);
    vector<int> y;
    Vec palka, xpalka;
    Plot plot;
    plot.size(800,800);
    plot.legend().atOutsideBottom().displayHorizontal();

    plot.xlabel("X");
    plot.ylabel("Y");
    plot.xrange(-1.0, array_y[array_y.size()-1] + 1);
    plot.yrange(0.0, 100);

    for (int i = 0; i < count; i++){
        palka = linspace(0.0, array_y[i], 100);
        xpalka = linspace(i,i,100);
        plot.drawCurve(xpalka,palka).label(to_string(i));
    }

    //plot.show();
    char outstring[11];
    sprintf(outstring, "plot%d.png",iter_gr);
    plot.save(outstring);

    return 0;
}
