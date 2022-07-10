extern unsigned long long stdout[7];

int print_filename()
{
    BOT tmp_6;  // tmp #6
    char *v1;  // rax
    unsigned long long v2[7];  // rcx
    char [2] v3;  // rbp
    unsigned long long v4;  // rsi
    char v5;  // sil
    char v6[2];  // rdi

    v3 = v6;
    if (((long long)v5) != 0)
    {
        v4 = ((long long)v6[0]);
        if (((long long)v6[0]) == 0)
        {
            return *(stdout + 40);
        }
        while (true)
        {
            v2 = stdout;
            if (v4 == 13)
            {
                fwrite_unlocked("\\r", 0x1, 0x2, stdout);
                /* goto 4209947; */
            }
            else if (v4 != 92)
            {
                if (v4 != 10)
                {
                    v1 = v2[5];
                    if (v2[5] < v2[6])
                    {
                        v2[5] = *(stdout + 40) + 1;
                        *(v1) = v4;
                        /* goto 4209947; */
                    }
                    else
                    {
                        __overflow(((int)v2));
                        /* goto 4209947; */
                    }
                }
                else
                {
                    fwrite_unlocked("\\n", 0x1, 0x2, stdout);
                    /* goto 4209947; */
                }
            }
            if (v4 == 92)
            {
                v3 += 1;
                fwrite_unlocked("\\\\", 0x1, 0x2, stdout);
                v4 = ((long long)v3[0]);
                return *(stdout + 40);
            }
            if (v4 == 13 || v4 != 92)
            {
                v4 = ((long long)v3[1]);
                v3 += 1;
                tmp_6 = v4;
                return *(stdout + 40);
            }
        }
    }
}
