#include "MainWindow.h"
#include "ImageLoader.h"
#include <iostream>


int main(int argc, char *argv[])
{
    std::cout << test_image << std::endl;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

