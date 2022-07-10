extern unsigned int g_40a03b;

int beyond()
{
    unsigned long long v2;  // rbp

    v2 = (long long)quote();
    dcgettext(0x0, &g_40a03b, 0x5);
    test_syntax_error(); /* do not return */
}
