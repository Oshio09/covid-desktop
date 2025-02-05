#ifndef VOLUME_VISUALIZATION_WINDOW_H
#define VOLUME_VISUALIZATION_WINDOW_H

#include "Utils.h"

#include <QWidget>

namespace Ui {
	class VolumeVisualizationWindow;
}

class AppDataManager;
class QmitkRenderWindowWidget;
class VolumeVisualizationView;
class Qmitk3DRenderWidget;

class VolumeVisualizationWindow : public QWidget
{
	Q_OBJECT

public:
	explicit VolumeVisualizationWindow(QWidget *parent = nullptr);
	~VolumeVisualizationWindow();

public slots:
	void onNewDataLoadedEnd();

private:
	virtual void showEvent(QShowEvent *e) override;

	Ui::VolumeVisualizationWindow *ui;

	AppDataManager *m_AppData;

	Qmitk3DRenderWidget *view3D;

	VolumeVisualizationView *volumeVisualizationView;
};

#endif // VOLUME_VISUALIZATION_WINDOW_H
