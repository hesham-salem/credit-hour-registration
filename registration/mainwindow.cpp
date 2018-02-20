#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <cInifile>

QString id,fee,sgpa,courseTaken,check,courseAdd,courseName,s_hour,name;

float gpa;
int h,hour;

struct course
{
    QString require;
    int hour;
};

void courseBox(byte state,QString courseName)

{  if(state)
    {
       s_hour=get(courseName ,"hour");
            convertfromstring(hour,s_hour);

        check=get(courseName,"courseRequire") ;
              con=coursesTaken.contain(check);

              val=h-hour;

     if(con)
              if(val>=0)
      {h-=hour;   courseAdd +=","courseName;}
              else
              checkstate()=0;
  }
     else
           {   require_text.set(check);
              checkstate()=0;

    }





MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    s
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_enter_clicked()
{
    id=id_text.text;

}
fee=get(id,"fee");
sgpa=get(id,"gpa");
convertfromstring(gpa,s_gpa);
coursesTaken=get(id,"courseTaken");
name=get(id,"name")
name_text.set(name);

if(fee=="1")
{
 if(gpa>3.0)

     h=18;

 else if(gpa>=2.0&& gpa<=3)

     h=16;



gpa_text.set(h);


void MainWindow::on_math3_stateChanged(int arg1)
{
    courseBox(state,"math3");
  }
}

void MainWindow::on_thermodynamic_stateChanged(int arg1)
{
            courseBox(state,"thermodynamic");

void MainWindow::on_circuit_stateChanged(int arg1)
{

          courseBox(state,"circuit");
}

void MainWindow::on_intro_to_mechatronics_stateChanged(int arg1)
{

          courseBox(state,"intro to mechatronics");
}

void MainWindow::on_technical_rebort_stateChanged(int arg1)
{

        courseBox(state,"technical rebort");
}

void MainWindow::on_material_science_stateChanged(int arg1)
{

          courseBox(state,"matrial science");
}

void MainWindow::on_fluid_stateChanged(int arg1)
{

         courseBox(state,"fluid");
}

void MainWindow::on_cpp_stateChanged(int arg1)
{

          courseBox(state,"c++");
}

void MainWindow::on_electromagnetic_stateChanged(int arg1)
{

          courseBox(state,"electromagnetic feilds");
}

void MainWindow::on_ethic_and_law_stateChanged(int arg1)
{

         courseBox(state,"ethic and law");
}

void MainWindow::on_math4_stateChanged(int arg1)
{

      courseBox(state,"math4");
}

void MainWindow::on_stress_analysis_stateChanged(int arg1)
{

         courseBox(state,"stress analysis");

          }
}

void MainWindow::on_human_right_stateChanged(int arg1)
{

          courseBox(state,"human right");
}

void MainWindow::on_heat_tansfer_stateChanged(int arg1)
{

          courseBox(state,"heat transfer");
}

void MainWindow::on_electro_machine_stateChanged(int arg1)
{

          courseBox(state,"electro machine");
}

void MainWindow::on_vibration_stateChanged(int arg1)
{

         courseBox(state,"vibration");
}

void MainWindow::on_material_tochnolgy_stateChanged(int arg1)
{

         courseBox(state,"material tochnolgy");
}

void MainWindow::on_plc_stateChanged(int arg1)
{

      courseBox(state,"plc");
}

void MainWindow::on_mangement_stateChanged(int arg1)
{

          courseBox(state,"mangement");
}

void MainWindow::on_method_of_engineering_analytics_stateChanged(int arg1)
{

          courseBox(state,"mechod of engineering analytics");
}

void MainWindow::on_design_stateChanged(int arg1)
{

                     courseBox(state,"design");
}

void MainWindow::on_measurement_stateChanged(int arg1)
{

          courseBox(state,"measurement");
}

void MainWindow::on_circuit2_stateChanged(int arg1)
{

          courseBox(state,"circuit2");
}

void MainWindow::on_qualities_stateChanged(int arg1)
{

 courseBox(state,"qualities");

}

void MainWindow::on_economics_stateChanged(int arg1)
{

          courseBox(state,"economics");
}

void MainWindow::on_intro_system_dynamics_stateChanged(int arg1)
{

          courseBox(state,"intro to system dynamics");
}

void MainWindow::on_electric_power_stateChanged(int arg1)
{

         courseBox(state,"electric power");
}

void MainWindow::on_micro_prossing_stateChanged(int arg1)
{

          courseBox(state,"micro prossing");
}

void MainWindow::on_dynamics_and_kinamatics_of_machine_stateChanged(int arg1)
{

          courseBox(state,"dynamics and kinamatics of machine");
}

void MainWindow::on_cad_stateChanged(int arg1)
{

         courseBox(state,"cad");
}

void MainWindow::on_environment_science_stateChanged(int arg1)
{

           courseBox(state,"environment science");
}

void MainWindow::on_fundamental_of_control_system_stateChanged(int arg1)
{

         courseBox(state,"fundamental of control system");

          }
}

void MainWindow::on_micro_controller_stateChanged(int arg1)
{

         courseBox(state,"micro controller");
}

void MainWindow::on_design_mechatronic_system_stateChanged(int arg1)
{

         courseBox(state,"design mechatronic system");
}

void MainWindow::on_cnc_stateChanged(int arg1)
{

          courseBox(state,"cnc");


}

void MainWindow::on_pushButton_2_clicked()
{
    courseTaken+=courseAdd;
    set(id,"courseTaken");
}
