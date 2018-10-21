#include <iostream>
#include <imebra/imebra.h>

using namespace std;

int main() 
{
    cout << "Hello, World!";
    unique_ptr<imebra::DataSet> loadedDataSet(imebra::CodecFactory::load("DicomFile.dcm"));
    return 0;
}
