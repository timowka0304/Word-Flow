#include <QtTest>
#include <QtGui>
#include "test_radiobutton.h"
#include <QRadioButton>

void test_radiobutton::click()
{
    QRadioButton a;
    QTest::mouseClick(&a, Qt::MouseButton::LeftButton);
    QCOMPARE(a.isChecked(), false);
}
