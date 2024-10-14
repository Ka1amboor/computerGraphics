#ifndef CIRCULARWIDGET_H
#define CIRCULARWIDGET_H

#include <QWidget>

class CircularWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CircularWidget(QWidget *parent = nullptr);

signals:

    // QWidget interface
// public slots:
//     void setVisible(bool visible);

// public:
//     QSize sizeHint() const;
//     QSize minimumSizeHint() const;
//     int heightForWidth(int) const;
//     bool hasHeightForWidth() const;

protected:
    // void mousePressEvent(QMouseEvent *event);
    // void mouseReleaseEvent(QMouseEvent *event);
    // void mouseDoubleClickEvent(QMouseEvent *event);
    // void mouseMoveEvent(QMouseEvent *event);
    // void wheelEvent(QWheelEvent *event);
    // void keyPressEvent(QKeyEvent *event);
    // void keyReleaseEvent(QKeyEvent *event);
    // void focusInEvent(QFocusEvent *event);
    // void focusOutEvent(QFocusEvent *event);
    // void enterEvent(QEnterEvent *event);
    // void leaveEvent(QEvent *event);
    void paintEvent(QPaintEvent *event);
    // void moveEvent(QMoveEvent *event);
    // void resizeEvent(QResizeEvent *event);
    // void closeEvent(QCloseEvent *event);
    // void contextMenuEvent(QContextMenuEvent *event);
    // void tabletEvent(QTabletEvent *event);
    // void actionEvent(QActionEvent *event);
    // void dragEnterEvent(QDragEnterEvent *event);
    // void dragMoveEvent(QDragMoveEvent *event);
    // void dragLeaveEvent(QDragLeaveEvent *event);
    // void dropEvent(QDropEvent *event);
    // void showEvent(QShowEvent *event);
    // void hideEvent(QHideEvent *event);
    // bool nativeEvent(const QByteArray &eventType, void *message, qintptr *result);
    // void changeEvent(QEvent *);
    // void inputMethodEvent(QInputMethodEvent *);

// public:
//     QVariant inputMethodQuery(Qt::InputMethodQuery) const;

// protected:
//     bool focusNextPrevChild(bool next);
};

#endif // CIRCULARWIDGET_H
