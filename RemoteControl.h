//
// Created by nekro on 17.10.2022.
//

#ifndef DZ37_3_REMOTECONTROL_H
#define DZ37_3_REMOTECONTROL_H

#include <QMainWindow>
#include <QtWidgets/QLineEdit>

class CallerMainWindow : public QMainWindow {
Q_OBJECT

public:

    QLineEdit* Info = nullptr;


    int chanel = 0;
    int volume = 100;

    QString text = "";

    CallerMainWindow(QWidget* parent = nullptr): QMainWindow(parent) {}

private:

    void showInfo ()
    {
        Info->setText("C: " + QString::number(chanel) + "  VOL: " + QString::number(volume));
    }

public slots:
    void add0() { text = text + "0";};
    void add1() { text = text + "1";};
    void add2() { text = text + "2";};
    void add3() { text = text + "3";};
    void add4() { text = text + "4";};
    void add5() { text = text + "5";};
    void add6() { text = text + "6";};
    void add7() { text = text + "7";};
    void add8() { text = text + "8";};
    void add9() { text = text + "9";};
    void ok() {
        if (!text.isEmpty())
        {
            chanel = QString(text).toInt();
            showInfo();
            text = "";
        };
    };
    void chpl() { ++chanel;
        showInfo();
    };
    void chmin() { if (chanel >0) --chanel;
        showInfo();
    };
    void volpl() { if (volume>=0 && volume <100) volume +=10;
        showInfo();
    };
    void volmin() { if (volume>0 && volume <=100) volume -=10;
        showInfo();
    };
};

#endif //DZ37_3_REMOTECONTROL_H
