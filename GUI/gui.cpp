#include "Logic/SimpleWidget/SimpleWidget.h"
#include <QApplication>
#include "../ImageLoader/image_loader.cpp"

int main(int argc, char *argv[])
{

    using ImageType = itk::Image<float, 3>;
    ImageType::Pointer image = LoadNiftiImage<ImageType>("C:/Users/wxian/Downloads/data/data/001000_img.nii");

    if (image.IsNotNull())
    {
        std::cout << "Image loaded successfully!" << std::endl;
        std::cout << "Image size: " << image->GetLargestPossibleRegion().GetSize() << std::endl;
    }
    else
    {
        std::cerr << "Failed to load image." << std::endl;
        return EXIT_FAILURE;
    }




    QApplication a(argc, argv);
    SimpleWidget w;
    w.show();
    return a.exec();
}
