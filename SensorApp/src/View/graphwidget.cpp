#include "graphwidget.h"
#include <QSpacerItem>
#include <QIcon>

GraphWidget::GraphWidget(QWidget *parent)
    : QWidget(parent) {

    // Graph Layout
    graphLayout = new QGridLayout(this);

    // Horizontal Spacer
    QSpacerItem *horizontalSpacer = new QSpacerItem(399, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    graphLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

    // Run Button
    runButton = new QPushButton(this);
    runButton->setText("Run");
    runButton->setToolTip("Generate graph");
    runButton->setIcon(QIcon(":/img/Assets/run.png"));
    graphLayout->addWidget(runButton, 0, 1, 1, 1);

    // Graph Widget Contents
    QWidget *graphWidgetContents = new QWidget(this);
    graphLayout->addWidget(graphWidgetContents, 1, 0, 1, 1);

    // Vertical Spacer
    QSpacerItem *verticalSpacer = new QSpacerItem(20, 306, QSizePolicy::Minimum, QSizePolicy::Expanding);
    graphLayout->addItem(verticalSpacer, 1, 1, 1, 1);
}
