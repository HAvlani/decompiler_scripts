typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int block_signals;
extern unsigned int g_40800b;
extern unsigned int g_4080c9;
extern char sig_mask_changed;
extern char unblock_signals;

int parse_block_signal_params()
{
    unsigned long v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x40]
    unsigned long long v10;  // r15
    struct_0 *v11;  // fs
    unsigned long long v5;  // rax
    char v7;  // sil
    unsigned long v8;  // rdi
    unsigned long long v9;  // r12

    if (v8 != 0)
    {
        if (sig_mask_changed == 0)
        {
            sigemptyset(&block_signals);
            sigemptyset(&unblock_signals);
        }
        sig_mask_changed = 1;
        v0 = (long long)xstrdup();
        v10 = strtok(((int)v0), &g_40800b);
        if (strtok(0x0, &g_40800b) != 0)
        {
            while (true)
            {
                v5 = operand2sig();
                if (((int)v5) == 0)
                {
                    v9 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, &g_4080c9, 0x5));
                    usage(); /* do not return */
                }
                else if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    if (((long long)v7) != 0)
                    {
                        sigaddset(&block_signals);
                    }
                    else
                    {
                        sigaddset(&unblock_signals);
                    }
                    sigdelset(((int)(((long long)v7) != 0? &unblock_signals : 4248384)), ((int)v5));
                    v10 = strtok(0x0, &g_40800b);
                    rpl_free();
                    break;
                }
                else
                {
                    usage(); /* do not return */
                }
            }
            return v1 ^ *(v11 + 0x28);
        }
        rpl_free();
        return v1 ^ *(v11 + 0x28);
    }
    else if (((long long)v7) == 0)
    {
        sigfillset(&unblock_signals);
        v8 = &block_signals;
        sigemptyset(v8);
        sig_mask_changed = 1;
        return v1 ^ *(v11 + 0x28);
    }
    else
    {
        sigfillset(&block_signals);
        v8 = &unblock_signals;
        sigemptyset(v8);
        sig_mask_changed = 1;
        return v1 ^ *(v11 + 0x28);
    }
}
