extern struct_0 out_column;
extern unsigned long long stdout[7];
extern char tabs;

int put_space()
{
    BOT tmp_28;  // tmp #28
    BOT tmp_33;  // tmp #33
    BOT tmp_22;  // tmp #22
    char *v1;  // rax
    char *v2;  // rax
    unsigned long|unsigned long long v3;  // rax
    unsigned long long v5;  // rbx
    unsigned int v6;  // ebp
    unsigned long v7;  // rdi

    ((int)v3) * 8 = ((long long)out_column);
    v5 = ((long long)out_column) + v7;
    if (tabs != 0)
    {
        v3 = ((long long)((((char)(v5 >> 31 & 1 ^ 1))? ((int)v5) : ((int)(v5 + 7))) & -8));
        v6 = ((int)(((long long)(((char)(v5 >> 31 & 1 ^ 1))? ((int)v5) : ((int)(v5 + 7)))) >> 3));
        if (((int)(((long long)out_column) + 1)) < ((((char)(v5 >> 31 & 1 ^ 1))? ((int)v5) : ((int)(v5 + 7))) & -8))
        {
            if (((int)out_column) < ((int)v3))
            {
                do
                {
                    v2 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v2) = 9;
                    }
                    else
                    {
                        __overflow();
                    }
                    tmp_22 = ((long long)out_column);
                    tmp_28 = ((long long)out_column);
                    tmp_33 = out_column;
                    v3 = ((long long)(...));
                    ((int)v3) * 8 = ((int)v3) * 8;
                    out_column = ((int)v3) * 8;
                }
                while (v6 > ((int)(((long long)(((char)(tmp_28 >> 31 & 1 ^ 1))? tmp_33 : ((int)(tmp_22 + 7)))) >> 3)) + 1);
            }
        }
    }
    if (((int)(((long long)out_column) + v7)) > ((int)v3) * 8)
    {
        do
        {
            v1 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v1) = 32;
            }
            else
            {
                __overflow();
            }
            v3 = ((long long)(out_column + 1));
            out_column = out_column + 1;
        }
        while (((int)v3) < ((int)(((long long)out_column) + v7)));
        return v3;
    }
    return v3;
}
