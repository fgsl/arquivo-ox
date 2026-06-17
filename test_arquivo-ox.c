#include <assert.h>


int test_valide(int valide1, int valide2, int valide3, int valide4);

int main()
{
    assert(valide1('X') == 1);
    assert(valide2('O') == 1);

    assert(valide3('A') == 0);
    assert(valide4('x') == 0);

    return 0;
}
