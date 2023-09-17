#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <vector>
#include <QString>
#include <QDoubleValidator>
#include <iomanip>
#include <sstream>

struct Item {
    QString name;
    double price;
    int quantity;
    double total() const { return price * quantity; }

};

std::vector<Item> items;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Set validator for price and quantity fields
    ui->lineEdit_price->setValidator(new QDoubleValidator(0.00, 999999.99, 2, this));
    ui->lineEdit_quantity->setValidator(new QIntValidator(1, 999999, this));

    connect(ui->pushButton_add, &QPushButton::clicked, this, &MainWindow::addItem);
    connect(ui->pushButton_display, &QPushButton::clicked, this, &MainWindow::displayInvoice);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addItem()
{
    QString name = ui->lineEdit_name->text();
    double price = ui->lineEdit_price->text().toDouble();
    int quantity = ui->lineEdit_quantity->text().toInt();

    items.push_back({name, price, quantity});

    ui->lineEdit_name->clear();
    ui->lineEdit_price->clear();
    ui->lineEdit_quantity->clear();
}

void MainWindow::displayInvoice()
{
    std::ostringstream invoice;
    double grandTotal = 0.0;

    invoice << "Invoice:\n";
    invoice << "---------------------------------\n";
    invoice << std::setw(10) << "Item" << std::setw(10) << "Price" << std::setw(10) << "Quantity" << std::setw(10) << "Total\n";
    invoice << "---------------------------------\n";

    for (const auto &item : items) {
        invoice << std::setw(10) << item.name.toStdString()
                << std::setw(10) << std::setprecision(2) << std::fixed << item.price
                << std::setw(10) << item.quantity
                << std::setw(10) << std::setprecision(2) << std::fixed << item.total() << "\n";
        grandTotal += item.total();
    }

    invoice << "---------------------------------\n";
    invoice << std::setw(30) << "Grand Total: " << std::setprecision(2) << std::fixed << grandTotal << "\n";

    ui->textEdit_invoice->setText(QString::fromStdString(invoice.str()));
}
