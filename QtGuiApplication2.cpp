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


}
