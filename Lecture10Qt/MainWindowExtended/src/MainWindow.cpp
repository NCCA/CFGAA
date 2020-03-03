#include "MainWindow.h"
#include <QApplication>

MainWindow::MainWindow(QWidget *_parent ): QMainWindow(_parent)
{
  resize(QSize(1024,720));
  setWindowTitle(QString("Extending a MainWindow Class"));
}

MainWindow::~MainWindow()
{
}


void MainWindow::keyPressEvent(QKeyEvent *_event)
{
  // this method is called every time the main window recives a key event.
  // we then switch on the key value and set the camera in the GLWindow
  switch (_event->key())
  {
    case Qt::Key_Escape : QApplication::exit(EXIT_SUCCESS); break;
    default : break;
  }
}

void MainWindow::resizeEvent ( QResizeEvent * _event )
{
  QSize size=_event->size();

  QString title=QString("Extending a MainWindow Class size is %1 %2")
                       .arg( size.width())
                       .arg( size.height());
  this->setWindowTitle(title);

}

