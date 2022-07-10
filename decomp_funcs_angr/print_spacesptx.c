extern unsigned long long stdout[7];

int print_spaces()
{
    unsigned long long v0;  // [bp-0x8]
    char * v2;  // rax
    unsigned long v3;  // rax
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rbx
    unsigned long v7;  // rdi

    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>))))
    {
        v0 = v6;
        v4 = v7;
        do
        {
            v2 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v2) = 32;
            }
            else
            {
                v2 = __overflow();
            }
            v4 -= 1;
        }
        while (v4 != 1);
        v5 = v0;
        return v2;
    }
    return v3;
}
