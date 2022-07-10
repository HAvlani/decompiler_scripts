extern unsigned long long stdout[7];

int perform_basename()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    char *v10;  // rsi
    unsigned long|char * v11;  // r12
    unsigned long v12;  // r13
    unsigned long v2;  // [bp-0x8]
    char * v4;  // rax
    char *v6;  // rax
    unsigned long v7;  // rdx
    unsigned long v8;  // rbx
    char *v9;  // rbp

    v2 = v12;
    v1 = v11;
    v0 = v8;
    v9 = (long long)base_name();
    strip_trailing_slashes();
    if (v10 != 0)
    {
        if (*(v9) != 47)
        {
            v11 = v9 + strlen(v9);
            v4 = strlen(v10) + v10;
            while (v9 < v11)
            {
                if (v10 < v4)
                {
                    v11 -= 1;
                    v4 -= 1;
                    break;
                }
                else
                {
                    if (v9 >= v11)
                    {
                        break;
                    }
                    *(v11) = 0;
                    break;
                }
            }
        }
    }
    fputs_unlocked(v9, stdout);
    v6 = *(stdout + 40);
    if (*(stdout + 40) < *(stdout + 48))
    {
        *(stdout + 40) = *(stdout + 40) + 1;
        *(v6) = ((char)(0 - ((int)(v7 < 1)) & 10));
    }
    else
    {
        __overflow();
    }
}
