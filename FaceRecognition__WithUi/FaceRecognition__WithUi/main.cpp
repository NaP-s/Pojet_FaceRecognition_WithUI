#include "facerecognition__withui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FaceRecognition__WithUi w;
	w.show();
	return a.exec();
}
