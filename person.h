// person.h
#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QString>

class Person : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)

public:
    explicit Person(QObject *parent = nullptr) : QObject(parent), m_name("Pranav N Rao") {}

    QString name() const { return m_name; }
    void setName(const QString &name) {
        if (name != m_name) {
            m_name = name;
            emit nameChanged();
        }
    }

signals:
    void nameChanged();

private:
    QString m_name;
};

#endif // PERSON_H
