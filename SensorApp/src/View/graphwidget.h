#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>

class GraphWidget : public QWidget {
    Q_OBJECT

public:
    GraphWidget(QWidget *parent = nullptr);

private:
    QGridLayout *graphLayout;
    QPushButton *runButton;
};

#endif // GRAPHWIDGET_H
