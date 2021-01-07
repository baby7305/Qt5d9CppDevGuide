#include "qwmainwindow.h"
#include <QApplication>

#include    <QPixmap>
#include    <QSplashScreen>
#include    "qdlgLogin.h"


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    QDlgLogin   *dlgLogin=new QDlgLogin; //创建对话框

    if (dlgLogin->exec()==QDialog::Accepted)
    {
//        delete dlgLogin;
        QWMainWindow w;
        w.show();
        return a.exec();
    }
    else
        return  0;
}
