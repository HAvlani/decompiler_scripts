extern struct_0 interrupt_signal;
extern struct_0 stop_signal_count;

int stophandler()
{
    unsigned long long v1;  // rax

    v1 = ((long long)interrupt_signal);
    if (interrupt_signal == 0)
    {
        v1 = ((long long)(stop_signal_count + 1));
        stop_signal_count = stop_signal_count + 1;
        return v1;
    }
    return v1;
}
