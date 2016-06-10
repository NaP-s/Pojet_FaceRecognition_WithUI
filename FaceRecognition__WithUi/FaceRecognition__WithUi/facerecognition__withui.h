#ifndef FACERECOGNITION__WITHUI_H
#define FACERECOGNITION__WITHUI_H

#include <QtWidgets/QMainWindow>
#include "ui_facerecognition__withui.h"

class FaceRecognition__WithUi : public QMainWindow
{
	Q_OBJECT

public:
	FaceRecognition__WithUi(QWidget *parent = 0);
	~FaceRecognition__WithUi();

private:
	Ui::FaceRecognition__WithUiClass ui;
};

#endif // FACERECOGNITION__WITHUI_H
