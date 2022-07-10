typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[24];
    char field_50;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned long long stdout[7];

int dired_dump_obstack()
{
    BOT tmp_7;  // tmp #7
    BOT tmp_47;  // tmp #47
    char * v2;  // rax
    unsigned long long v3;  // rdx
    struct_1 * v4;  // rbx
    struct_0 *v5;  // rsi
    char *v6;  // rdi

    v2 = v5->field_18;
    v4 = v5->field_10;
    if (v5->field_18 - v5->field_10 > 7)
    {
        if (v5->field_18 == v5->field_10)
        {
            v5->field_50 = v5->field_50 | 2;
        }
        tmp_7 = v2 + v5->field_30 & !(v5->field_30);
        v3 = v5->field_20;
        tmp_47 = !((v2 + v5->field_30 & !(v5->field_30)) - v5->field_8 <= v5->field_20 - v5->field_8);
        v5->field_18 = (!((v2 + v5->field_30 & !(v5->field_30)) - v5->field_8 <= v5->field_20 - v5->field_8)? v5->field_20 : v2 + v5->field_30 & !(v5->field_30));
        v5->field_10 = (tmp_47? v3 : tmp_7);
        fputs_unlocked(v6, stdout);
        while (true)
        {
            v3 = v4->field_0;
            v4 += 8;
            __printf_chk(0x1, " %ld", v3);
            if (v4 == (v5->field_18 - v5->field_10 & 18446744069414584312) + v5->field_10)
            {
                break;
            }
        }
        v2 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v2) = 10;
            return v2;
        }
    }
    else
    {
        return v2;
    }
}
