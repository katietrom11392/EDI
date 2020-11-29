#include "qcalendar.h"

/***********************************************************************************************************
 * Each calendar that is created has its own database connections, specified by its object name.
 * We call get dates to get a vector of dates that an employee has a shift for.
 * We then set the style on the pen and brush for the calendar to be highlighted/painted when
 * it is rendered on the screen
***********************************************************************************************************/
    QCalendar::QCalendar(QWidget *parent)
       : QCalendarWidget(parent)
    {
       DatabaseConnection *dbc = new DatabaseConnection(this);
       thisDB = this->parent()->objectName();

       db4 = dbc->establishConnection(thisDB);
    }




    void QCalendar::setEmployee(QString employee){
        curEmployee = employee;
        getDates(curEmployee);
        m_outlinePen.setColor(Qt::transparent);
        //m_transparentBrush.setColor(QColor(245,101,37)); ORANGE
        m_transparentBrush.setColor(QColor(79,226,103)); // GREEN
        m_transparentBrush.setStyle(Qt::BDiagPattern);
    }





    /***********************************************************************************************************
     * We probably dont need this destructor?
    ***********************************************************************************************************/
    QCalendar::~QCalendar()
    {
        db4.removeDatabase(thisDB);
        db4.close();
    }



    /***********************************************************************************************************
     * Sets the color of our pen to outline our dates with
    ***********************************************************************************************************/
    void QCalendar::setColor(QColor& color)
    {
       m_outlinePen.setColor(color);
    }



    /***********************************************************************************************************
     * Gets the color of the pen to outline our dates with
    ***********************************************************************************************************/
    QColor QCalendar::getColor()
    {
       return (m_outlinePen.color());
    }

    /*
     * Returns a pointer to a string if the calendar has
     * the date on file, otherwise return an empty string.
     */

    QString QCalendar::getStart(const QDate &date){
        QString strt = "";
        for (auto d : shift_events){
            if (d.date == date){
                strt = d.start;
                break;
            }
        }
        return strt;
    }

    QString QCalendar::getEnd(const QDate &date){
        QString end = "";
        for (auto d : shift_events){
            if (d.date == date){
                end = d.end;
                break;
            }
        }
        return end;
    }

    void QCalendar::refresh(){
        shift_events.clear();
        m_dates.clear();
        getDates(curEmployee);
    }


    /***********************************************************************************************************
     * Paints/highlights the specified dates in the m_dates vector
    ***********************************************************************************************************/
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



    /***********************************************************************************************************
     * Gets the dates from the database for a particular employee's shift and creates a vector of shift events
     * and corresponding dates to hold the data. This data is accessed in our contrcutor for the calendar so
     * that it is loaded with the proper highlighting.
    ***********************************************************************************************************/
    void QCalendar::getDates(QString employee)
    {
        QDate date;
        QString start;
        QString end;
        shiftEvent s;

        QSqlQuery query(QSqlDatabase::database(thisDB));
        query.prepare("SELECT ShiftDate, StartHour, EndHour FROM Shift S JOIN Employee E ON E.EmployeeID = S.Employee WHERE S.Employee = :id");
        query.bindValue(":id", employee);
        query.exec();


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
