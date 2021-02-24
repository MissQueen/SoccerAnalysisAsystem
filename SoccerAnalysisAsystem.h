#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SoccerAnalysisAsystem.h"

class SoccerAnalysisAsystem : public QMainWindow
{
    Q_OBJECT

public:
    SoccerAnalysisAsystem(QWidget *parent = Q_NULLPTR);

private:
    Ui::SoccerAnalysisAsystemClass ui;
};
