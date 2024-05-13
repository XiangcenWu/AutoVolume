#include "itkImageFileReader.h"
#include "itkImage.h"




template <typename TImage>
typename TImage::Pointer LoadNiftiImage(const char* fileName)
{
    using ReaderType = itk::ImageFileReader<TImage>;
    typename ReaderType::Pointer reader = ReaderType::New();
    reader->SetFileName(fileName);
    
    try
    {
        reader->Update();
    }
    catch (itk::ExceptionObject &err)
    {
        std::cerr << "Exception caught while reading NIfTI image!" << std::endl;
        std::cerr << err << std::endl;
        return nullptr;
    }
    
    return reader->GetOutput();
}