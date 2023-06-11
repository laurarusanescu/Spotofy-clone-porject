#include "actiondelete.h"

ActionDelete::ActionDelete(Repository &r, Song &s) : repo{r}, song{s}
{

}

void ActionDelete::apply()
{
    repo.removeSong(song);
}


