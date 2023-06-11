#include "actionadd.h"



ActionAdd::ActionAdd(Repository &r, Song &s): repo{r}, song{s}
{}

void ActionAdd::apply()
{
    repo.store(song);
}


