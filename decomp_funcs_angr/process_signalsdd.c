typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int caught_signals;
extern struct_0 info_signal_count;
extern struct_0 interrupt_signal;

int process_signals()
{
    char v0;  // [bp-0xa8]
    unsigned long v1;  // [bp-0x20]
    struct_1 *v5;  // fs

    while (info_signal_count != 0 || interrupt_signal != 0)
    {
        while (true)
        {
            sigprocmask(0x0, &caught_signals, ((int)&v0));
            if (info_signal_count != 0)
            {
                info_signal_count = info_signal_count - 1;
            }
            sigprocmask(0x2, ((int)&v0), 0x0);
            if (((int)interrupt_signal) == 0)
            {
                print_stats();
                return v1 ^ *(v5 + 0x28);
            }
            cleanup();
            print_stats();
            raise(interrupt_signal);
        }
    }
    return v1 ^ *(v5 + 0x28);
}
