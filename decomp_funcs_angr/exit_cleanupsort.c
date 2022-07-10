typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int caught_signals;
extern unsigned long long temphead;

int exit_cleanup()
{
    char v0;  // [bp-0x98]
    char v1;  // [bp-0x90]
    unsigned long v2;  // [bp-0x10]
    unsigned long long v4;  // rax
    struct_0 * v6;  // rbx
    struct_0 *v7;  // fs

    if (temphead != 0)
    {
        v4 = pthread_sigmask(0x0, &caught_signals, ((int)&v1));
        v6 = temphead;
        v4 = ((char)(v4 == 0));
        v0 = ((char)(v4 == 0));
        if (temphead != 0)
        {
            while (true)
            {
                unlink(v6 + 13);
                v6 = v6->field_0;
                if (v6 == 0)
                {
                    break;
                }
            }
            v4 = ((long long)v0);
        }
        temphead = 0;
        if (((long long)v4) == 0)
        {
            close_stdout();
            return v2 ^ *(v7 + 0x28);
        }
        cs_leave.part.0();
        close_stdout();
        return v2 ^ *(v7 + 0x28);
    }
    close_stdout();
    return v2 ^ *(v7 + 0x28);
}
