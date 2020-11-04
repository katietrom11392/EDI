#ifndef QCALENDAR_H
#define QCALENDAR_H

#include <QCalendarWidget>
#include <QColor>
#include <QDate>
#include <QPen>
#include <QBrush>

#include <databaseconnection.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>


class QCalendar : public QCalendarWidget
{
Q_OBJECT

Q_PROPERTY(QColor color READ getColor WRITE setColor)

public:
   QCalendar(QWidget *parent = 0);
   ~QCalendar();

   void setColor(QColor& color);
   QColor getColor();

protected:
   virtual void paintCell(QPainter *painter, const QRect &rect, const QDate &date) const;

private:

   struct shiftEvent
   {
       QDate date;
       QString start;
       QString end;
   };

   shiftEvent shift;

   QList<shiftEvent> shift_events;
   QList<QDate> m_dates;

   QPen m_outlinePen;
   QBrush m_transparentBrush;

   void getDates();

   QSqlDatabase db4;
};

#endif // QCALENDAR_H
