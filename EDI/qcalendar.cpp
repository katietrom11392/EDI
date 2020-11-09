#include <QPainter>
#include "qcalendar.h"


    QCalendar::QCalendar(QWidget *parent)
       : QCalendarWidget(parent)
    {
       DatabaseConnection *dbc = new DatabaseConnection(this);
       db4 = dbc->establishConnection("four");
       //shift.date = QDate::currentDate();
       getDates();
       m_outlinePen.setColor(Qt::transparent);
       //m_transparentBrush.setColor(QColor(245,101,37)); ORANGE
       m_transparentBrush.setColor(QColor(79,226,103)); // GREEN
       m_transparentBrush.setStyle(Qt::BDiagPattern);

    }

    QCalendar::~QCalendar()
    {

    }

    void QCalendar::setColor(QColor& color)
    {
       m_outlinePen.setColor(color);
    }

    QColor QCalendar::getColor()
    {
       return (m_outlinePen.color());
    }

    void QCalendar::paintCell(QPainter *painter, const QRect &rect, const QDate &date) const
    {
       QCalendarWidget::paintCell(painter, rect, date);
       if (m_dates.contains(date))
       {
           painter->setPen(m_outlinePen);
           painter->setBrush(m_transparentBrush);
           painter->setBackground(m_transparentBrush);
           painter->drawRect(rect.adjusted(0, 0, -1, -1));
       }
    }



    void QCalendar::getDates()
    {
        QDate date;
        QString start;
        QString end;
        shiftEvent s;

        QSqlQuery query(QSqlDatabase::database("four"));
        QString queryString;
        queryString = "SELECT ShiftDate, StartHour, EndHour FROM Shift S JOIN Employee E ON E.EmployeeID = S.Employee WHERE S.Employee = 92";
        query.exec(queryString);


        while(query.next()) {
            date = QDate::fromString(query.value(0).toString(), "yyyyMMdd");
            start = query.value(1).toString();
            end = query.value(2).toString();

            s.date = date;
            s.start = start;
            s.end = end;

            shift_events.append(s);
            m_dates.append(date);
        }
    }
