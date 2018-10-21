#include <iostream>
#include <imebra/imebra.h>

using namespace std;

int main() 
{
    cout << "Hello, World!\n";
    
    unique_ptr<imebra::DataSet> loadedDataSet(imebra::CodecFactory::load("000001.dcm"));
    wstring patientNameCharacter = loadedDataSet->getUnicodeString(imebra::TagId(imebra::tagId_t::PatientID_0010_0020), 0, L"");

	wcout << "PatientID: " << patientNameCharacter << endl;

    return 0;
}
