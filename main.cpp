#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MyBytton : public QWidget{

public:
    MyBytton(QWidget *parent = 0);
};
MyBytton::MyBytton(QWidget *parent) : QWidget(parent) {
    QPushButton *quitBtn = new QPushButton("Quit", this);
    quitBtn->setGeometry(50,40,75,30);

    connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MyBytton window;

    window.resize(250, 150);
    window.setWindowTitle("QPushButton");
    window.show();

    return app.exec();
}