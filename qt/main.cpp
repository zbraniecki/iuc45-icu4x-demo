#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QVBoxLayout>
#include <QtWidgets>

class MainWindow: QMainWindow
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QLabel *label_2;
    QComboBox *combo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(465, 264);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(60, 80, 321, 41));
        QFont font;
        font.setPointSize(20);
        plainTextEdit->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 140, 161, 41));
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 140, 161, 41));
        label_2->setFont(font);

        combo = new QComboBox(centralwidget);
        combo->setFont(font);
        combo->setGeometry(QRect(110, 30, 201, 31));
        /* void (QComboBox :: * fp) (int) = & QComboBox :: currentIndexChanged; */
        QObject::connect(combo,  SIGNAL(currentIndexChanged(int)), this, &MainWindow::commandChanged);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", "0", nullptr));
        plainTextEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Plural Rule:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "one", nullptr));

        QStringList commands = {
          "English",
          "French",
          "Spanish",
          "Russian"
        };
        combo->addItems(commands);
    } // retranslateUi

    void commandChanged(int idx) {
    }

};

int main(int argc, char *argv[ ])
{
  QApplication app(argc, argv);

  QMainWindow *window = new QMainWindow();

  MainWindow *mw = new MainWindow();
  mw->setupUi(window);

  window->resize(450, 250);
  window->show();

  return app.exec();
}
