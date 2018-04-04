#ifndef IMAGELABEL_H
#define IMAGELABEL_H


#include <QLabel>
#include <QImage>
#include <QImageReader>

#include <QFileDialog>

#include <QtDebug>

class ImageLabel : public QLabel {
	Q_OBJECT
public:
	ImageLabel();
	ImageLabel(QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags());
	~ImageLabel();
	
    void openFileDialog();
    bool loadFile();
	
private:
	QImage image;
	QImageReader imageReader;
};

#endif
