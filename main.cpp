//#include "simplemenu.h"
//#include "anothermenu.h"
//#include "checkable.h"
//#include "toolbar.h"
#include "skeleton.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

//    SimpleMenu window;
//    AnotherMenu window;
//    Checkable window;
//    Toolbar window;
    Skeleton window;

    window.resize(350,250);
//    window.setWindowTitle("SimpleMenu");
//    window.setWindowTitle("AnotherMenu");
//    window.setWindowTitle("QToolBar");
    window.setWindowTitle("Application skeleton");
    window.show();

    return app.exec();
}