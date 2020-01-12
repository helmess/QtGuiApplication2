#include "QtGuiApplication2.h"
#include <qdebug.h>

QtGuiApplication2::QtGuiApplication2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QPushButton* btn = new QPushButton(this);
	btn->setText( "click");
	connect(btn, &QPushButton::clicked, this, [=]()
		{
			qDebug() << "hello GIT" ;
		});
	QPushButton* btn1 = new QPushButton(this);
	btn1->setText("click_2");
	btn1->move( QPoint(0,100));
	connect(btn1, &QPushButton::clicked, this, [=]()
		{
			qDebug() << "hello World";
		});
	//github has committed



}
