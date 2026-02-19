#include "score.h"

Score::Score()
{
    attempts = 0;
}

void Score::increment()
{
    attempts++;
}

int Score::getAttempts()
{
    return attempts;
}
