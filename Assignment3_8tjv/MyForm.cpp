#include "MyForm.h" //the header name for your form

using namespace Project2; //the project name in your header file

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false); 

    Application::Run(gcnew MyForm());
    return 0;
}