#include "modelling.h"
#include <iostream>

Modelling::Modelling()
: m_button("Calculate")
{
  set_border_width(10);
  m_button.signal_clicked().connect(sigc::mem_fun(*this,
    &Modelling::on_button_clicked));
  add(m_grid);
  m_grid.add(m_button);
  show_all_children();
}

Modelling::~Modelling()
{
}

void Modelling::on_button_clicked(){
  std::cout << "The mean planetary temperature is ..." << std::endl;
}
