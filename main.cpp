//#include "simplemenu.h"
//#include "anothermenu.h"
#include "checkable.h"


int main(int argc, char *argv[]){
    QApplication app(argc, argv);

//    SimpleMenu window;
//    AnotherMenu window;
    Checkable window;

    window.resize(350,250);
//    window.setWindowTitle("SimpleMenu");
//    window.setWindowTitle("AnotherMenu");
    window.setWindowTitle("Checkable menu");
    window.show();

    return app.exec();
}