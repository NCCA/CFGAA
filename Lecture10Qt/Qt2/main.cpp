#include <QApplication>
#include <QPushButton>
#include <QMainWindow>
#include <QWidget>

int main(int argc, char *argv[])
{
  // create the main Qt app
  QApplication app(argc, argv);
  // create a main window widget
  QMainWindow mainwin;
  // set the name
  mainwin.setObjectName(QString::fromUtf8("MainWindow"));
  // set the size
  mainwin.resize(200,200);
  // set the title of the window
  mainwin.setWindowTitle("A MainWindow App");
  // create a central widget with the main window as the parent
  QWidget *centralwidget = new QWidget(&mainwin);
  // create a push button with the central widget as the parent
  QPushButton *button = new QPushButton(centralwidget);
  // set the name
  button->setObjectName(QString::fromUtf8("button"));
  // set the geometry
  button->setGeometry(QRect(10, 80, 100, 32));
  // set the text of the button
  button->setText("Button");
  // set the central widget for the main window
  mainwin.setCentralWidget(centralwidget);
  // show the window
  mainwin.show();
  // run the application
  return app.exec();
}
