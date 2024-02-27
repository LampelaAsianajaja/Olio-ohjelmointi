#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)

    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

  //  connect(ui->BTN0,SIGNAL(clicked()),this,SLOT(numberClikcedHandler()));
   //QObject connect(ui->BTN1,SIGNAL(clicked()),this,SLOT(numberClikcedHandler()));
    // Numeroiden näppäimet
    QObject :: connect(ui->BTN0, &QPushButton::clicked, this,&MainWindow::numberClikcedHandler);
    QObject :: connect(ui->BTN1, &QPushButton::clicked, this,&MainWindow::numberClikcedHandler);
    QObject :: connect(ui->BTN2, &QPushButton::clicked, this,&MainWindow::numberClikcedHandler);
    QObject :: connect(ui->BTN3, &QPushButton::clicked, this,&MainWindow::numberClikcedHandler);
    QObject :: connect(ui->BTN4, &QPushButton::clicked, this,&MainWindow::numberClikcedHandler);
    QObject :: connect(ui->BTN5, &QPushButton::clicked, this,&MainWindow::numberClikcedHandler);
    QObject :: connect(ui->BTN6, &QPushButton::clicked, this,&MainWindow::numberClikcedHandler);
    QObject :: connect(ui->BTN7, &QPushButton::clicked, this,&MainWindow::numberClikcedHandler);
    QObject :: connect(ui->BTN8, &QPushButton::clicked, this,&MainWindow::numberClikcedHandler);
    QObject :: connect(ui->BTN9, &QPushButton::clicked, this,&MainWindow::numberClikcedHandler);

    // PLus miinus yms Näppäin config
    QObject :: connect(ui->BTNadd, &QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    QObject :: connect(ui->BTNsub, &QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    QObject :: connect(ui->BTNmul, &QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);
    QObject :: connect(ui->BTNdiv, &QPushButton::clicked,this,&MainWindow::addSubMulDivClickHandler);

    // reset
    QObject :: connect(ui->BTNenter, &QPushButton::clicked,this,&MainWindow::cleaAndEnterClickHandler);
    QObject :: connect(ui->BTNclear, &QPushButton::clicked,this,&MainWindow::cleaAndEnterClickHandler);
   // QObject::connect(ui->BTN9, SIGNAL(clicked),SLOT(numberClikcedHandler));
  //  QObject :: connect(ui->BTN2, &QPushButton:: clicked, &MainWindow::numberClikcedHandler);
  //  QObject::connect(this )
  //  connect(ui->BTNenter,SIGNAL(clicked()),this,SLOT(numberClikcedHandler()));
  //  connect(ui->BTN0, SIGNAL(clicked()), this, SLOT(numberClikcedHandler()));
  //  connect(ui->BTNone, SIGNAL(clicked()), this, SLOT(numberClikcedHandler()));
  //  connect(ui->BTN2, &QPushButton::clicked, this, &MainWindow::numberClikcedHandler);
 //   connect(ui->BTNenter, SIGNAL(clicked()), this, SLOT(numberClikcedHandler()));
    state=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::numberClikcedHandler()
{
    //qDebug()<<"numero moduuli";
    qDebug()<<"state on : "<<state;
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name=button->objectName();
        if (state==1 || state==0){
            number1 = number1 + name.last(1);
            ui->LineOne->setText(number1);
            qDebug() << "Button name: " << name;

            state=1;
        }

        if (state==2||state==3){

            state=2;
            number2 = number2 + name.last(1);
            ui->LineTwo->setText(number2);
            qDebug() << "Button name: " << name;


            }



}

void MainWindow::cleaAndEnterClickHandler()
{
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString name=button->objectName();
       // qDebug() << "button name " << name;
            qDebug()<<"state on : "<<state;
        if(name=="BTNclear"){
            if (state==1){
                number1=0;
                ui->LineOne->setText(number1);
            }else if  (state==2){
                number2=0;
                ui->LineTwo->setText(number2);
            }
            else if(state==3){
                resetLineEdits();
            }
        }

        if(name=="BTNenter"){
            state=3;
            float n1=number1.toFloat();
            float n2=number2.toFloat();

          switch(operand){
            case  '+' :
                result=n1+n2;
                break;
             case  '-' :
            result=n1-n2;
                break;
            case  '*' :
             result=n1*n2;
                break;
            case '/'  :
              result=n1/n2;
               break;
            }
         ui->LineResult->setText(QString::number(result)) ;

        }
}

void MainWindow::addSubMulDivClickHandler()
{
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString text=button->objectName();

     if (state==1){

          if(text=="BTNadd")   {

                operand='+';
                qDebug()<<"plussa";
            }else if (text=="BTNsub"){
                operand='-';
                 qDebug()<<"miinus";
            }else if (text=="BTNmul"){
                 operand='*';
                 qDebug()<<"kerto";
            }else if(text=="BTNdiv") {
                 operand='/';
                 qDebug()<<"jako";

            }
        }
         state=2;
}




void MainWindow::resetLineEdits()
{
    qDebug()<<"resetnappain??";
         number1=0;
         number2=0;
         result=0;
         operand=0;
         state=0;
          ui->LineOne->setText(number1);
          ui->LineTwo->setText(number2);
          ui->LineResult->setText(QString::number(result)) ;

}


