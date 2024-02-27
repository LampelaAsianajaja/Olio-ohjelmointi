#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer=new QTimer();
    // Bar arvo "0%" muka
    ui->PbarPL1->setValue(0);
    ui->PbarPL2->setValue(0);
    ui->TextGame->setText("Select PlayTime and press Start game");
   // currentPlayer=0;
    //Alotus ja lopetus
    QObject :: connect(ui->BtnSTART, &QPushButton::clicked, this,&MainWindow::ClickHandler);
    QObject :: connect(ui->BtnSTOP, &QPushButton::clicked, this,&MainWindow::ClickHandler);
    //pelaaja button
    QObject :: connect(ui->BtnPL1, &QPushButton::clicked,  this,&MainWindow::ClickHandler);
    QObject :: connect(ui->BtnPL2, &QPushButton::clicked, this,&MainWindow::ClickHandler);
    //aika buttonit
    QObject :: connect(ui->Btn5, &QPushButton::clicked, this,&MainWindow::ClickHandler);
    QObject :: connect(ui->Btn120, &QPushButton::clicked, this,&MainWindow::ClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer=nullptr;

}

void MainWindow::timeout()
{

  //  qDebug()<<"aika on: "<<gameTimer;

    if (player1Time>gameTimer && player2Time>gameTimer && currentPlayer>0){
        ui->PbarPL1->setValue(player1Time);
         ui->PbarPL2->setValue(player2Time);
        uptadeProgressBar();
    }
    else if (player1Time<=gameTimer){
        ui->PbarPL1->setValue(player1Time);
          currentPlayer=0;
         ui->TextGame->setText("PLayer 1 Time Ran out!");
          pQTimer->stop();
        }
    else if (player2Time<=gameTimer){
          ui->PbarPL2->setValue(player2Time);
         currentPlayer=0;
           ui->TextGame->setText("PLayer 2 Time Ran out!");
         pQTimer->stop();
    }


}

void MainWindow::ClickHandler()
{
    qDebug()<<"click handleri";
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name=button->objectName();
     // qDebug() << "Button name: " << name;
    if (name=="Btn120" && gameTimer==0){

    player1Time=12;
    player2Time=12;
     gameTimer=0;
    ui->PbarPL1->setRange(0,player1Time);
    ui->PbarPL2->setRange(0,player2Time);
    qDebug() << "120 sekunttii " << gameTimer;
     ui->TextGame->setText("Game will be 120s Press Start to PLay");
     currentPlayer=0;
   }
      if (name=="Btn5"){

     player1Time=100;
     player2Time=100;
     gameTimer=0;
     qDebug() << "300 sekunttii " << gameTimer;
     ui->PbarPL1->setRange(0,player1Time);
     ui->PbarPL2->setRange(0,player2Time);
      ui->TextGame->setText("Game will be 5 min Press Start to Play");
      currentPlayer=0;
      }


      if (name=="BtnSTART" && currentPlayer==0){
        connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
        pQTimer->start(1000);
        currentPlayer=1;
        qDebug() << "Button name: " << name;
        ui->TextGame->setText("Player 1 Turn!");
    }
      else if (name=="BtnSTOP"){
        currentPlayer=0;
        player1Time=0;
        player2Time=0;
         qDebug()<<" Peli Loppu!";
        ui->TextGame->setText("Select PlayTime and press Start game");
        pQTimer->stop();
         ui->PbarPL1->setValue(0);
         ui->PbarPL2->setValue(0);
    }
    if (name=="BtnPL1" &&currentPlayer==1){
        currentPlayer=2;
     ui->TextGame->setText("Player 2 Turn!");
    }
    else  if (name=="BtnPL2" &&currentPlayer==2){
        currentPlayer=1;
      ui->TextGame->setText("Player 1 Turn!");
    }
}
void MainWindow::uptadeProgressBar()
{
   /* if(currentPlayer==0) {
      pQTimer->stop();
      qDebug()<<"STOOP : "<<currentPlayer;

    }
   else*/ if (currentPlayer==1){
        ui->PbarPL1->setValue(player1Time);
        qDebug()<<"PL1 :"<<player1Time;
        player1Time-=1;

    } else if (currentPlayer==2){
        ui->PbarPL2->setValue(player2Time);
        qDebug()<<"PL2: "<<player2Time;
        player2Time-=1;
    }

}

