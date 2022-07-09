extern <missing-type> color_indicator;

int is_colored()
{
    unsigned long long v1;  // rax
    char *v2;  // rdx
    unsigned long v3;  // rdi
    unsigned long long v4[2];  // rdi
    unsigned long long v5;  // r8

    v5 = 0;
    v4 = v3 * 16 + &color_indicator;
    v1 = v4[0];
    if (v4[0] != 0)
    {
        v2 = v4[1];
        if (v1 != 1)
        {
            v5 = 1;
            if (v1 != 2)
            {
                return v5;
            }
            else if (*(v2) == 48)
            {
                return 1;
            }
            else
            {
                return 1;
            }
        }
        return 0;
    }
    return v5;
}
