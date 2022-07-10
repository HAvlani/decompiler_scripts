typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char foreground;
extern unsigned int g_4071a8;
extern unsigned long long kill_after;
extern struct_0 monitored_pid;
extern unsigned int term_signal;
extern unsigned int timed_out;
extern char verbose;

int cleanup()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v4;  // rbx
    struct_0 *|unsigned long long v5;  // ebp
    unsigned long long v6;  // rdi
    unsigned int v7;  // r12d
    struct_1 *v8;  // fs

    v4 = v6;
    v1 = *(v8 + 0x28);
    if (((int)v6) == 14)
    {
        timed_out = 1;
        v4 = ((long long)term_signal);
    }
    v5 = ((int)monitored_pid);
    if (monitored_pid != 0)
    {
        if ((((char)((((long long)(BinaryOp CmpF)) & 69) >> 2)) & 1) != 0 || !(((char)[D] amd64g_calculate_condition(0x4<64>, 0x0<64>, And(Conv(32->64, (Load(addr=0x40b2c0<64>, size=8, endness=Iend_LE) ==f 0x0<64>)), 0x45<64>), 0x0<64>, cc_ndep<8>))))
        {
            v0 = kill_after;
            term_signal = 9;
            v7 = ((int)v5->field_0);
            settimeout();
            kill_after = 0;
            *(__errno_location() + None) = v7;
        }
        if (...)
        {
            if (sig2str() != 0)
            {
                __snprintf_chk();
            }
            v5 = (long long)quote();
            error(0x0, 0x0, dcgettext(0x0, &g_4071a8, 0x5));
        }
        if (...)
        {
            v5 = ((long long)monitored_pid);
            if (monitored_pid == 0)
            {
                signal(((int)v4), 0x1);
            }
        }
        kill(v5, ((int)v4));
        if (!(foreground != 0))
        {
            signal(((int)v4), 0x1);
            kill(0x0, ((int)v4));
            if (((int)v4) == 9)
            {
                if ((v1 ^ *(v8 + 0x28)) == 0)
                {
                    return v1 ^ *(v8 + 0x28);
                }
                __stack_chk_fail(); /* do not return */
            }
            if (((int)v4) == 18)
            {
                if ((v1 ^ *(v8 + 0x28)) == 0)
                {
                    return v1 ^ *(v8 + 0x28);
                }
                else
                {
                    __stack_chk_fail(); /* do not return */
                }
            }
            else
            {
                if (v5 == 0)
                {
                    signal(0x12, 0x1);
                }
                kill(v5, 0x12);
                signal(0x12, 0x1);
                kill(0x0, 0x12);
                if ((v1 ^ *(v8 + 0x28)) == 0)
                {
                    return v1 ^ *(v8 + 0x28);
                }
                else
                {
                    __stack_chk_fail(); /* do not return */
                }
            }
        }
        else if ((v1 ^ *(v8 + 0x28)) == 0)
        {
            return v1 ^ *(v8 + 0x28);
        }
        else
        {
            __stack_chk_fail(); /* do not return */
        }
    }
    _exit(((int)v4) + 128);
    __stack_chk_fail(); /* do not return */
}
