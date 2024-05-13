#include "MainWindow.h"
#include "ImageLoader.h"
#include <QStyleFactory>
#include <iostream>


int main(int argc, char *argv[])
{

    std::cout << test_image << std::endl;
    QApplication a(argc, argv);
    MainWindow w;
    w.setStyleSheet("QWidget { background-color: white; }");
    w.show();
    return a.exec();
}

