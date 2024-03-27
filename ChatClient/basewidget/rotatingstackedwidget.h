#ifndef ROTATINGSTACKEDWIDGET_H
#define ROTATINGSTACKEDWIDGET_H

#include <QWidget>
#include <QVariant>
#include <QStackedWidget>

class RotatingStackedWidget : public QStackedWidget
{
    Q_OBJECT
    Q_PROPERTY( float rotateVal READ rotateVal WRITE setRotateVal)
public:
    /**
     * @brief RotatingStackedWidget 构造函数
     * @param parent
     */
    explicit RotatingStackedWidget(QWidget *parent = 0);
    ~RotatingStackedWidget();

    /**
     * @brief paintEvent 绘制事件
     */
    void paintEvent(QPaintEvent *event);

public slots:
    /**
     * @brief nextPage 下一页
     */
    void nextPage();

public:

    /**
     * @brief rotate index 跳转到索引页
     */
    void rotate(int index);

    /**
     * @brief rotateVal 旋转值
     * @return
     */
    float rotateVal();

    /**
     * @brief setRotateVal 设置旋转值
     * @param fl 值
     */
    void setRotateVal(float fl);

private slots:
    /**
     * @brief valChanged 旋转值改变了
     */
    void valChanged(QVariant);

    /**
     * @brief animDone 动画结束
     */
    void animDone();

private:
    /**
     * @brief iRotateVal 旋转值
     */
    float iRotateVal;

    /**
     * @brief isAnimating 旋转动画中
     */
    bool isAnimating;

    /**
     * @brief nextIndex 下一个索引页
     */
    int nextIndex;
};

#endif // ROTATINGSTACKEDWIDGET_H
