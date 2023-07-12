#ifndef AGREGAR_H
#define AGREGAR_H

#include <QWidget>
#include <QDialog>
#include <QMessageBox>

#include "preguntas.h"
namespace Ui {
class Agregar;
}

class Agregar : public QDialog
{
    Q_OBJECT

public:
    explicit Agregar(QWidget *parent = nullptr);
    ~Agregar();
    Preguntas *preguntas()const;

private slots:
    void on_buttonBox_2_accepted();

    void on_buttonBox_2_rejected();

private:
    Ui::Agregar *ui;
    Preguntas *m_pregunta;
};

#endif // AGREGAR_H
