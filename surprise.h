#ifndef SURPRISE_H
#define SURPRISE_H

#include <QWidget>
#include <QLabel>

namespace Ui {
class Surprise;
}

class Surprise : public QWidget
{
    Q_OBJECT

public:
    explicit Surprise(QWidget *parent = nullptr);
    ~Surprise();
    QLabel image;

private slots:
    void on_giantButton_clicked();

private:
    Ui::Surprise *ui;
};

#endif // SURPRISE_H
