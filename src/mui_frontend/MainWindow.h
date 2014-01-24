#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <mame_interface/GameList.h>
#include <mame_interface/Settings.h>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow {
	Q_OBJECT

	public:
		explicit MainWindow(QWidget* parent = 0);
		~MainWindow();

	public slots:


	private slots:
		//UI Events


		void on_Btn_LoadGames_clicked();

		void on_actionSettings_triggered();

	signals:


	private:
		Ui::MainWindow *ui;

		GameList gameListManger;
		Settings settings;
		QMap<QString, QString> games;

		/**
		 * @brief Makes the connections for any custom slots and signals.
		 *			Called during class construction
		 */
		void SetupCustomSlotsAndSignals();

		void LoadSettings();
		void SaveSettings();
};

#endif
