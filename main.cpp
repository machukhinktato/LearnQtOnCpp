//#include "simplemenu.h"
//#include "anothermenu.h"
//#include "checkable.h"
#include "toolbar.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

//    SimpleMenu window;
//    AnotherMenu window;
//    Checkable window;
    Toolbar window;

    window.resize(350,250);
//    window.setWindowTitle("SimpleMenu");
//    window.setWindowTitle("AnotherMenu");
    window.setWindowTitle("QToolBar");
    window.show();

    return app.exec();
}