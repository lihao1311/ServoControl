#include "servoboard_main.h"
#include "ui_servoboard_main.h"

servoboard_main::servoboard_main(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::servoboard_main)
{
    ui->setupUi(this);

    // Hardcoded values, yay!
    MinValue = 1;
    MiddleValue = 49;
    MaxValue = 97; // not sure about this one... Ask Eugen

    setValueForAll(MiddleValue);
    setMaxValueForAll(MaxValue);
    setMinValueForAll(MinValue);

    servosEnabled = new QVector<QCheckBox*>(0);
    servosEnabled->append( this->ui->chkServo1  );
    servosEnabled->append( this->ui->chkServo2  );
    servosEnabled->append( this->ui->chkServo3  );
    servosEnabled->append( this->ui->chkServo4  );
    servosEnabled->append( this->ui->chkServo5  );
    servosEnabled->append( this->ui->chkServo6  );
    servosEnabled->append( this->ui->chkServo7  );
    servosEnabled->append( this->ui->chkServo8  );
    servosEnabled->append( this->ui->chkServo9  );
    servosEnabled->append( this->ui->chkServo10 );
    servosEnabled->append( this->ui->chkServo11 );
    servosEnabled->append( this->ui->chkServo12 );
}

servoboard_main::~servoboard_main()
{
    delete ui;
    delete servosEnabled;
}

/* Select all the servo checkboxes */
void servoboard_main::on_btnSelectAll_clicked()
{
    for (int i=0; i<servosEnabled->size(); i++) {
        servosEnabled->at(i)->setChecked(true);
    }
}

/* Clear all the servo checkboxes */
void servoboard_main::on_btnClearAll_clicked()
{
    for (int i=0; i<servosEnabled->size(); i++) {
        servosEnabled->at(i)->setChecked(false);
    }
}

/*
 * Convenience funtion
 *
 * Sets the value for all servos controls
 */
void servoboard_main::setValueForAll(unsigned char value)
{
    // I wish there was an easier way to do this.. (templates maybe?)
    ui->spinServo1->setValue(value);
    ui->sliderServo1->setValue(value);
    ui->spinServo2->setValue(value);
    ui->sliderServo2->setValue(value);
    ui->spinServo3->setValue(value);
    ui->sliderServo3->setValue(value);
    ui->spinServo4->setValue(value);
    ui->sliderServo4->setValue(value);
    ui->spinServo5->setValue(value);
    ui->sliderServo5->setValue(value);
    ui->spinServo6->setValue(value);
    ui->sliderServo6->setValue(value);
    ui->spinServo7->setValue(value);
    ui->sliderServo7->setValue(value);
    ui->spinServo8->setValue(value);
    ui->sliderServo8->setValue(value);
    ui->spinServo9->setValue(value);
    ui->sliderServo9->setValue(value);
    ui->spinServo10->setValue(value);
    ui->sliderServo10->setValue(value);
    ui->spinServo11->setValue(value);
    ui->sliderServo11->setValue(value);
    ui->spinServo12->setValue(value);
    ui->sliderServo12->setValue(value);
}

/*
 * Convenience funtion
 *
 * Sets the maximum value for all servos controls
 */
void servoboard_main::setMaxValueForAll(unsigned char value)
{
    // I wish there was an easier way to do this.. (templates maybe?)
    ui->spinServo1->setMaximum(value);
    ui->sliderServo1->setMaximum(value);
    ui->spinServo2->setMaximum(value);
    ui->sliderServo2->setMaximum(value);
    ui->spinServo3->setMaximum(value);
    ui->sliderServo3->setMaximum(value);
    ui->spinServo4->setMaximum(value);
    ui->sliderServo4->setMaximum(value);
    ui->spinServo5->setMaximum(value);
    ui->sliderServo5->setMaximum(value);
    ui->spinServo6->setMaximum(value);
    ui->sliderServo6->setMaximum(value);
    ui->spinServo7->setMaximum(value);
    ui->sliderServo7->setMaximum(value);
    ui->spinServo8->setMaximum(value);
    ui->sliderServo8->setMaximum(value);
    ui->spinServo9->setMaximum(value);
    ui->sliderServo9->setMaximum(value);
    ui->spinServo10->setMaximum(value);
    ui->sliderServo10->setMaximum(value);
    ui->spinServo11->setMaximum(value);
    ui->sliderServo11->setMaximum(value);
    ui->spinServo12->setMaximum(value);
    ui->sliderServo12->setMaximum(value);
}

/*
 * Convenience funtion
 *
 * Sets the minimum value for all servos controls
 */
void servoboard_main::setMinValueForAll(unsigned char value)
{
    // I wish there was an easier way to do this.. (templates maybe?)
    ui->spinServo1->setMinimum(value);
    ui->sliderServo1->setMinimum(value);
    ui->spinServo2->setMinimum(value);
    ui->sliderServo2->setMinimum(value);
    ui->spinServo3->setMinimum(value);
    ui->sliderServo3->setMinimum(value);
    ui->spinServo4->setMinimum(value);
    ui->sliderServo4->setMinimum(value);
    ui->spinServo5->setMinimum(value);
    ui->sliderServo5->setMinimum(value);
    ui->spinServo6->setMinimum(value);
    ui->sliderServo6->setMinimum(value);
    ui->spinServo7->setMinimum(value);
    ui->sliderServo7->setMinimum(value);
    ui->spinServo8->setMinimum(value);
    ui->sliderServo8->setMinimum(value);
    ui->spinServo9->setMinimum(value);
    ui->sliderServo9->setMinimum(value);
    ui->spinServo10->setMinimum(value);
    ui->sliderServo10->setMinimum(value);
    ui->spinServo11->setMinimum(value);
    ui->sliderServo11->setMinimum(value);
    ui->spinServo12->setMinimum(value);
    ui->sliderServo12->setMinimum(value);
}



/*
    Handlers for the Sliders and Spin boxes
 */

void servoboard_main::on_sliderServo1_valueChanged(int value)
{
    ui->spinServo1->setValue(value);
}
void servoboard_main::on_spinServo1_valueChanged(int value)
{
    ui->sliderServo1->setValue(value);
}


void servoboard_main::on_sliderServo2_valueChanged(int value)
{
    ui->spinServo2->setValue(value);
}
void servoboard_main::on_spinServo2_valueChanged(int value)
{
    ui->sliderServo2->setValue(value);
}


void servoboard_main::on_sliderServo3_valueChanged(int value)
{
    ui->spinServo3->setValue(value);
}
void servoboard_main::on_spinServo3_valueChanged(int value)
{
    ui->sliderServo3->setValue(value);
}


void servoboard_main::on_sliderServo4_valueChanged(int value)
{
    ui->spinServo4->setValue(value);
}
void servoboard_main::on_spinServo4_valueChanged(int value)
{
    ui->sliderServo4->setValue(value);
}


void servoboard_main::on_sliderServo5_valueChanged(int value)
{
    ui->spinServo5->setValue(value);
}
void servoboard_main::on_spinServo5_valueChanged(int value)
{
    ui->sliderServo5->setValue(value);
}


void servoboard_main::on_sliderServo6_valueChanged(int value)
{
    ui->spinServo6->setValue(value);
}
void servoboard_main::on_spinServo6_valueChanged(int value)
{
    ui->sliderServo6->setValue(value);
}


void servoboard_main::on_sliderServo7_valueChanged(int value)
{
    ui->spinServo7->setValue(value);
}
void servoboard_main::on_spinServo7_valueChanged(int value)
{
    ui->sliderServo7->setValue(value);
}


void servoboard_main::on_sliderServo8_valueChanged(int value)
{
    ui->spinServo8->setValue(value);
}
void servoboard_main::on_spinServo8_valueChanged(int value)
{
    ui->sliderServo8->setValue(value);
}


void servoboard_main::on_sliderServo9_valueChanged(int value)
{
    ui->spinServo9->setValue(value);
}
void servoboard_main::on_spinServo9_valueChanged(int value)
{
    ui->sliderServo9->setValue(value);
}


void servoboard_main::on_sliderServo10_valueChanged(int value)
{
    ui->spinServo10->setValue(value);
}
void servoboard_main::on_spinServo10_valueChanged(int value)
{
    ui->sliderServo10->setValue(value);
}


void servoboard_main::on_sliderServo11_valueChanged(int value)
{
    ui->spinServo11->setValue(value);
}
void servoboard_main::on_spinServo11_valueChanged(int value)
{
    ui->sliderServo11->setValue(value);
}


void servoboard_main::on_sliderServo12_valueChanged(int value)
{
    ui->spinServo12->setValue(value);
}
void servoboard_main::on_spinServo12_valueChanged(int value)
{
    ui->sliderServo12->setValue(value);
}

