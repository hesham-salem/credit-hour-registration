#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_checkBox_stateChanged(int state);

    void on_fluid_stateChanged(int arg1);

    void on_pushButton_clicked();

    void on_enter_clicked();

    void on_math3_clicked();

    void on_math3_stateChanged(int arg1);

    void on_thermodynamic_stateChanged(int arg1);

    void on_circuit_stateChanged(int arg1);

    void on_intro_to_mechatronics_stateChanged(int arg1);

    void on_technical_rebort_stateChanged(int arg1);

    void on_material_science_stateChanged(int arg1);

    void on_cpp_stateChanged(int arg1);

    void on_electromagnetic_stateChanged(int arg1);

    void on_ethic_and_law_stateChanged(int arg1);

    void on_math4_stateChanged(int arg1);

    void on_sstess_analysis_stateChanged(int arg1);

    void on_human_right_stateChanged(int arg1);

    void on_heat_tansfer_stateChanged(int arg1);

    void on_electro_machine_stateChanged(int arg1);

    void on_vibration_stateChanged(int arg1);

    void on_material_tochnolgy_stateChanged(int arg1);

    void on_plc_stateChanged(int arg1);

    void on_mangement_stateChanged(int arg1);

    void on_method_of_engineering_analytics_stateChanged(int arg1);

    void on_design_stateChanged(int arg1);

    void on_measurement_stateChanged(int arg1);

    void on_circuit2_stateChanged(int arg1);

    void on_qualities_stateChanged(int arg1);

    void on_economics_stateChanged(int arg1);

    void on_intro_system_dynamics_stateChanged(int arg1);

    void on_electric_power_stateChanged(int arg1);

    void on_micro_prossing_stateChanged(int arg1);

    void on_dynamics_and_kinamatics_of_machine_stateChanged(int arg1);

    void on_cad_stateChanged(int arg1);

    void on_environment_science_stateChanged(int arg1);

    void on_fundamental_of_control_system_stateChanged(int arg1);

    void on_micro_controller_stateChanged(int arg1);

    void on_design_mechatronics_system_stateChanged(int arg1);

    void on_cnc_stateChanged(int arg1);

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
