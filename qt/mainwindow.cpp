#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ICU4XPluralRules.hpp"
#include "ICU4XFixedDecimalFormat.hpp"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

const std::string_view path = "/home/zbraniecki/projects/icu4x/provider/testdata/data/json/";

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    value = arg1;
    selectCategory();
}


void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    langTag = arg1;
    selectCategory();
}

void MainWindow::selectCategory()
{
    ICU4XLocale locale = ICU4XLocale::create(langTag.toStdString()).value();
    std::cout << "Running test for locale " << locale.tostring().ok().value() << std::endl;
    ICU4XDataProvider dp = ICU4XDataProvider::create_fs(path).provider.value();
    std::optional<ICU4XPluralRules> maybePr = ICU4XPluralRules::create(locale, dp, ICU4XPluralRuleType::Cardinal).rules;
    if (!maybePr) {
      return;
    }
    ICU4XPluralRules &pr = maybePr.value();
    const ICU4XPluralOperands& op = ICU4XPluralOperands::create(std::to_string(value)).operands;
    ICU4XPluralCategory cat = pr.select(op);

    switch(cat)
    {
      case ICU4XPluralCategory::One:
        ui->label_2->setText("one");
        break;
      case ICU4XPluralCategory::Two:
        ui->label_2->setText("two");
        break;
      case ICU4XPluralCategory::Few:
        ui->label_2->setText("few");
        break;
      case ICU4XPluralCategory::Many:
        ui->label_2->setText("many");
        break;
      default:
        ui->label_2->setText("other");
        break;
    }

    ICU4XFixedDecimal fd = ICU4XFixedDecimal::create(value);
    std::optional<ICU4XFixedDecimalFormat> maybeFdf = ICU4XFixedDecimalFormat::try_new(locale, dp, {}).fdf;
    if (!maybeFdf) {
      return;
    }
    ICU4XFixedDecimalFormat &fdf = maybeFdf.value();
    auto result = fdf.format(fd).ok().value();
    QString qstr = QString::fromStdString(result);
    ui->label_5->setText(qstr);
}

