#include "application.h"


main() {
  Application *app;
  int ant;
  
  app=new Application;
  ant = app->run();
  delete app;
};
