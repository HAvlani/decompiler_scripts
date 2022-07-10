typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int caught_signals;
extern struct_0 interrupt_signal;
extern struct_1 stdout;
extern struct_0 stop_signal_count;
extern char used_color;

int process_signals()
{
    char v0;  // [bp-0xa8]
    unsigned long v1;  // [bp-0x20]
    struct_1 *v5;  // fs

    while (interrupt_signal != 0 || stop_signal_count != 0)
    {
        if (used_color != 0)
        {
            restore_default_color();
        }
        fflush_unlocked(stdout);
        sigprocmask(0x0, &caught_signals, ((int)&v0));
        if (stop_signal_count != 0)
        {
            19 = 19;
            stop_signal_count = stop_signal_count - 1;
        }
        else
        {
            signal(interrupt_signal, 0x0);
        }
        raise(0x13);
        sigprocmask(0x2, ((int)&v0), 0x0);
    }
    return v1 ^ *(v5 + 0x28);
}
