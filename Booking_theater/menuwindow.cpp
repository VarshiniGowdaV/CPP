#include "MainWindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
{
    manager = new TheaterManager();
    calendar = new Calendar(manager);

    // Create the calendar display label
    calendarDisplayLabel = new QLabel(this);
    calendarDisplayLabel->setText("Calendar will be displayed here.");
    calendarDisplayLabel->setAlignment(Qt::AlignCenter);

    // Create buttons
    prevMonthButton = new QPushButton("<-", this);
    nextMonthButton = new QPushButton("->", this);
    bookTheatreButton = new QPushButton("Book Theatre", this);
    checkBookingsButton = new QPushButton("Check Bookings", this);
    exitButton = new QPushButton("Exit", this);

    // Set button positions using setGeometry
    prevMonthButton->setGeometry(50, 50, 80, 40);
    nextMonthButton->setGeometry(150, 50, 80, 40);
    bookTheatreButton->setGeometry(50, 100, 200, 40);
    checkBookingsButton->setGeometry(50, 150, 200, 40);
    exitButton->setGeometry(50, 200, 200, 40);

    // Connect buttons to their respective slots
    connect(prevMonthButton, &QPushButton::clicked, this, &MainWindow::onPrevMonthClicked);
    connect(nextMonthButton, &QPushButton::clicked, this, &MainWindow::onNextMonthClicked);
    connect(bookTheatreButton, &QPushButton::clicked, this, &MainWindow::onBookTheatreClicked);
    connect(checkBookingsButton, &QPushButton::clicked, this, &MainWindow::onCheckBookingsClicked);
    connect(exitButton, &QPushButton::clicked, this, &MainWindow::onExitClicked);

    // Layout setup
    QVBoxLayout* mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(calendarDisplayLabel);
    mainLayout->addWidget(prevMonthButton);
    mainLayout->addWidget(nextMonthButton);
    mainLayout->addWidget(bookTheatreButton);
    mainLayout->addWidget(checkBookingsButton);
    mainLayout->addWidget(exitButton);

    setLayout(mainLayout);

    setWindowTitle("Theatre Booking System");
    resize(300, 400);
}

MainWindow::~MainWindow()
{
    delete calendar;
    delete manager;
}

void MainWindow::onPrevMonthClicked()
{
    calendar->prevMonth();
    calendar->showCalendar();
    calendarDisplayLabel->setText(QString::fromStdString(calendar->showCalendar()));
}

void MainWindow::onNextMonthClicked()
{
    calendar->nextMonth();
    calendar->showCalendar();
    calendarDisplayLabel->setText(QString::fromStdString(calendar->showCalendar()));
}

void MainWindow::onShowCalendarClicked()
{
    calendar->showCalendar();
    calendarDisplayLabel->setText(QString::fromStdString(calendar->showCalendar()));
}

void MainWindow::onBookTheatreClicked()
{
    bool ok;
    QString dateStr = QInputDialog::getText(this, "Enter Date", "Enter date (DD-MM-YYYY):", QLineEdit::Normal, "", &ok);
    if (ok && !dateStr.isEmpty()) {
        std::string date = dateStr.toStdString();
        QString theatreId = QInputDialog::getText(this, "Enter Theatre ID", "Enter theatre ID:", QLineEdit::Normal, "", &ok);
        if (ok && !theatreId.isEmpty()) {
            if (!manager->isAvailable(date.toStdString(), theatreId.toStdString())) {
                QMessageBox::warning(this, "Error", "Theatre already booked.");
            } else {
                manager->bookTheater(date.toStdString(), theatreId.toStdString());
                QMessageBox::information(this, "Success", "Booking successful!");
            }
        }
    }
}

void MainWindow::onCheckBookingsClicked()
{
    bool ok;
    QString dateStr = QInputDialog::getText(this, "Enter Date", "Enter date (DD-MM-YYYY):", QLineEdit::Normal, "", &ok);
    if (ok && !dateStr.isEmpty()) {
        std::vector<std::string> booked = manager->getBookedTheatres(dateStr.toStdString());
        QString bookings;
        for (const auto& theatre : booked) {
            bookings += QString::fromStdString(theatre) + "\n";
        }
        QMessageBox::information(this, "Bookings", bookings.isEmpty() ? "No theatres booked." : bookings);
    }
}

void MainWindow::onExitClicked()
{
    QApplication::quit();
}
