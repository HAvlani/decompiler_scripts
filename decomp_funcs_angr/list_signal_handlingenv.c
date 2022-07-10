typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_4082f0;
extern unsigned long long g_409671;

int list_signal_handling()
{
    unsigned long v0;  // [bp-0x198]
    unsigned long v1;  // [bp-0x190]
    struct_1 *v10;  // fs
    unsigned long v2;  // [bp-0x180]
    char v3;  // [bp-0x178]
    unsigned long v4;  // [bp-0xf8]
    unsigned long v5;  // [bp-0x40]
    unsigned long long v7;  // rax
    unsigned long long|unsigned int v8;  // r13d
    unsigned long long v9;  // r15

    sigemptyset(((int)&v3));
    v7 = sigprocmask(0x0, 0x0, ((int)&v3));
    if (v7 == 0)
    {
        v8 = 1;
        do
        {
            v7 = sigaction();
            if (v7 == 0)
            {
                if (v4 != 1)
                {
                    v7 = sigismember();
                    if (v7 != 0)
                    {
                        v9 = &g_409671;
                    }
                }
                else
                {
                    v9 = (sigismember() != 0? "," : 4232817);
                }
                if (v4 == 1 || v7 != 0)
                {
                    v2 = &g_409671;
                    sig2str();
                    v1 = v2;
                    v0 = v9;
                    __fprintf_chk();
                }
            }
            v8 = ((long long)v8) + 1;
        }
        while (((int)v8) != 65);
        return v5 ^ *(v10 + 0x28);
    }
    error(0x7d, *(__errno_location()), dcgettext(0x0, &g_4082f0, 0x5));
}
