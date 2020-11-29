#ifndef QCALENDAR_H
#define QCALENDAR_H

#include <QCalendarWidget>
#include <QColor>
#include <QDate>
#include <QPen>
#include <QBrush>
#include <QPainter>

#include <databaseconnection.h>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>


/*****************************************************************************************************************************************
 * QCalendar is used written as a subclass of the QT provided QCalendarWidget class.
 * This class was needed to override properties of our CalendarWidgets within the windowmain.ui and controltab_vieweditemployee.ui files.
 * The properties to be overridden include the way particular dates are highlighted.
 * These dates are loaded from the MYSQL database.
 *****************************************************************************************************************************************/

class QCalendar : public QCalendarWidget
{
Q_OBJECT


Q_PROPERTY(QColor color READ getColor WRITE setColor)

public:
   QCalendar(QWidget *parent = 0);
   ~QCalendar();
   void setColor(QColor& color);
   QColor getColor();
   QString getStart(const QDate &date);
   QString getEnd(const QDate &date);
   void refresh();
   void setEmployee(QString employee);

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

   void getDates(QString employee);

   QSqlDatabase db4;
   QString thisDB;

   QString curEmployee;
};

#endif // QCALENDAR_H
