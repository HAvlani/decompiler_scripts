typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_40800b;
extern unsigned int g_4080c9;
extern struct_1 *signals;

int parse_signal_action_params()
{
    unsigned long v0;  // [bp-0x30]
    struct_0 *v10;  // fs
    struct_2 *v4;  // rax
    unsigned long long v5;  // rbx
    char|unsigned long v6;  // sil
    unsigned long v7;  // rdi
    unsigned long long v8;  // r12
    unsigned long long v9;  // r14

    if (v7 != 0)
    {
        v9 = strtok((int)xstrdup(), &g_40800b);
        if (v9 != 0)
        {
            while (true)
            {
                v4 = operand2sig();
                if (((int)v4) == 0)
                {
                    v8 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, &g_4080c9, 0x5));
                    usage(); /* do not return */
                }
                else if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    *(signals + v4 * 4) = (0 - ((int)(v6 < 1)) & 2) + 1;
                    v9 = strtok(0x0, &g_40800b);
                    rpl_free();
                    break;
                }
                else
                {
                    usage(); /* do not return */
                }
            }
            return v0 ^ *(v10 + 0x28);
        }
        rpl_free();
        return v0 ^ *(v10 + 0x28);
    }
    v5 = 0;
    do
    {
        v5 += 1;
        if (sig2str() == 0)
        {
            *(signals + v5 * 4) = (0 - ((int)(((long long)v6) < 1)) & 2) + 2;
        }
    }
    while (v5 != 64);
    return v0 ^ *(v10 + 0x28);
}
