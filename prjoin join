typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[12];
    unsigned long long field_10;
} struct_2;

extern char eolchar;
extern struct_0 g_40e170;
extern unsigned long long stdout[7];
extern struct_1 tab;
extern char uni_blank;

int prjoin()
{
    char *v1;  // rax
    char *v3;  // rax
    unsigned long v6;  // rax
    struct_2 * v7;  // rbx

    v7 = g_40e170;
    if (!(g_40e170 == 0))
    {
        while (true)
        {
            prfield.isra.0();
            v7 = v7->field_10;
            if (v7 == 0)
            {
                break;
            }
            v3 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v3) = ((char)(tab < 0? 32 : tab));
            }
            else
            {
                __overflow();
            }
        }
        v1 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v1) = eolchar;
            return v1;
        }
    }
    else if (v6 != 4251936)
    {
        prfield.isra.0();
        prfields();
        prfields();
        v1 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v1) = eolchar;
            return v1;
        }
    }
    else
    {
        prfield.isra.0();
        prfields();
        prfields();
        v1 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v1) = eolchar;
            return v1;
        }
    }
}
