typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_0 caught_signals;
extern unsigned long long g_417664;
extern char g_417690;
extern struct_0 g_424230;
extern struct_0 g_424240;
extern struct_0 g_424250;
extern struct_0 g_424260;
extern struct_0 g_424270;
extern struct_0 g_424280;
extern struct_0 g_424290;
extern <missing-type> stophandler;

int signal_setup()
{
    unsigned long v0;  // [bp-0xd8]
    BOT v1;  // [bp-0xd0]
    unsigned long v10;  // [bp-0x40]
    unsigned long long v12;  // rax
    struct_2 *|unsigned long long v13;  // rbx
    struct_2 *|unsigned long long v14;  // rbp
    char v15;  // dil
    unsigned long long|unsigned int v16;  // r12
    struct_1 *v17;  // fs
    BOT v2;  // [bp-0xc0]
    BOT v3;  // [bp-0xb0]
    BOT v4;  // [bp-0xa0]
    BOT v5;  // [bp-0x90]
    BOT v6;  // [bp-0x80]
    BOT v7;  // [bp-0x70]
    BOT v8;  // [bp-0x60]
    unsigned int v9;  // [bp-0x50]

    if (((long long)v15) == 0)
    {
        v13 = &g_417664;
        v14 = 20;
        while (true)
        {
            v12 = sigismember(&caught_signals, v14);
            if (v12 != 0)
            {
                signal(v14, 0x0);
                if (v13 == 4290192)
                {
                    return v10 ^ *(v17 + 0x28);
                }
            }
            else if (v13 == 4290192)
            {
                return v10 ^ *(v17 + 0x28);
            }
            if (v13 != 4290192)
            {
                v14 = ((int)v13->field_0);
                v13 += 4;
            }
        }
    }
    else
    {
        v14 = &g_417664;
        v16 = 20;
        sigemptyset(&caught_signals);
        v13 = &g_417664;
        while (true)
        {
            sigaction();
            if (v0 != 1)
            {
                sigaddset(&caught_signals, v16);
            }
            if (v13 == 4290192)
            {
                break;
            }
            v16 = ((int)v13->field_0);
            v13 += 4;
        }
        v9 = 0x10000000;
        v16 = 20;
        v1 = caught_signals;
        v2 = g_424230;
        v3 = g_424240;
        v4 = g_424250;
        v5 = g_424260;
        v6 = g_424270;
        v7 = g_424280;
        v8 = g_424290;
        while (true)
        {
            v12 = sigismember(&caught_signals, v16);
            if (v12 != 0)
            {
                v0 = (((unsigned int)v16) == 20? &stophandler : 4221232);
                sigaction();
            }
            if (v14 == v13)
            {
                break;
            }
            v16 = ((long long)v14->field_0);
            v14 += 4;
        }
        return v10 ^ *(v17 + 0x28);
    }
}
