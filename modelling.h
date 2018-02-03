#ifndef MATTTDC_MODELLING_MODELLING_H
#define MATTTDC_MODELLING_MODELLING_H

#include <gtkmm.h>

class Modelling : public Gtk::Window
{
public:
  Modelling();
  virtual ~Modelling();

protected:
  void on_button_clicked();
  Gtk::Grid m_grid;
  Gtk::Button m_button;
};

#endif
