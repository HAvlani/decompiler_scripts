typedef struct struct_1 {
    char padding_0[16];
    uint128_t field_10;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_42200d;
extern char opt_nul_terminate_output;
extern char opt_time;
extern unsigned long long stdout[7];

int print_size()
{
    BOT v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x30]
    unsigned long long v10;  // r13
    struct_0 *v11;  // fs
    char *v4;  // rax
    unsigned int v8;  // esi
    struct_1 *v9;  // rdi

    print_only_size();
    if (opt_time != 0)
    {
        v4 = *(stdout + 40);
        if (*(stdout + 40) < *(stdout + 48))
        {
            *(stdout + 40) = *(stdout + 40) + 1;
            *(v4) = 9;
        }
        else
        {
            __overflow();
        }
        v0 = v9->field_10;
        if (localtime_rz() != 0)
        {
            fprintftime();
            __printf_chk(0x1, "\t%s%c", v8, 0 - ((int)(((long long)opt_nul_terminate_output) < 1)) & 10);
            fflush_unlocked(stdout);
            return v1 ^ *(v11 + 0x28);
        }
        v10 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_42200d, 0x5));
        fputs_unlocked((long long)imaxtostr(), stdout);
        __printf_chk(0x1, "\t%s%c", v8, 0 - ((int)(((long long)opt_nul_terminate_output) < 1)) & 10);
        fflush_unlocked(stdout);
        return v1 ^ *(v11 + 0x28);
    }
    __printf_chk(0x1, "\t%s%c", v8, 0 - ((int)(((long long)opt_nul_terminate_output) < 1)) & 10);
    fflush_unlocked(stdout);
    return v1 ^ *(v11 + 0x28);
}
