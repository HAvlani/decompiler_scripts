extern char completed.8061;

int __do_global_dtors_aux()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    if (completed.8061 == 0)
    {
        v0 = &stack_base+0;
        completed.8061 = 1;
        return (long long)deregister_tm_clones();
        if (False)
        {
            __cxa_finalize();
            completed.8061 = 1;
            return (long long)deregister_tm_clones();
        }
    }
    return v2;
}
