#ifndef WINDOWMAINCONTAINER_H
#define WINDOWMAINCONTAINER_H

#include <QMainWindow>

namespace Ui {
class WindowMainContainer;
}

class WindowMainContainer : public QMainWindow
{
    Q_OBJECT

public:
    explicit WindowMainContainer(QWidget *parent = nullptr);
    ~WindowMainContainer();

private slots:

private:
    Ui::WindowMainContainer *ui;
};

#endif // WINDOWMAINCONTAINER_H
