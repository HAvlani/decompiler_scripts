extern unsigned int g_40c9d8;
extern unsigned int g_40c9ef;
extern unsigned int proc_status.5709;

int openat_proc_name()
{
    char v0;  // [bp-0x58]
    unsigned int v10;  // r13d
    unsigned long|unsigned long long|unsigned int v2;  // eax
    unsigned long long v3;  // rax
    char *v6;  // rdx
    unsigned long long v7;  // rbx
    unsigned int v8;  // esi
    unsigned long|unsigned long long v9;  // rdi

    v7 = v9;
    if (*(v6) != 0)
    {
        v2 = ((int)proc_status.5709);
        if (proc_status.5709 == 0)
        {
            v10 = open("/proc/self/fd", 0x90900, v6);
            if (v10 < 0)
            {
                proc_status.5709 = -1;
                v3 = 0;
                return v3;
            }
            __sprintf_chk(((int)&v0), 0x1, 0x20, &g_40c9d8, v10);
            proc_status.5709 = (0 - ((int)(access(&v0, 0x0) < 1)) & 2) - 1;
            close(v10);
            v2 = ((long long)proc_status.5709);
        }
        if (v10 >= 0 || proc_status.5709 != 0)
        {
            if (v2 >= 0)
            {
                v2 = strlen(v6);
                v9 = v2 + 27;
                if (v2 + 27 <= 4032)
                {
                    strcpy(__sprintf_chk(((int)v7), 0x1, 0xffffffff, &g_40c9ef, v8) + v7, v6);
                    v3 = v7;
                    return v3;
                }
                v7 = malloc(v9);
                if (v7 != 0)
                {
                    strcpy(__sprintf_chk(((int)v7), 0x1, 0xffffffff, &g_40c9ef, v8) + v7, v6);
                    v3 = v7;
                    return v3;
                }
                else
                {
                    v3 = 0;
                    return v3;
                }
            }
            v3 = 0;
            return v3;
        }
    }
    *(v9) = 0;
    v3 = v9;
    return v3;
}
