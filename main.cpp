#include <QApplication>
#include <QPushButton>
#include "./ui_RemoteControl.h"
#include "RemoteControl.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    CallerMainWindow window(nullptr);
    Ui::MainWindow calc;
    calc.setupUi(&window);
    window.Info = calc.Info;
    window.resize(240, 680);
    window.show();
    return QApplication::exec();
}
