#include <QtTest>
#include <QtGui>
#include "test_qlineedit.h"
#include <QLineEdit>

void Test_QLineEdit::paste()
{
    QLineEdit a;
    QTest::keyClicks(&a, "123ABCdf");
    QCOMPARE(a.text(), QString("123ABCdf"));
    a.clear();
    QTest::keyClicks(&a, "casFWE5239");
    QCOMPARE(a.text(), QString("casFWE5239"));

    QVERIFY(a.isModified());
}
