// person.h
#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QString>
#include <QColor>

class Person : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QColor primaryColor READ primaryColor WRITE setPrimaryColor NOTIFY primaryColorChanged)

public:
    explicit Person(QObject *parent = nullptr) : QObject(parent), m_name("Pranav N Rao"), m_primaryColor("#FF00FF") {}

    QString name() const { return m_name; }
    QColor primaryColor() const { return m_primaryColor; }

    void setName(const QString &name) {
        if (name != m_name) {
            m_name = name;
            emit nameChanged();
        }
    }

    void setPrimaryColor(const QColor &primaryColor) {
        if (primaryColor != m_primaryColor) {
            m_primaryColor = primaryColor;
            emit primaryColorChanged();
        }
    }

signals:
    void nameChanged();
    void primaryColorChanged();

private:
    QString m_name;
    QColor m_primaryColor;
};

#endif
