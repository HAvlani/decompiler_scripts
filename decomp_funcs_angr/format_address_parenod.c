extern unsigned long long stdout[7];

int format_address_paren()
{
    char * v1;  // rax
    char *v2;  // rax
    char v3;  // sil

    v2 = *(stdout + 40);
    if (*(stdout + 40) < *(stdout + 48))
    {
        *(stdout + 40) = *(stdout + 40) + 1;
        *(v2) = 40;
    }
    else
    {
        __overflow();
    }
    v1 = format_address_std();
    if (((long long)v3) != 0)
    {
        v1 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v1) = v3;
            return v1;
        }
    }
    else
    {
        return v1;
    }
}
