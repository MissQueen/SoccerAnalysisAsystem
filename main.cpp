#include "SoccerAnalysisAsystem.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SoccerAnalysisAsystem w;
    w.show();
    return a.exec();
}
