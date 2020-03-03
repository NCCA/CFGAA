#include <QApplication>
#include <QMainWindow>
#include <QtWebEngineWidgets>
#include <QPushButton>
#include <QToolBar>

int main(int argc, char *argv[])
{
  // make an instance of the QApplication
  QApplication a(argc, argv);
  // Create a new MainWindow
  QMainWindow w;

	QToolBar *toolbar= new QToolBar();
  QPushButton *back= new QPushButton("back");
  QPushButton *fwd= new QPushButton("fwd");
  toolbar->addWidget(back);
  toolbar->addWidget(fwd);

  w.addToolBar(toolbar);

  QWebEngineView *page = new QWebEngineView();
	page->load(QUrl("http://www.google.co.uk"));

  QObject::connect(back,SIGNAL(clicked()),page,SLOT(back()));
  QObject::connect(fwd,SIGNAL(clicked()),page,SLOT(forward()));


	w.setCentralWidget(page);
  w.resize(1024,720);
  // show it
  w.show();
  // hand control over to Qt framework
  return a.exec();
}
