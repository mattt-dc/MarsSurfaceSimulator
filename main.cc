#include <gtkmm.h>
#include "modelling.h"

int main (int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "org.matttdc.modelling");
  Modelling modelling;
  return app->run(modelling);
}
